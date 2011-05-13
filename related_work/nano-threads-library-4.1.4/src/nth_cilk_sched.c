#include "config.h"
#include "nth_sched.h"
#include "nth_data.h"
#include "nth_support.h"

static int cilk_dq = 0; // use private queues

/* Pure cilk scheduler */
void cilk_enqueue_desc (nth_desc_t *desc);

/* at creation... switch to the new one and mark parent to be enqueue the enqueued in its local queue */
nth_desc_t* cilk_sp_creation ( nth_desc_t *parent, nth_desc_t *new )
{
	assert(new->state == NTH_DST_READY);

	if ( !new->is_task || (new->tied && new->vp != parent->vp) ) {
		cilk_enqueue_desc(new);
		return NULL;
	}
	
	return new;
}

nth_desc_t* cilk_sp_unblock ( nth_desc_t *current, nth_desc_t *new, int *requeue )
{
	*requeue = 1;
	return NULL;
}

nth_desc_t* cilk_sp_schedule ( nth_desc_t *from_desc )
{
	nth_desc_t* desc=0;

	// look at my local queue
//	printf("k=%llu, looking own queue %d\n",NTH_KTH,from_desc->vp);
	if ( cilk_dq )
	desc = nth_desc_dlist_pop_back(&nth_data.plrqs[from_desc->vp]);

	if (!desc)
	desc = nth_desc_edlist_get_back(&nth_data.lrqs[from_desc->vp],NTH_DST_READY,
		from_desc);
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
			desc = nth_desc_edlist_get_front(&nth_data.lrqs[i],
				NTH_DST_READY,from_desc);
			if (desc) break;
			i = (i+1)%nth_data.nkths;
		}
	}

	return desc;
}

void cilk_enqueue_desc (nth_desc_t *desc)
{
	// alway queue at local queue
	if ( desc->state == NTH_DST_READY ) {
/*		if ( cilk_dq && desc->tied && desc->vp == NTH_KTH )
		nth_desc_dlist_push_back ( &nth_data.plrqs[desc->vp], desc );
		else*/
      		nth_desc_edlist_push_back( &nth_data.lrqs[desc->vp], desc );
	}
}

void cilk_sch_init (void)
{

}

void cilk_parse_option ( char *option, char *value )
{
   if (!strcasecmp(option,"dq")) {
	cilk_dq = 1;
   } else if (!strcasecmp(option,"nodq")) cilk_dq = 0;
}


schedule_desc_t cilk_schedule =
{
	"cilk",
	cilk_sch_init,
	cilk_sp_creation, /* creation sp */
	cilk_sp_schedule, /* finish sp */
	cilk_sp_schedule, /* block sp */
	cilk_sp_schedule, /* yield sp */
	cilk_sp_schedule, /* idle sp */
	cilk_sp_unblock,  /* wakeup sp */
	cilk_sp_schedule, /* generic sp */
	cilk_enqueue_desc,
	cilk_parse_option,
	nth_sch_generic_num_ready,
};

