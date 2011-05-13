#include "nth_profiling.h"
#include "nth_desc.h"
#include "nth_spin.h"
#include "nth_support.h"
#include <stdio.h>
#include <time.h>
#include <string.h>

#define PROFILE_LEVELS NTH_MAX_LEVEL
int MAX_SAMPLES;

#define NO_PROFILE 0
#define FULL_PROFILE 1
#define TASK_PROFILE 2
#define ADAPTATIVE_PROFILE 3

struct time_stats {
	union {
		struct {
			nth_time_t min;
			nth_time_t average;
			nth_time_t max;
			int nsamples;
		} d;
		l2cacheline dummy;
	} c;
};

struct level_data {
	int nsamples;
	nth_time_t average;
	nth_time_t min;
	nth_time_t max;
	nth_spin_t lock;
	int avg_depth;
	int noprofile;

	struct time_stats tasksize[64];
};

profile_level_hook close_level_hook = 0;

#define is_profile_owner(task,pf) (&(task)->profile == (pf))

static struct level_data level_data[PROFILE_LEVELS];
static int do_profile = 0;
static int profile_mode = TASK_PROFILE;

#define slow_wtime
#ifdef slow_wtime
#if 0
nth_time_t get_wtime_slow ()
{
	struct timespec ts;
	nth_time_t t;

//	int err = clock_gettime(CLOCK_REALTIME,&ts);
	int err = clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&ts);

	t = (nth_time_t) (ts.tv_sec)  + (nth_time_t) ts.tv_nsec * 1.0e-9;

	return t;
}
#else
double omp_get_wtime (void);
  
#define get_wtime_slow() omp_get_wtime()
#endif

#endif


static void profile_task_commit (nth_task_ctx_t *task);

void nth_init_profile (nth_profile_data_t *profile)
{
	profile->p.d.active = 0;
	profile->p.d.partial_time = 0;
	profile->p.d.level_time = 0;
	profile->p.d.total_time = 0;
	profile->p.d.estimate = 0;
	profile->s.d.tree_time = 0;
	nth_spin_init(&profile->s.d.lock);
}

int profile_exectime_start ( nth_task_ctx_t * task )
{
	if (!do_profile ) return 0;

	nth_profile_data_t *profile = task->active_profile;

	if (profile->p.d.active) return 0;

	profile->p.d.active = 1;
	nth_time_t x = get_wtime_slow();
	profile->p.d.partial_time = x;

	return 1;
}

int profile_exectime_stop ( nth_task_ctx_t * task)
{
	if (!do_profile ) return 0;

	nth_profile_data_t *profile = task->active_profile;

	if (!profile->p.d.active) return 0;

	nth_time_t end;
	end = get_wtime_slow();

	profile->p.d.level_time +=
		end - profile->p.d.partial_time;
	profile->p.d.active = 0;

	return 1;
}

void profile_exectime_sample ( nth_task_ctx_t * task )
{
	if (!do_profile ) return;

	nth_profile_data_t *profile = task->active_profile;

	if (!profile->p.d.active) return;

	nth_time_t end;
	end = get_wtime_slow();

	nth_time_t diff = end - profile->p.d.partial_time;

	if ( diff > 0 ) {
		profile->p.d.level_time += diff;
		profile->p.d.partial_time = end;
	}
}

extern nth_time_t min_size;

void profile_task_finished ( nth_task_ctx_t * task )
{
	if (!do_profile) return;

	if ( !is_profile_owner(task,task->active_profile) ) return;

	profile_task_commit(task);

	if ( task->profile.p.d.total_time > min_size ) {

		nth_atm_add(&nth_data.good_tasks[task->level],1);
	}

	level_data[task->level].tasksize[NTH_KTH].c.d.nsamples++;
	level_data[task->level].tasksize[NTH_KTH].c.d.average +=
		task->profile.p.d.total_time;
}

