/* intone.c -- Intone implementation.
 * -------------------------------------------------------------------
 * Nano-threads library - Parallel RTL
 * Copyright (c) 2006-2007 Xavier Teruel Garcia <xteruel@ac.upc.edu>
 * Copyright (C) 1994-2006 Xavier Martorell Bofill <xavim@ac.upc.edu>
 * BSC   - Barcelona Supercomputing Center.
 * UPC   - Universitat Politecnica de Catalunya.
 * DAC   - Departament d'Arquitectura de Computadors (UPC).
 * CEPBA - Centre Europeu de Paralelisme de Barcelona.
 *
 * Nano-threads library, version 4.0, October 2006
 * Nano-threads library, version 1.0, February 1997
 *
 * NANOS ESPRIT Project E21907
 * INTONE IST Project IST-1999-20252
 * POP IST Project IST-2001-33071
 *
 * This  program is free  software;  you  can  redistribute  it and/or
 * modify  it  under  the  terms of the GNU  General Public License as
 * published by the Free Software Foundation; either  version 2 of the
 * License, or (at your option) any later version.
 *
 * This  program is  distributed  in the hope  that it will be useful,
 * but  WITHOUT ANY WARRANTY;  without even  the  implied  warranty of
 * MERCHANTABILITY  or  FITNESS  FOR  A PARTICULAR  PURPOSE.  See  the
 * GNU General Public License for more details.
 *
 * You should have  received a copy of the  GNU General Public License
 * along  with  this  program;  if not,  write  to the  Free  Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301  USA
 *
 * In no  event  shall BSC  be  liable for  any  special, indirect, or
 * consequential damages or any damages whatsoever resulting from loss
 * of use, data or profits,  whether in action of contract negligence,
 * or other tortious action, arising out of or in connection  with the
 * use or performance of this software.
 * -----------------------------------------------------------------*/

/* *******************************************************************
 * INCLUDES
 * ******************************************************************/
#include "intone.h"
#include "config.h"
#include "nthreads.h"
#include "nth_config.h"
#include "nth_main.h"
#include "nth_desc.h"
#include "nth_support.h"
#include "nth_instrument.h"
/* -----------------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * in__tone_begin_for:
 * -----------------------------------------------------------------*/
void
in__tone_begin_for (int *__intone_start, int *__intone_end,
    int *__intone_step, int *__intone_chunk, int *__intone_schedule)
{
	nth_word_t loop_shared;
	nth_desc_t *myself = NTH_MYSELF;
NTH_DEBUG_START(NTH_DEBUG_BEGIN_FOR,NTH_KTH,NTH_MYSELF,
"start")
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH,NTH_MYSELF,
"team =", NTH_MYSELF->player->team)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH,NTH_MYSELF,
"player id =", NTH_MYSELF->player->id)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH,NTH_MYSELF,
"loop id =", NTH_MYSELF->player->loop_id)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH,NTH_MYSELF,
"barrier id =", NTH_MYSELF->player->barrier_id)

	assert(myself->player);
	nth_instrument_enter_for(myself);

	if (*__intone_schedule == INTONE_SCH_RUNTIME){
		*__intone_schedule = nth_data.runtime_sched;
		if (*__intone_chunk == 0){
			*__intone_chunk = nth_data.runtime_chunk;
		}
	}
	if (*__intone_schedule == INTONE_SCH_DEFAULT){
		*__intone_schedule = INTONE_SCH_STATIC;
	}

	loop_shared = !(*__intone_schedule & INTONE_SCH_STATIC);
	if (!myself->player->team) loop_shared = FALSE;

	if (loop_shared){
		myself->player->loop_current = (nth_loop_desc_t*)
			&myself->player->team->loop[myself->player->loop_id];
		nth_spin_lock(&myself->player->loop_current->mutex);
		myself->player->loop_current->shared = TRUE;
	}
	else{
		myself->player->loop_current = (nth_loop_desc_t*)
			&myself->player->loop_local;
		myself->player->loop_current->shared = FALSE;
	}
		
	if (!myself->player->loop_current->init){
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH,myself,
"player->id (n) initializing structure begin_for", myself->player->id)
		myself->player->loop_current->nreached = 0;
		/* function arguments */
		myself->player->loop_current->start = *__intone_start;
		myself->player->loop_current->end = *__intone_end;
		myself->player->loop_current->step = *__intone_step;
		myself->player->loop_current->chunk = *__intone_chunk;
		myself->player->loop_current->schedule =
			*__intone_schedule & INTONE_SCHEDULE_TYPE_MASK;
		myself->player->loop_current->ordered =
			*__intone_schedule & INTONE_ORDERED;
		if (myself->player->team){
			myself->player->loop_current->nplayers = myself->player->team->ro.d.nplayers;
		}
		else{
			myself->player->loop_current->nplayers = 1;
		}
		myself->player->loop_current->step_abs =
			abs(*__intone_step);
		myself->player->loop_current->step_sign =
			((*__intone_step > 0) ? 1: -1);

		myself->player->loop_current->next_iter = *__intone_start;

