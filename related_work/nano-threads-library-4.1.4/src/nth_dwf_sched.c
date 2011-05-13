#include "config.h"
#include "nth_sched.h"
#include "nth_data.h"
#include "nth_support.h"

void dwf_enqueue_desc (nth_desc_t *desc);

/* At creation switch to the new task if
	- parent task is untied.
	- new nano-thread is not tied
	- new nano-thread is a task
*/

nth_desc_t* dwf_sp_creation ( nth_desc_t *parent, nth_desc_t *new )
{
	assert(new->state == NTH_DST_READY);

	if ( !new->is_task
//	     || (new->tied && new->vp != parent->vp)
	     || parent->tied ) {
		dwf_enqueue_desc(new);
		return NULL;
	}
	
	return new;
}

nth_desc_t* dwf_sp_unblock ( nth_desc_t *current, nth_desc_t *new, int *requeue )
{
	*requeue = 1;
	return NULL;
}

nth_desc_t* dwf_sp_schedule ( nth_desc_t *from_desc )
{
	nth_desc_t* desc=0;

	// look at my local queue
// 	desc = nth_desc_dlist_pop_back(&nth_data.plrqs[from_desc->vp]);

	if (!desc)
	desc = nth_desc_edlist_get_back(&nth_data.lrqs[from_desc->vp],
		NTH_DST_READY, from_desc);
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


// always enqueue at the local queue
// use private queues
void dwf_enqueue_desc (nth_desc_t *desc)
{
	if (desc->state != NTH_DST_READY) return;
	
/*	if ( desc->tied && desc->vp == NTH_KTH )
		nth_desc_dlist_push_back ( &nth_data.plrqs[desc->vp], desc );
	else*/
		nth_desc_edlist_push_back( &nth_data.lrqs[desc->vp], desc );
}


void dwf_parse_option ( char *option, char *value )
{
}

schedule_desc_t dwf_schedule =
{
	"breadth work first",
	0,
	dwf_sp_creation, /* creation sp */
	dwf_sp_schedule, /* finish sp */
	dwf_sp_schedule, /* block sp */
	dwf_sp_schedule, /* yield sp */
	dwf_sp_schedule, /* idle sp */
	dwf_sp_unblock,  /* wakeup sp */
	dwf_sp_schedule, /* generic sp */
	dwf_enqueue_desc,
	dwf_parse_option,
	nth_sch_generic_num_ready
};
