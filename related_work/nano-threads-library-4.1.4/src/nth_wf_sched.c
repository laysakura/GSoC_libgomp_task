#include "config.h"
#include "nth_sched.h"
#include "nth_data.h"
#include "nth_support.h"

static int wf_fifo = 1; /* fifo or lifo? */
static int wf_steal_fifo = 1; /* fifo or lifo? */
static int wf_steal_creator = 0;
static int wf_dq = 0; 

/* Work-first scheduler: cilk-like */
void wf_enqueue_desc (nth_desc_t *desc);

/* at creation... switch to the new one and mark parent to be enqueue the enqueued in its local queue */
nth_desc_t* wf_sp_creation ( nth_desc_t *parent, nth_desc_t *new )
{
	assert(new->state == NTH_DST_READY);

	if ( !new->is_task || (new->tied && new->vp != parent->vp) ) {
		wf_enqueue_desc(new);
		return NULL;
	}
	
	return new;
}

nth_desc_t* wf_sp_unblock ( nth_desc_t *current, nth_desc_t *new, int *requeue )
{
	*requeue = 0;
	return NULL;
}

nth_desc_t* wf_sp_schedule ( nth_desc_t *from_desc )
{
	nth_desc_t* desc=0;

	if ( wf_dq ) {
		if ( wf_fifo )
			desc = nth_desc_dlist_pop_front(&nth_data.plrqs[from_desc->vp]);
		else 
			desc = nth_desc_dlist_pop_back(&nth_data.plrqs[from_desc->vp]);

	}


	if (!desc) {
		if ( wf_fifo )
			desc = nth_desc_edlist_get_front(&nth_data.lrqs[from_desc->vp],
				NTH_DST_READY,from_desc);
		else 
			desc = nth_desc_edlist_get_back(&nth_data.lrqs[from_desc->vp],
				NTH_DST_READY,from_desc);
	}

        if (!desc && from_desc->creator && wf_steal_creator ) {
		nth_desc_t *creator = from_desc->creator;
		// try to steal parent task
		if ( creator->is_task && creator->state == NTH_DST_READY
                   && !creator->tied ) {
			desc = nth_desc_edlist_remove(creator,0);
		}
	}


	if (!desc) {
		// look at other thread's local queue from my team and steal work
		int i;
		i = (from_desc->vp+1)%nth_data.nkths;
		for ( ; i != from_desc->vp ; ) {
			if ( wf_steal_fifo )
				desc = nth_desc_edlist_get_front(&nth_data.lrqs[i],
					NTH_DST_READY,from_desc);
			else
				desc = nth_desc_edlist_get_back(&nth_data.lrqs[i],
					NTH_DST_READY,from_desc);
			
			if (desc) break;
			i = (i+1)%nth_data.nkths;
		}
	}
	
	assert(!desc || !desc->tied || desc->vp == from_desc->vp);

	return desc;
}

void wf_enqueue_desc (nth_desc_t *desc)
{
	// alway queue at local queue	
	if ( wf_dq && desc->tied && desc->vp == NTH_KTH )
		nth_desc_dlist_push_back(&nth_data.plrqs[desc->vp],desc);
	else
		nth_desc_edlist_push_back(&nth_data.lrqs[desc->vp], desc );
}

void wf_parse_option ( char *option, char *value )
{
   if (!strcasecmp(option,"lifo")) {
	wf_fifo = 0;
   }
   if (!strcasecmp(option,"lifo_steal")) {
	wf_steal_fifo = 0;
   }
   if (!strcasecmp(option,"steal_creator")) {
	wf_steal_creator = 1;
   }
   if (!strcasecmp(option,"dq"))
	wf_dq = 1;
	
}

schedule_desc_t wf_schedule = 
{
	"work first",
	0,
	wf_sp_creation, /* creation sp */
	wf_sp_schedule, /* finish sp */
	wf_sp_schedule, /* block sp */
	wf_sp_schedule, /* yield sp */
	wf_sp_schedule, /* idle sp */
	wf_sp_unblock,  /* wakeup sp */
	wf_sp_schedule, /* generic sp */
	wf_enqueue_desc,
	wf_parse_option,
	nth_sch_generic_num_ready
};