/* depends from  schedule type: chunk_real and chunk_remainder */
		switch (myself->player->loop_current->schedule){
			case INTONE_SCH_STATIC:
				if (*__intone_chunk == 0){

					myself->player->loop_current->chunk_real =
						(abs(*__intone_end - *__intone_start)+1+myself->player->loop_current->step_abs-1)
						/ (myself->player->loop_current->nplayers
							* myself->player->loop_current->step_abs);
					myself->player->loop_current->chunk_remainder =
						((abs(*__intone_end - *__intone_start)+1)
						/ myself->player->loop_current->step_abs) % 
							myself->player->loop_current->nplayers;
				}
				else{
					myself->player->loop_current->chunk_real =
						*__intone_chunk;
					myself->player->loop_current->chunk_remainder = 0;
				}
/* compute next_iter (only in static scheduler) */
				myself->player->loop_current->next_iter =
					*__intone_start
					+ (myself->player->loop_current->step_sign
						* myself->player->id
						* myself->player->loop_current->chunk_real
						* myself->player->loop_current->step_abs)
					+  myself->player->loop_current->step_sign
						* myself->player->loop_current->step_abs
						* nth_min(myself->player->id, myself->player->loop_current->chunk_remainder);
				break;
			case INTONE_SCH_DYNAMIC:
				if (*__intone_chunk == 0) *__intone_chunk = 1;
				myself->player->loop_current->chunk_real = *__intone_chunk;
				myself->player->loop_current->chunk_remainder = 0;
				break;
			case INTONE_SCH_GUIDED:
				/* xteruel:FIXME: guided scheduler is not implemented*/
				fprintf(stderr,"Error: Guided scheduler not implemented yet.\n");
				break;
			default:
				fprintf(stderr,
					"%s %d (in__tone_begin_for): "
					"Unknow scheduler type: 0x%x.\n",
					 __FILE__, __LINE__, (int) (myself->player->loop_current->schedule)
				);
				exit(NTH_INTONE_ERROR); 
				break;
		} /* switch(schedule) */
		myself->player->loop_current->init = TRUE;

NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_init =", myself->player->loop_current->init)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_shared =", myself->player->loop_current->shared)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_nreached =", myself->player->loop_current->nreached)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_start =", myself->player->loop_current->start)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_end =", myself->player->loop_current->end)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_step =", myself->player->loop_current->step)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_chunk =", myself->player->loop_current->chunk)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_schedule =", myself->player->loop_current->schedule)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_ordered =", myself->player->loop_current->ordered)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_nplayers =", myself->player->loop_current->nplayers)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_step_abs =", myself->player->loop_current->step_abs)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_step_sign =", myself->player->loop_current->step_sign)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_chunk_real =", myself->player->loop_current->chunk_real)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"loop_chunk_remainder =", myself->player->loop_current->chunk_remainder)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BEGIN_FOR,NTH_KTH, myself,
"next_iter =", myself->player->loop_current->next_iter)
	}

	if (loop_shared) nth_spin_unlock(&myself->player->loop_current->mutex);

NTH_DEBUG_END(NTH_DEBUG_BEGIN_FOR, NTH_KTH, myself,
"end")
}
/* -----------------------------------------------------------------*/
void
in__tone_begin_for_ (int *__intone_start, int *__intone_end,
    int *__intone_step, int *__intone_chunk, int *__intone_schedule)
	__attribute__ ((weak, alias("in__tone_begin_for")));
/* -------------------------------------------------------------------
 * in_tone_end_for:
 * -----------------------------------------------------------------*/
