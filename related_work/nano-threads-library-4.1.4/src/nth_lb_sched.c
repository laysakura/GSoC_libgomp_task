#include "config.h"
#include "nth_sched.h"
#include "nth_data.h"
#include "nth_list.h"
#include  <stdlib.h>
#include "nth_support.h"
#include "nth_spin.h"
#include "nth_profiling.h"

#define NTH_LB_MAX_LEVEL 10

typedef struct lb_kth_data {
	nth_desc_edlist_t deque[NTH_LB_MAX_LEVEL];
	nth_desc_edlist_t extra_deque; // for overflows of level
	int bonus;
} lb_kth_data_t;

static lb_kth_data_t *deques;
static int num_ready;
static int min_level;

nth_time_t min_size= 1000e-6; /* 1 milisecond */

inline static void inc_ready (nth_desc_t *desc)
{
	if ( !desc->tied &&
	     !desc->idle &&
	      desc->state == NTH_DST_READY ) {
		int old;
		old = nth_atm_add(&num_ready,1);
	}
}

inline static void dec_ready (nth_desc_t *desc)
{
	if ( !desc->tied &&
	     !desc->idle &&
	      desc->state == NTH_DST_READY ) {
		int old;
		old = nth_atm_add(&num_ready,-1);
	}
}

inline static void update_min_level ( int level )
{
	if ( level < 2 ) return;
	int oldlevel;
retry:
	oldlevel = min_level;
	if ( level < oldlevel ) {
		if ( !__sync_bool_compare_and_swap (&min_level,oldlevel,level) )
			goto retry;
	}
}

void lb_queue_desc (nth_desc_t *desc);

/* At creation switch to the new task if
	- parent task is untied.
	- new nano-thread is not tied
	- new nano-thread is a task
	- bonus is active
*/

nth_desc_t* lb_sp_creation ( nth_desc_t *parent, nth_desc_t *new )
{
	assert(new->state == NTH_DST_READY);

// 	if ( deques[parent->vp].bonus ) {
// 		deques[parent->vp].bonus = 0;
// 		return new;
// 	}

	if ( !new->is_task
//	     ||(new->tied && new->vp != parent->vp)
	     || parent->tied ) {
//	   ) {

		lb_queue_desc(new);
		return NULL;
	}

	return new;
}

nth_desc_t* lb_sp_unblock ( nth_desc_t *current, nth_desc_t *new, int *requeue )
{
	*requeue = 0;
	new->state = NTH_DST_READY;
	inc_ready(new);
	update_min_level(new->deep_level);

	return NULL;
}

inline nth_desc_t * lb_get_local (nth_desc_t *from)
{
	int i;
	struct nth_desc_t* desc=0;
	lb_kth_data_t *lb_data;

	// look at my local deques from bottom to top
	lb_data = &deques[from->vp];

	desc = nth_desc_edlist_get_back(&(lb_data->extra_deque),
			NTH_DST_READY,from);
	if (!desc)
	for ( i = NTH_LB_MAX_LEVEL-1; i >= 0; i-- ) {
		desc = nth_desc_edlist_get_back(&lb_data->deque[i],
				NTH_DST_READY,from);
		if (desc) return desc;
	}

	return desc;
}

inline nth_desc_t * lb_try_to_steal (int victim, nth_desc_t *from)
{
	int i;
	nth_desc_t* desc=0;
	lb_kth_data_t *lb_data;

	// look to steal from top to bottom
	lb_data = &deques[victim];
	
	for ( i = 0; i < NTH_LB_MAX_LEVEL; i++ ) {
		desc = nth_desc_edlist_get_front(&lb_data->deque[i],
				NTH_DST_READY,from);
		if (desc) return desc;
	}
	desc = nth_desc_edlist_get_front(&lb_data->extra_deque,
			NTH_DST_READY,from);

	return desc;
}

nth_desc_t* lb_sp_schedule ( nth_desc_t *from_desc )
{
	nth_desc_t* desc=0;

	if (!desc)
	desc = lb_get_local(from_desc);

	if (!desc && from_desc->creator ) {
		nth_desc_t *creator = from_desc->creator;
		// try to steal parent task
		if ( creator->is_task && creator->state == NTH_DST_READY
		   && !creator->tied ) {
			desc = nth_desc_edlist_remove(creator,0);
		}
	}


	if (!desc) {
		// look at other thread's local queue from my team and steal work
		// should be random...
		int i;
		i = (from_desc->vp+1)%nth_data.nkths;
		for ( ; i != from_desc->vp ; ) {			
			desc = lb_try_to_steal(i,from_desc);
			if (desc) break;
			i = (i+1)%nth_data.nkths;
		}
	}

	if (desc) {
		dec_ready(desc);
#if 0
		if ( desc->deep_level == min_level ) {
			compute_min_level();
		}
#endif
	}

	return desc;
}