void profile_task_enter_level ( nth_task_ctx_t *task )
{
	if (!do_profile) return;

	if (   profile_mode == TASK_PROFILE
	       || level_data[task->level].noprofile ) {
		task->active_profile = task->parent_ctx->active_profile;
	} else {
		profile_exectime_stop(task->parent_ctx);
		profile_exectime_start(task);
	}
}

void profile_task_exit_level ( nth_task_ctx_t *task )
{
	if (!do_profile) return;

 	if ( is_profile_owner(task,task->active_profile) ) {
 		profile_exectime_stop(task);
 		profile_task_commit(task);
 		profile_exectime_start(task->parent_ctx);
 	}

}

static void profile_task_commit (nth_task_ctx_t *task)
{
	assert(task->level < PROFILE_LEVELS);
	nth_task_ctx_t *parent;
	nth_profile_data_t *my_profile = task->active_profile;

	if (my_profile->p.d.level_time == 0) return;

	my_profile->p.d.total_time += my_profile->p.d.level_time;

	if ( profile_mode == TASK_PROFILE ) return;

	if ( (parent = task->parent_ctx) != NULL ) {
		nth_profile_data_t *parent_profile = parent->active_profile;

		// TODO: if parent has no outstading tasks and I'm a child
		// it means i'm an immediate task and that I'm the only one
		// so we can skip locking
//		if ( parent->my_ntasks > 0 ) {
			nth_spin_lock(&parent_profile->s.d.lock);
//		}

		parent_profile->s.d.tree_time += my_profile->p.d.level_time +
					  my_profile->s.d.tree_time;

		if ( task->immediate )
			parent_profile->p.d.total_time +=
				my_profile->p.d.total_time;

//		if ( parent->my_ntasks > 0 ) {
			nth_spin_unlock(&parent_profile->s.d.lock);
//		}
	}

	struct level_data *ptr = &level_data[task->level];

	if ( ptr->nsamples < MAX_SAMPLES )
	{
		nth_time_t subtree_time;
		subtree_time = my_profile->p.d.level_time
			+ my_profile->s.d.tree_time;

		nth_spin_lock(&ptr->lock);
		if ( subtree_time < ptr->min ||
		     ptr->min == 0 ) ptr->min = subtree_time;

		if ( subtree_time > ptr->max )
			ptr->max = subtree_time;

		if ( ptr->nsamples )
			ptr->average =
				(ptr->average / (ptr->nsamples+1)) *
				 ptr->nsamples
				+ subtree_time / (ptr->nsamples+1);
		else
			ptr->average = subtree_time;

		ptr->nsamples++;
			
		nth_spin_unlock(&ptr->lock);
	} else {
		if ( profile_mode == ADAPTATIVE_PROFILE  &&
			!ptr->noprofile ) {
			ptr->noprofile = 1;
		}
		if ( close_level_hook ) close_level_hook(task->level);
	}

}

// TODO: stub & level
void profile_estimate_task_size ( int level, nth_time_t *estimate )
{
	if (!do_profile) return;

	struct level_data *ptr = &level_data[level];

	// average should be 0 if nsamples is 0
	*estimate = ptr->average;
}

int profile_estimate_success_rate (int level)
{
	if ( nth_data.total_tasks[level] > 0 )
		return (nth_data.good_tasks[level]*100)/
				nth_data.total_tasks[level];
	else
		return -1;
}

void profile_init ()
{
	int i,n;

	for ( i = 0; i < PROFILE_LEVELS; i++ ) {
		level_data[i].nsamples = 0;
		level_data[i].min = 0;
		level_data[i].max = 0;
		level_data[i].average = 0;
		level_data[i].noprofile = 0;
		nth_spin_init(&level_data[i].lock);

		for ( n = 0; n < nth_data.nkths; n++ ) {
			level_data[i].tasksize[n].c.d.nsamples = 0;
			level_data[i].tasksize[n].c.d.average = 0;
			level_data[i].tasksize[n].c.d.min = 0;
			level_data[i].tasksize[n].c.d.max = 0;
		}
	}
}