void
in__tone_end_for (int *__intone_barrier_needed)
{
	nth_word_t nreached;
	nth_desc_t *myself = NTH_MYSELF;
NTH_DEBUG_START_VAL(NTH_DEBUG_END_FOR, NTH_KTH, NTH_MYSELF,
"start is_needed", *__intone_barrier_needed)

	if (*__intone_barrier_needed) in__tone_barrier();

	if (myself->player->loop_current->shared){
		nreached = nth_atm_add(&NTH_MYSELF->player->loop_current->nreached, 1)+1;
		if (nreached == NTH_MYSELF->player->loop_current->nplayers){
NTH_DEBUG_BODY(NTH_DEBUG_END_FOR, NTH_KTH, NTH_MYSELF,
"flushing shared loop setup")
			NTH_MYSELF->player->loop_current->init = FALSE;
		}
	}
	else{
NTH_DEBUG_BODY(NTH_DEBUG_END_FOR, NTH_KTH, NTH_MYSELF,
"flushing private loop setup")
		NTH_MYSELF->player->loop_current->init = FALSE;
	}

	NTH_MYSELF->player->loop_id =
		(NTH_MYSELF->player->loop_id+1) % NTH_DEFAULT_LOOPS_PER_DESCRIPTOR;

	nth_instrument_leave_for(NTH_MYSELF);

NTH_DEBUG_END(NTH_DEBUG_END_FOR, NTH_KTH, NTH_MYSELF,
"end")
}
/* -----------------------------------------------------------------*/
void
in__tone_end_for_ (int *__intone_barrier_needed)
	__attribute__ ((weak, alias("in__tone_end_for")));
/* -------------------------------------------------------------------
 * in__tone_next_iters:
 * -----------------------------------------------------------------*/
int
in__tone_next_iters (int *__intone_lstart, int *__intone_lend,
        int *__intone_last)
{
	int rv;
NTH_DEBUG_START(NTH_DEBUG_NEXT_ITERS, NTH_KTH, NTH_MYSELF,
"start")

	if (!NTH_MYSELF->player->loop_current->init){
		/* xteruel:FIXME: wait over player->loop_current->init needed  */
		fprintf(stderr,"Error:\n");
		exit(NTH_INTONE_ERROR);
	}

	if (NTH_MYSELF->player->loop_current->shared){
		nth_spin_lock(&NTH_MYSELF->player->loop_current->mutex);
	}

	switch(NTH_MYSELF->player->loop_current->schedule){
		case INTONE_SCH_STATIC:
			/* return value and lstart */
			{
				/* do it this way due some compilers bug */
				int a = 
				(NTH_MYSELF->player->loop_current->step_sign
					* NTH_MYSELF->player->loop_current->next_iter);
				int b = 
				(NTH_MYSELF->player->loop_current->step_sign
					* NTH_MYSELF->player->loop_current->end);
				rv = (a <= b);
			}
			*__intone_lstart = (int) NTH_MYSELF->player->loop_current->next_iter;

			/* next_iter */
			if (NTH_MYSELF->player->loop_current->chunk == 0){
				NTH_MYSELF->player->loop_current->next_iter =
					NTH_MYSELF->player->loop_current->end
					+ NTH_MYSELF->player->loop_current->step;
			}
			else{
				NTH_MYSELF->player->loop_current->next_iter =
					NTH_MYSELF->player->loop_current->next_iter
					+ NTH_MYSELF->player->loop_current->step
					* NTH_MYSELF->player->loop_current->chunk
					* NTH_MYSELF->player->loop_current->nplayers;
			}
			break;
		case INTONE_SCH_DYNAMIC:
			/* return value and lstart */
			{
				/* do it this way due some compilers bug */
				int a = 
				(NTH_MYSELF->player->loop_current->step_sign
					* NTH_MYSELF->player->loop_current->next_iter);
				int b = 
				(NTH_MYSELF->player->loop_current->step_sign
					* NTH_MYSELF->player->loop_current->end);
				rv = (a <= b);
			}
			*__intone_lstart = (int) NTH_MYSELF->player->loop_current->next_iter;
			/* next_iter */
			NTH_MYSELF->player->loop_current->next_iter =
					NTH_MYSELF->player->loop_current->next_iter
					+ NTH_MYSELF->player->loop_current->step
					* NTH_MYSELF->player->loop_current->chunk_real;
			break;
		case INTONE_SCH_GUIDED:
			/* xteruel:FIXME: guided scheduler is not implemented*/
			fprintf(stderr,"Error: Guided scheduler is not implemented.\n");
		default:
			fprintf(stderr,
				"%s %d (in__tone_next_iters): "
				"Unknow scheduler type: 0x%x.\n",
				 __FILE__, __LINE__, (int) (NTH_MYSELF->player->loop_current->schedule)
			);
			exit(NTH_INTONE_ERROR);
	}

	if (NTH_MYSELF->player->loop_current->step > 0){
		*__intone_lend = (int) NTH_MIN(
			*__intone_lstart
			+ (
				(NTH_MYSELF->player->loop_current->chunk_real)
				* NTH_MYSELF->player->loop_current->step
			) 
			+ (NTH_MYSELF->player->loop_current->chunk_remainder > NTH_MYSELF->player->id)
			* NTH_MYSELF->player->loop_current->step
			-1
			,
			NTH_MYSELF->player->loop_current->end
		);
	}
	else{
		*__intone_lend = (int) NTH_MAX(
			*__intone_lstart
			- (
				(NTH_MYSELF->player->loop_current->chunk_real - 1)
				* NTH_MYSELF->player->loop_current->step_abs
			)
			+ (NTH_MYSELF->player->loop_current->chunk_remainder > NTH_MYSELF->player->id)
			* NTH_MYSELF->player->loop_current->step
			,
			NTH_MYSELF->player->loop_current->end
		);
	}
		
	*__intone_last = (int) (*__intone_lend == NTH_MYSELF->player->loop_current->end);

	if (NTH_MYSELF->player->loop_current->shared){
		nth_spin_unlock(&NTH_MYSELF->player->loop_current->mutex);
	}

	if (!rv){
		*__intone_lstart = (int)0;
		*__intone_lend = (int)0;
		*__intone_last = (int)0;
	}

NTH_DEBUG_BODY_VAL(NTH_DEBUG_NEXT_ITERS, NTH_KTH, NTH_MYSELF,
"next iters: policy =", NTH_MYSELF->player->loop_current->schedule)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_NEXT_ITERS, NTH_KTH, NTH_MYSELF,
"next iters: start =", *__intone_lstart)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_NEXT_ITERS, NTH_KTH, NTH_MYSELF,
"next iters: end =", *__intone_lend)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_NEXT_ITERS, NTH_KTH, NTH_MYSELF,
"next iters: last =", *__intone_last)