void lb_queue_desc (nth_desc_t *desc)
{
	lb_kth_data_t *lb_data = &deques[desc->vp];	

	if ( desc->state == NTH_DST_READY ) {
		inc_ready(desc);
#if 0
		update_min_level(desc->deep_level);
#endif
	}
		if ( desc->deep_level < NTH_LB_MAX_LEVEL )
			nth_desc_edlist_push_back( &lb_data->deque[desc->deep_level], desc);
		else			
			nth_desc_edlist_push_back( &lb_data->extra_deque, desc);
		
}


void lb_parse_option ( char *option, char *value )
{
   if (!strcasecmp(option,"minsize")) {
	min_size = atoi(value);
   } 
}


void lb_init ()
{
	int i,j;

	deques = (lb_kth_data_t *)malloc(sizeof(lb_kth_data_t)*nth_data.nkths);
	if (!deques) {
		// TODO: abort
	}
	for ( i  = 0; i < nth_data.nkths ; i++) {
		for ( j = 0 ; j < NTH_LB_MAX_LEVEL; j++ ) {
			nth_desc_edlist_init(&deques[i].deque[j]);
		}
		nth_desc_edlist_init(&deques[i].extra_deque);
		deques[i].bonus = 0;
	}

	num_ready = 0;
	min_level = 1;
}

int lb_num_ready (void) { return num_ready; }


schedule_desc_t lb_schedule =
{
	"level based schedule",
	lb_init,
	lb_sp_creation, /* creation sp */
	lb_sp_schedule, /* finish sp */
	lb_sp_schedule, /* block sp */
	lb_sp_schedule, /* yield sp */
	lb_sp_schedule, /* idle sp */
	lb_sp_unblock,  /* wakeup sp */
	lb_sp_schedule, /* generic sp */
	lb_queue_desc,
	lb_parse_option,
	lb_num_ready,
};

// TODO: move cutoff to another file and rename
nth_cutoff_res_t nth_numready_cutoff_create (void);
nth_word_t lb_level_closed[NTH_MAX_LEVEL];

static nth_cutoff_res_t lb_cutoff_create (int *n)
{
	nth_desc_t *myself = NTH_MYSELF;
	int level = myself->task_ctx->level+1;
	int dummy;

	if ( lb_level_closed[level] ) return NTH_CUTOFF_IMMEDIATE;

	nth_time_t estimate;
	profile_estimate_task_size(level,&estimate);

	if ( estimate == 0 ) {

 		 if ( nth_sch_get_numready_level(level) > nth_data.nkths * 2 ) {
 			return NTH_CUTOFF_IMMEDIATE;
 		 }

		 return nth_maxlevel_cutoff.create(&dummy);

		return NTH_CUTOFF_IMMEDIATE;
	}

	if ( estimate > min_size ) {
		return nth_numready_cutoff.create(&dummy);
	}


	return NTH_CUTOFF_IMMEDIATE;
}

static void lb_cutoff_config (char *value)
{
	if (value) min_size = atoi(value)*1e-6;
}

void lb_profile_close_level (int level)
{
	float estimate;
	profile_estimate_task_size(level,&estimate);
	if ( estimate < min_size )
		lb_level_closed[level] = 1;
}

static void lb_cutoff_init (void)
{
	nth_numready_cutoff.config("4");
	nth_maxlevel_cutoff.config("4");
	nth_data.max_num_nthreads = 2 * nth_data.nkths;
	profile_activate("adaptative");
	profile_set_close_level_hook(lb_profile_close_level);

	int i;
	for ( i = 0; i < NTH_MAX_LEVEL; i++ )
		lb_level_closed[i] = 0;
}

static void lb_cutoff_print (void)
{
	fprintf(stderr,"=%g,%d",min_size,nth_data.max_num_nthreads);
}

nth_cutoff_t lb_cutoff =
{
	"lb",
	lb_cutoff_create,
	lb_cutoff_config,
	lb_cutoff_init,
	lb_cutoff_print,
};

int min_succes_rate = 60;

static nth_cutoff_res_t sr_cutoff_create (int *n)
{
	nth_desc_t *myself = NTH_MYSELF;
	int level = myself->task_ctx->level+1;

	int sr = profile_estimate_success_rate (level);

	if ( sr == -1 ) {
		 if (level < nth_data.max_deep_level )
		    return NTH_CUTOFF_CREATE;

		return NTH_CUTOFF_IMMEDIATE;
	}

	if ( sr > min_succes_rate ) {
		if ( nth_data.num_nthreads < nth_data.max_num_nthreads ) {
			return NTH_CUTOFF_CREATE;
		} else {
			return NTH_CUTOFF_IMMEDIATE;
		}
	}

	return NTH_CUTOFF_IMMEDIATE;
}

static void sr_cutoff_config (char *value)
{
	if (value) min_succes_rate = atoi(value);
}

static void sr_cutoff_init (void)
{
	nth_data.max_num_nthreads = 2 * nth_data.nkths;
	profile_activate("task");
}

static void sr_cutoff_print (void)
{
	fprintf(stderr,"=%d",min_succes_rate);
}

nth_cutoff_t sr_cutoff =
{
	"sucess rate cutoff",
	sr_cutoff_create,
	sr_cutoff_config,
	sr_cutoff_init,
	sr_cutoff_print,
};