void profile_set_close_level_hook ( profile_level_hook hook )
{
	close_level_hook = hook;
}

void profile_activate (char *mode)
{
	char *samples;

	do_profile = 1;

	if (!mode) return;

	samples = strchr(mode,',');
	if ( samples ) {
		*samples++ = 0;
		MAX_SAMPLES = atoi(samples);
	} else MAX_SAMPLES = 100;

	if (!strcasecmp(mode,"full")) profile_mode = FULL_PROFILE;
	else if (!strcasecmp(mode,"adaptative")) profile_mode = ADAPTATIVE_PROFILE;
	else if (!strcasecmp(mode,"none")) do_profile=0;
	else profile_mode = TASK_PROFILE;
}

void profile_show_stats ()
{
	if (!do_profile) return;
	int i,n;
	nth_time_t total_avg_size = 0;
	int	   nlevels=0;


	printf("Profile (%s) information\n",
		profile_mode == TASK_PROFILE ? "task mode" :
		profile_mode == FULL_PROFILE ? "full mode" :
		"adaptative mode" );
	printf("======================================\n");
	for ( i = 0; i < PROFILE_LEVELS; i++ ) {
		if ( level_data[i].nsamples ) {			
			printf("%2d %c samples %u min %g max %g avg %f\n",
				i,
				level_data[i].average < min_size ? '-' : '+', 
				level_data[i].nsamples,
				level_data[i].min,
				level_data[i].max,
				level_data[i].average);
		}
	}

	printf("Good tasks:\n");

	int total=0, total_good=0;
	for ( i = 0; i < NTH_MAX_LEVEL; i++ ) {
		if ( nth_data.total_tasks[i] > 0 ) {
			printf(" %c level %d : %5d/%5d %f %%\n",
			  level_data[i].average < min_size ? '-' : '+',
			  i,
			  nth_data.good_tasks[i],
			  nth_data.total_tasks[i],
			  (float)nth_data.good_tasks[i]/(float)nth_data.total_tasks[i]);
			total += nth_data.total_tasks[i];
			total_good += nth_data.good_tasks[i];
		}
	}
	printf("Total good tasks: %5d/%5d %f %%\n",
	total_good,
	total,
	(float)total_good/(float)total	);


	printf("Computation time in each level:\n");
	int samples;
	nth_time_t th_time[nth_data.nkths];
	int th_samples[nth_data.nkths];

	for ( i = 0; i < nth_data.nkths; i++ ) {
		th_time[i] = 0;
		th_samples[i] = 0;
	}

	for ( i = 0; i < PROFILE_LEVELS; i++ ) {
		nth_time_t avg_task_size=0;
		samples = 0;
		for ( n = 0; n < nth_data.nkths; n++ ) {
			if ( level_data[i].tasksize[n].c.d.nsamples > 0 ) {
				avg_task_size +=
					level_data[i].tasksize[n].c.d.average;
				samples += level_data[i].tasksize[n].c.d.nsamples;

				th_samples[n] +=
					level_data[i].tasksize[n].c.d.nsamples;
				th_time[n] +=
					level_data[i].tasksize[n].c.d.average;
			}
		}
		if ( samples ) {
			total_avg_size += avg_task_size/samples;
			nlevels++;
			printf("Level %d total: %f averag :%f\n",
				i,avg_task_size,
				avg_task_size/samples);
		}
	}
	printf("\n");
	for ( i = 0; i < nth_data.nkths; i++ ) {
		printf("Thread %d total: %f average: %f\n",
			i, th_time[i], th_time[i]/th_samples[i]);

	}

	printf("\nTotal task time: %f  average: %f\n", total_avg_size / nlevels);

	printf("======================================\n");
}

void profile_cleanup ()
{
	
}