NTH_DEBUG_END_VAL(NTH_DEBUG_NEXT_ITERS, NTH_KTH, NTH_MYSELF,
	"end", rv)
	
	return (int)rv;
}
/* -----------------------------------------------------------------*/
int
in__tone_next_iters_ (int *__intone_lstart, int *__intone_lend,
        int *__intone_last)
	__attribute__ ((weak, alias("in__tone_next_iters")));
/* -------------------------------------------------------------------
 * in__tone_barrier:
 * -----------------------------------------------------------------*/
void
in__tone_barrier ()
{
#if 0
	nth_word_t barrier_value;
	nth_word_t barrier_goal;
	nth_word_t time_out;
	nth_word_t ntasks;
	nth_desc_t *myself = NTH_MYSELF;
NTH_DEBUG_START(NTH_DEBUG_BARRIER, NTH_KTH, NTH_MYSELF,
"start")

	nth_instrument_enter_barrier(myself);
	if (NTH_MYSELF->player->team){
		barrier_goal = myself->player->team->ro.d.nplayers;
		barrier_value = nth_atm_add(
			&myself->player->team->barrier[NTH_MYSELF->player->barrier_id],
			1
		)+1;

NTH_DEBUG_BODY_VAL(NTH_DEBUG_BARRIER, NTH_KTH, NTH_MYSELF,
"player barrier id =", NTH_MYSELF->player->barrier_id)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BARRIER, NTH_KTH, NTH_MYSELF,
"address of barrier =", &NTH_MYSELF->player->team->barrier[NTH_MYSELF->player->barrier_id])
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BARRIER, NTH_KTH, NTH_MYSELF,
"value of barrier =", barrier_value)

		myself->idle = 1;
		myself->idle_state = NTH_DST_BARRIER;
/* wait until all players reach the barrier */
		time_out=1000;
		while(barrier_value < barrier_goal){
			barrier_value = nth_atm_add(
				&myself->player->team->barrier[NTH_MYSELF->player->barrier_id],
				0
			);
			time_out--;
			if(!time_out){
				nth_yield();
				time_out=1000;
			}
		}
		myself->idle_state = 0;
		myself->idle = 0;

		nth_team_task_block();

