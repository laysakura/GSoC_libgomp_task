/* nth_desc.c -- Descriptor and descriptor's queues implementation.
 * -------------------------------------------------------------------
 * Descriptor module is a implementation of a set of functions
 * focused in descriptors management. They allow get a new
 * descriptor (reusing one from the 'free descriptor queue' or
 * allocating a new one), initializes a descriptor with the
 * default values, seek a descriptor from a memory address,
 * manages the dependences and successors of a given descriptor
 * and manages queues of descriptors usually through the scheduler
 * function.
 *
 * To change the behaviour of the schedule function we can change
 * the function itself or change 'put' and 'get' functions. The
 * idea is that we can implement new schedule functions at this
 * level in order to modify the policy of nano-threads execution.
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
#include "nth_desc.h"
#include "config.h"
#include "nth_queue.h"
#include "nth_data.h"
#include "nth_stack.h"
#include "nth_support.h"
#include "nth_spin.h"
#include "nth_qt.h"
#include "nth_sched.h"
#include "nth_main.h"
#include "nth_instrument.h"
/* -----------------------------------------------------------------*/
#include <stdio.h> /* fprintf */
#include <pthread.h> /* pthread_spinlock */
/* *******************************************************************
 * INTERFACE FUNCTIONS (descriptors)
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_desc_get: Try to get a free descriptor from the queue of
 * free descriptors. If it don't succeds the function allocates a
 * new descriptor. Finally initializes the descriptor.
 * -----------------------------------------------------------------*/
nth_desc_t*
nth_desc_get (void)
{
	nth_desc_t *descriptor;
NTH_DEBUG_START(NTH_DEBUG_DESC_GET, NTH_KTH, NTH_MYSELF,
"start")

       /* total number of threads couter */
       nth_atm_add(&nth_data.num_nthreads, (nth_word_t)1);

	
	/* getting a descriptor */
	descriptor = nth_desc_eslist_pop_front(&nth_data.fdq);
	if (!descriptor) descriptor = nth_stack_allocate();
	/* xteruel:FIXME: if nht_des_get() cannot allocate new stack, exit */
	if (!descriptor) /* exit */; 
	nth_desc_init(descriptor);

NTH_DEBUG_END_VAL(NTH_DEBUG_DESC_GET, NTH_KTH, NTH_MYSELF,
"end, desc =", descriptor)
	return descriptor;
}

/*
 * nth_get_idle: create a idle nano-thread
 */
nth_desc_t * nth_get_idle ( nth_player_t *player )
{
	nth_desc_t *desc = (nth_desc_t *)nth_desc_get();
	desc->prio = NTH_DPRIO_IDLE;	
	desc->player = player;
	
	desc->ndep = 1; /* will be running at moment */

	desc->sp = (nth_qt_t *) nth_qt_args(
		(nth_qt_t *) desc->sp,
		(nth_word_t) 0,
		NULL,
		(void *) desc,
		(nth_qt_userf_t *) nth_null,
		(nth_qt_cleanup_t *) nth_idle
	);
	return desc;
}

/* -------------------------------------------------------------------
 * nth_desc_init: Initializes with the defaults values the descriptor
 * structure.
 * -----------------------------------------------------------------*/
void
nth_desc_init (nth_desc_t *descriptor)
{
	nth_word_t stack_base;
	nth_word_t stack_top;
	nth_word_t i;
NTH_DEBUG_START_VAL(NTH_DEBUG_DESC_INIT, NTH_KTH, NTH_MYSELF,
	"start, descriptor =", descriptor)

	stack_base = (nth_word_t) descriptor
		+ (nth_word_t) (nth_data.desc_size*nth_data.desc_size)
		+ (nth_word_t) (nth_data.guard_size*nth_data.guard_size)
		+ (nth_word_t) (nth_data.stack_size*nth_data.page_size);
	stack_top = (nth_word_t) descriptor
		+ (nth_word_t) (nth_data.desc_size*nth_data.page_size)
		+ (nth_word_t) (nth_data.guard_size*nth_data.page_size);
	descriptor->sp = (nth_qt_t *)NTH_QT_SP(
		stack_top, nth_data.stack_size*nth_data.page_size
	);
	descriptor->type = NTH_DTYPE_STANDARD;
	descriptor->global = 0;
	descriptor->tie = 0;
	descriptor->tied = 0;
	descriptor->idle = 0;
	descriptor->idle_state = 0;

	descriptor->is_task = 0;
	descriptor->prio = NTH_DPRIO_NORMAL;
	descriptor->state = NTH_DST_INIT;
	descriptor->deep_level = 0;
	descriptor->real_level = 0;
	descriptor->vp = 0;
	descriptor->ndep = 0;
	descriptor->creator = 0;
/* task info */
	descriptor->my_ntasks = 0;
/* stack info */
	descriptor->stack_addr = stack_top;
	descriptor->stack_size = nth_data.stack_size*nth_data.page_size;
	descriptor->next = NULL;
	descriptor->prev = NULL;
	descriptor->myqueue = NULL;

	nth_queue_init(&descriptor->succ);
	descriptor->player = NULL;
	//nth_init_player(&descriptor->myplayer);
	//nth_init_team(&descriptor->myteam,nth_data.nkths,0,0,0);

	descriptor->id = nth_atm_add(&nth_data.id,1);

	descriptor->executed = 0;

NTH_DEBUG_END(NTH_DEBUG_DESC_INIT, NTH_KTH, NTH_MYSELF,
	"end")
}
/* -------------------------------------------------------------------
 * nth_desc_depadd: Adds (in atomic way) 'ndep' dependences for the
 * given descriptor 'desc'.
 * -----------------------------------------------------------------*/
