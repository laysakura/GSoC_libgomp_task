#include "config.h"
#include "nth_sched.h"
#include "nth_data.h"
#include "nth_main.h"
#include "nth_support.h"
#include <stdio.h>
#include <string.h>
#include "nth_profiling.h"
#include "nth_instrument.h"
#include "nth_gv.h"

/* Private schedule data */
static nth_desc_edlist_t idle_nths_queue;
schedule_desc_t* nth_schedule = &default_schedule;

//TODO: do it correctly...
nth_word_t nth_sch_num_ready[NTH_MAX_LEVEL+1];

/* common nano-thread scheduling services */
inline nth_prepare_to_run (nth_desc_t *to)
{
	nth_desc_t *myself = NTH_MYSELF;
// TODO:
// 	assert((!myself->player && !to->player)
// 		|| (myself->player->team == to->player->team) );

	if ( to->tie ) {
		to->tie = 0;
		to->tied = 1;
	}

 	if (!to->executed) to->executed = 1;

	to->vp = NTH_KTH;
	if ( to->is_task && myself->player ) {
		to->player = myself->player;
	}

	nth_atm_add(&to->ndep, 1);

	to->state = NTH_DST_RUNNING;

	if (!to->idle)
		nth_atm_add(&nth_sch_num_ready[nth_min(to->deep_level,NTH_MAX_LEVEL)],-1);
}

/* コンテキストスイッチ!! */
void nth_sch_switch_to ( nth_desc_t *to )
{
	nth_desc_t *myself = NTH_MYSELF;

	nth_instrument_leave_cpu(myself);
	profile_exectime_stop(myself->task_ctx);

	nth_prepare_to_run(to);

	nth_desc_depsub(myself, 1);

        myself->state = NTH_DST_READY;

	if (!to->idle)
		profile_exectime_start(to->task_ctx);

        nth_qt_block(
           (nth_qt_helper_t *) nth_helper_switch,
           (void *) 0,
           (void *) to,
           (nth_qt_t *) to->sp
        );
}

void nth_sch_exit_to ( nth_desc_t *to )
{
	nth_desc_t *myself = NTH_MYSELF;

	nth_prepare_to_run(to);
	myself->state = NTH_DST_INIT;

	if (!to->idle)
		profile_exectime_start(to->task_ctx);

	nth_qt_block(
		(nth_qt_helper_t *) nth_helper_exit,
		(void *) 0,
		(void *) to,
		(nth_qt_t *) to->sp
	);
}

void nth_sch_block_on_cond ( nth_uint16_t block_state, volatile nth_word_t * var, nth_word_t val )
{
nth_desc_t *myself = NTH_MYSELF;	

	if ( *var > val ) {
		int restart = profile_exectime_stop(myself->task_ctx);

		myself->idle_state = block_state;
		while ( *var > val ) {
			// set idleness each iteration to avoid an unexpected
			// promotion in some race situations
			myself->idle = 1;
			nth_sch_yield();
		}
		myself->idle_state = 0;
		myself->idle = 0;

 		if (restart)
 			profile_exectime_start(myself->task_ctx);
	}
}

void nth_sch_wakeup ( nth_desc_t * desc )
{
	switch (desc->state) {
	case NTH_DST_READY:
		if ( desc->idle ) {
			desc = nth_desc_edlist_remove(desc,&idle_nths_queue);	
			if (desc) {
				desc->idle = 0;
				nth_atm_add(&nth_sch_num_ready[nth_min(desc->deep_level,NTH_MAX_LEVEL)],1);
				nth_schedule->enqueue_desc(desc);
			}
		}
		break;
	case NTH_DST_CREATION:
		desc->state = NTH_DST_READY;
		nth_atm_add(&nth_sch_num_ready[nth_min(desc->deep_level,NTH_MAX_LEVEL)],1);
		nth_schedule->enqueue_desc(desc);
		break;
	}
}

void nth_sch_newnth ( nth_desc_t *newnth )
{
	nth_desc_t *myself = NTH_MYSELF;

	nth_instrument_create(newnth);

	if (newnth->ndep > 0 ) {
		// TODO: race condition with output
		newnth->state = NTH_DST_CREATION;
		newnth->idle_state = NTH_DST_BLOCK_NDEP;
		return;
	}

	newnth->state = NTH_DST_READY;
	nth_atm_add(&nth_sch_num_ready[nth_min(newnth->deep_level,NTH_MAX_LEVEL)],1);
        nth_desc_t *next = nth_schedule->creation_sp(myself,newnth);
	if (next) {
		gv_wf_schedule(myself,next);
		nth_sch_switch_to(next);
	}
}

void nth_sch_enqueue (nth_desc_t *desc)
{
	if (desc->idle)
		nth_desc_edlist_push_back (&idle_nths_queue,desc);
	else {
		nth_atm_add(&nth_sch_num_ready[nth_min(desc->deep_level,NTH_MAX_LEVEL)],1);
		nth_schedule->enqueue_desc(desc);
	}
}

inline nth_desc_t * nth_sch_getidle ()
{
	nth_desc_t *myself=NTH_MYSELF;
	nth_desc_t *next=0;

	next =  nth_desc_edlist_get_front(&idle_nths_queue,
				NTH_DST_READY,myself);

	return next;
}

