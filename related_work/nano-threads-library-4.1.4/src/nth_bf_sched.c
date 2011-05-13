#include "nth_desc.h"
#include "nth_list.h"
#include "nth_data.h"
#include "nth_sched.h"
#include "nth_support.h"

/* default BF nano-thread scheduling policy */

void default_enqueue_desc (nth_desc_t *desc);

static int nth_sch_fifo=1; /* fifo or lifo ? */

nth_desc_t* default_sp_creation ( nth_desc_t *parent, nth_desc_t *new )
{
	assert(new->state == NTH_DST_READY);	

	default_enqueue_desc(new);

	return NULL;
}

nth_desc_t* default_sp_schedule ( nth_desc_t *from_desc )
{
	nth_desc_t *rv;

	/* search in local queue */
	rv =nth_desc_edlist_get_front(&nth_data.lrqs[from_desc->vp],
			NTH_DST_READY,from_desc);

	/* search in team queue (team of from_desc) */
	if (!rv &&
		from_desc->player &&
		from_desc->player->team){
		rv = nth_desc_edlist_get_front(&from_desc->player->team->rw.d.queue,
			NTH_DST_READY,from_desc);			
	}
	
	/* search in global queue */
	if (!rv){
		rv = nth_desc_edlist_get_front(&nth_data.rq,NTH_DST_READY,
			from_desc);
	}

	return rv;
}

nth_desc_t* default_sp_null ( nth_desc_t* current, nth_desc_t *desc, int *requeue )
{
*requeue = 0;
return NULL;
}

void default_enqueue_desc (nth_desc_t *desc)
{
	assert(desc->state != NTH_DST_INIT
	       && desc->state != NTH_DST_RUNNING);

	if ( desc->tied ) {
		if ( nth_sch_fifo )
			nth_desc_edlist_push_back (&nth_data.lrqs[desc->vp], desc);
		else
			nth_desc_edlist_push_front (&nth_data.lrqs[desc->vp], desc);
	} else if ( desc->global ) {
		if ( nth_sch_fifo )
			nth_desc_edlist_push_back (&nth_data.rq, desc);
		else
			nth_desc_edlist_push_front (&nth_data.rq, desc);
	} else  {
		if ( nth_sch_fifo )
			nth_desc_edlist_push_back (&desc->player->team->rw.d.queue,desc);
		else
			nth_desc_edlist_push_front (&desc->player->team->rw.d.queue,desc);
	}
}

void default_sch_init ( void )
{
}

void default_parse_option ( char *option, char *value )
{
   if (!strcasecmp(option,"lifo")) {
	nth_sch_fifo = 0;
   }
	
}

schedule_desc_t default_schedule = 
{
	"breadth first",
	default_sch_init,
	default_sp_creation, /* creation sp */
	default_sp_schedule, /* finish sp */
	default_sp_schedule, /* block sp */
	default_sp_schedule, /* yield sp */
	default_sp_schedule, /* idle sp */
	default_sp_null,     /* wakeup sp */
	default_sp_schedule, /* generic sp */	
	default_enqueue_desc, /* enqueue */
	default_parse_option, /* parse options */
	nth_sch_generic_num_ready
};