void
nth_desc_depadd (desc,ndep)
	nth_desc_t *desc;
	nth_word_t ndep;
{
NTH_DEBUG_START(NTH_DEBUG_DESC_DEPADD, NTH_KTH, NTH_MYSELF,
"start")

	nth_atm_add(&desc->ndep, ndep);

NTH_DEBUG_END(NTH_DEBUG_DESC_DEPADD, NTH_KTH, NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_desc_depsub: Substracts (in atomic way) 'ndep' dependences for
 * the given descriptor 'desc'.
 * -----------------------------------------------------------------*/
nth_word_t
nth_desc_depsub (nth_desc_t *desc, nth_word_t ndep)
{
	nth_word_t rv;
NTH_DEBUG_START(NTH_DEBUG_DESC_DEPSUB, NTH_KTH, NTH_MYSELF,
"start")

	rv = nth_atm_add(&desc->ndep, ndep*(-1))-ndep;	
	
	if (rv == 0 && desc->idle_state == NTH_DST_BLOCK_NDEP ){
		nth_sch_wakeup(desc);
	}

NTH_DEBUG_END(NTH_DEBUG_DESC_DEPSUB, NTH_KTH, NTH_MYSELF,
"end")

	return (rv);
}


/* -------------------------------------------------------------------
 * nth_desc_succadd: Adds a successor descriptor 'succ' for the given
 * descriptor 'desc'.
 * -----------------------------------------------------------------*/
void
nth_desc_succadd(nth_desc_t *desc, nth_desc_t *succ)
{
NTH_DEBUG_START(NTH_DEBUG_DESC_SUCCADD, NTH_KTH, NTH_MYSELF,
"start")

	nth_queue_put(&desc->succ, (void *)succ);
	nth_atm_add(&succ->ndep, 1);

NTH_DEBUG_END(NTH_DEBUG_DESC_SUCCADD, NTH_KTH, NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_desc_succflush:
 * -----------------------------------------------------------------*/
void
nth_desc_succflush (nth_desc_t *desc)
{
	nth_desc_t *addr;
	nth_word_t rv_queue;
NTH_DEBUG_START(NTH_DEBUG_DESC_SUCCFLUSH, NTH_KTH, NTH_MYSELF,
"start")

	rv_queue = nth_queue_get(&(desc->succ), (void **)&addr);
	while (rv_queue){
		nth_desc_depsub(addr, 1);
		rv_queue = nth_queue_get(&(desc->succ), (void **)&addr);
	}

NTH_DEBUG_END(NTH_DEBUG_DESC_SUCCFLUSH, NTH_KTH, NTH_MYSELF,
"end")
}

/* *******************************************************************
 * INTERFACE FUNCTIONS (dependences)
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_dep_get:
 * -----------------------------------------------------------------*/
nth_dep_t*
nth_dep_get (void)
{
/* getting the dep structure */
	nth_dep_t *dep = (nth_dep_t*) nth_dep_q_get();
	if (!dep) dep = (nth_dep_t*) nth_malloc(sizeof(nth_dep_t));

/* initializing nth_dep_t */
	dep->desc = (void*) NULL;
	dep->succ = (void*) NULL;
	dep->next = (nth_dep_t*) NULL;
	dep->previous = (nth_dep_t*) NULL;
	dep->ndep = 0;
/* returnin struct pointer */
	return dep;
}
/* -------------------------------------------------------------------
 * nth_dep_q_get:
 * -----------------------------------------------------------------*/
nth_dep_t*
nth_dep_q_get (void)
{
	nth_dep_t *dep = NULL;
/* xteruel:FIXME: need a mutual exclusion area */
#if 0
	if (nth_data.free_dep_q){
		dep = nth_data.free_dep_q;
		nth_data.free_dep_q = nth_data.free_dep_q->next;
	}
#endif
	return dep;
}
/* -------------------------------------------------------------------
 * nth_dep_q_put:
 * -----------------------------------------------------------------*/
void
nth_dep_q_put (nth_dep_t *dep)
{
	dep->next = nth_data.free_dep_q;
	nth_data.free_dep_q = dep;
}