void nth_sch_exitnth (void)
{
	nth_desc_t *next,*myself = NTH_MYSELF;

	nth_instrument_exit(myself);

	myself->idle = 1;
	myself->idle_state = NTH_DST_EXIT;
	nth_instrument_enter_idle(myself);
	
	while (TRUE){
		next = nth_schedule->idle_sp(myself);
		if (!next) next = nth_sch_getidle();
		if (next) 
			nth_sch_exit_to(next);		
	}
}


void nth_sch_yield ( void )
{
	nth_desc_t *next = nth_schedule->yield_sp(NTH_MYSELF);
	if (!next) next = nth_sch_getidle();

	if (next){
		nth_sch_switch_to(next);
	}
}

int nth_sch_generic_num_ready ( void )
{
	nth_desc_t *myself = NTH_MYSELF;
	int vp, total = 0;

	for ( vp = 0; vp < nth_data.nkths; vp++ ) {
		 total += nth_data.lrqs[vp].nths;
	}

	total += nth_data.rq.nths;

	if ( myself->player && myself->player->team )
		total += myself->player->team->rw.d.queue.nths;

	return total;
}

void nth_sch_environment_options ()
{
	int sc=0;
	char *p;

	p = getenv("NTH_SCHEDULE");
	if ( p != NULL ) {
		char *next = strchr(p,',');
		char *opt,*value;

		if (next) *next++=0;

		if (!strcasecmp(p,"cilk")) {
			nth_schedule = &cilk_schedule;
		} else if (!strcasecmp(p,"deepfirst")) {
			nth_schedule = &default_schedule;
		} else if (!strcasecmp(p,"workfirst")) {
			nth_schedule = &wf_schedule;
		} else if (!strcasecmp(p,"bwf")) {
			nth_schedule = &dwf_schedule;
		} else if (!strcasecmp(p,"bff")) {
			nth_schedule = &default_schedule;
			nth_schedule->parse_option("fifo",0);
			sc = 1;
		} else if (!strcasecmp(p,"bfl")) {
			nth_schedule = &default_schedule;
			nth_schedule->parse_option("lifo",0);
			sc = 1;
		} else if (!strcasecmp(p,"wfff")) {
			nth_schedule = &wf_schedule;
			nth_schedule->parse_option("fifo",0);
			nth_schedule->parse_option("fifo_steal",0);
			sc = 1;
		} else if (!strcasecmp(p,"wffl")) {
			nth_schedule = &wf_schedule;
			nth_schedule->parse_option("fifo",0);
			nth_schedule->parse_option("lifo_steal",0);
			sc = 1;
		} else if (!strcasecmp(p,"wflf")) {
			nth_schedule = &wf_schedule;
			nth_schedule->parse_option("lifo",0);
			nth_schedule->parse_option("fifo_steal",0);
			sc = 1;
		} else if (!strcasecmp(p,"wfll")) {
			nth_schedule = &wf_schedule;
			nth_schedule->parse_option("lifo",0);
			nth_schedule->parse_option("lifo_steal",0);
			sc = 1;
		} else if (!strcasecmp(p,"lb")){
			nth_schedule = &lb_schedule;
		} else {
			if (strcmp(p,""))
			  fprintf(stderr,"Unknown NTH scheduler selected\n");
		}

		while (next) {
			opt = next;
			next = strchr(opt,':');
			if (next) *next++=0;

			value = strchr(opt,'=');
			if ( value ) *value++=0;
			
			if ( !strcasecmp(opt,"maxlevel") ) {
				nth_cutoff_set(&nth_maxlevel_cutoff,value);
			} else if (!strcasecmp(opt,"maxnths")) {
				nth_cutoff_set(&nth_maxnths_cutoff,value);
			} else if (!strcasecmp(opt,"maxtasks")) {
				nth_cutoff_set(&nth_maxtasks_cutoff,value);
			} else if (!strcasecmp(opt,"numready")) {
				nth_cutoff_set(&nth_numready_cutoff,value);
			} else if (!strcasecmp(opt,"idle")) {
				nth_cutoff_set(&nth_idle_cutoff,0);
			} else if (!strcasecmp(opt,"nocutoff")) {
				nth_cutoff_set(&nth_null_cutoff,0);
			} else if (!strcasecmp(opt,"serial")) {
				nth_cutoff_set(&nth_serial_cutoff,0);
			} else if (!strcasecmp(opt,"lb")) {
				nth_cutoff_set(&lb_cutoff,value);
			} else if (!strcasecmp(opt,"sr")) {
				nth_cutoff_set(&sr_cutoff,value);
			} else if (!strcasecmp(opt,"groupn")) {
				nth_cutoff_set(&nth_groupn_cutoff,value);
			} else {
				if ( !sc && nth_schedule->parse_option )
					nth_schedule->parse_option(opt,value);
			}
		}
	}
}

void nth_sch_init (void)
{
	int i;
	for ( i = 0; i < NTH_MAX_LEVEL+1; i++) nth_sch_num_ready[i] = 0;

	nth_desc_edlist_init(&idle_nths_queue);
	if ( nth_schedule->init ) nth_schedule->init();
	nth_cutoff_init();
}

void nth_sch_print_info (void)
{
	fprintf (stderr,
	" - Nth scheduler ................................: %s \n",
		nth_schedule->name);

	nth_cutoff_print_info();
}