/* at this point we can not assure that 'NTH_MYSELF->player->team->team_nplayers' has
 * the correct value due we pass the barrier and some other
 * nano-thread can finished his execution decrementing the global
 * counter. for this reason we use a local variable 'barrier_goal'
 * that has duplicate the value before the barrier himself.
 */

		barrier_value = nth_atm_add(
			&myself->player->team->barrier[NTH_MYSELF->player->barrier_id],
			1
		)+1;

		if (barrier_value == (2*barrier_goal)){		
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BARRIER, NTH_KTH, NTH_MYSELF,
"setting barrier (n) to zero =", NTH_MYSELF->player->barrier_id)
			NTH_MYSELF->player->team->barrier[NTH_MYSELF->player->barrier_id] = 0;
		}

		NTH_MYSELF->player->barrier_id = (NTH_MYSELF->player->barrier_id+1)
			% NTH_DEFAULT_BARRIERS_PER_DESCRIPTOR;
	} /* if NTH_MYSELF->team */	
	nth_instrument_leave_barrier(myself);

NTH_DEBUG_END(NTH_DEBUG_BARRIER, NTH_KTH, NTH_MYSELF,
"end")
#else
	nth_desc_t *myself = NTH_MYSELF;
	nth_team_t *team = myself->player->team;
	nth_instrument_enter_barrier(myself);

        int val,time_out;

	nth_team_task_block();

	val = nth_atm_add( &team->sem, 1)+1;

        /* the last process incrementing the semaphore sets the flag
            releasing all other threads waiting in the next block */
        if ( team->sem == team->ro.d.nplayers )
          team->sem_flag = 1;

         //wait for the flag to be set
	myself->idle = 1;
	myself->idle_state = NTH_DST_BARRIER;
	time_out=1000;
	while ( team->sem_flag != 1 ) {
		time_out--;
		if(!time_out){
			nth_yield();
			time_out=1000;
		}
	} 
	myself->idle_state = 0;
	myself->idle = 0;

	val = nth_atm_add( &team->sem, -1)-1;

         /* the last thread decrementing the sem for the second time resets the flag.
            A thread passing in the next barrier will be blocked until this is performed */
        if ( val == 0 )
          team->sem_flag = 0;

         //wait for the flag to reset
	myself->idle = 1;
	myself->idle_state = NTH_DST_BARRIER;
	time_out=1000;
	while ( team->sem_flag != 0 ) {
		time_out--;
		if(!time_out){
			nth_yield();
			time_out=1000;
		}
	} 
	myself->idle_state = 0;
	myself->idle = 0;
	
	//pthread_barrier_wait(&myself->player->team->pbarrier);

	nth_instrument_leave_barrier(myself);
#endif
}
/* -----------------------------------------------------------------*/
void
in__tone_barrier_()
	__attribute__ ((weak, alias("in__tone_barrier")));
/* -------------------------------------------------------------------
 * in__tone_thread_id:
 * -----------------------------------------------------------------*/
int
in__tone_thread_id ()
{
	return NTH_MYSELF->vp;
}
/* -----------------------------------------------------------------*/
int
in__tone_thread_id_ ()
	__attribute__ ((weak, alias("in__tone_thread_id")));
/* -------------------------------------------------------------------
 * in__tone_is_master:
 * -----------------------------------------------------------------*/
int
in__tone_is_master ()
{
	int rv;
NTH_DEBUG_START(NTH_DEBUG_IS_MASTER, NTH_KTH, NTH_MYSELF,
"start")
		
        if (NTH_MYSELF->player && NTH_MYSELF->player->team){
                rv = (NTH_MYSELF == NTH_MYSELF->player->team->ro.d.master);
        }
        else rv = FALSE;

NTH_DEBUG_END_VAL(NTH_DEBUG_IS_MASTER, NTH_KTH, NTH_MYSELF,
"end", rv)
	return rv;
}
/* -----------------------------------------------------------------*/
int
in__tone_is_master_ ()
	__attribute__ ((weak, alias("in__tone_is_master")));
/* -------------------------------------------------------------------
 * in__tone_enter_ordered:
 * -----------------------------------------------------------------*/
void
in__tone_enter_ordered(int * __intone_iter)
{}
/* -----------------------------------------------------------------*/
void
in__tone_enter_ordered_(int * __intone_iter)
	__attribute__ ((weak, alias("in__tone_enter_ordered")));
/* -------------------------------------------------------------------
 * in__tone_leave_ordered:
 * -----------------------------------------------------------------*/
void
in__tone_leave_ordered(int * __intone_iter)
{}
/* -----------------------------------------------------------------*/
void
in__tone_leave_ordered_(int * __intone_iter)
	__attribute__ ((weak, alias("in__tone_leave_ordered")));
		
