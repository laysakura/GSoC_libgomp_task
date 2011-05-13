/* nth_desc.h -- Descriptor and descriptor's queues header.
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
#ifndef NTH_DESC_H
#define NTH_DESC_H
/* *******************************************************************
 * INCLUDE
 * ******************************************************************/
#include "nth_config.h"
#include "nth_queue.h"
#include "nth_spin.h"
#include "nth_qt.h"
#include "nth_list.h"
#include "nth_profiling.h"
#include "nth_instrument.h"
#include "nth_taskdeps.h"
/* -----------------------------------------------------------------*/
#include <pthread.h>
#ifdef __cplusplus
extern "C" {
#endif
/* *******************************************************************
 * DEFINES
 * ******************************************************************/

enum { NTH_DTYPE_GLOBAL, NTH_DTYPE_TEAM, NTH_DTYPE_GLOBAL_DO_TEAM,
	NTH_DTYPE_LOCAL, NTH_DTYPE_GLOBAL_DO_LOCAL,
	NTH_DTYPE_TEAM_DO_LOCAL };

#define NTH_DTYPE_TASK_GLOBAL			(nth_uint16_t) 0x0009
#define NTH_DTYPE_TASK_TEAM				(nth_uint16_t) 0x000A 
#define NTH_DTYPE_TASK_GLOBAL_DO_TEAM	(nth_uint16_t) 0x000B
#define NTH_DTYPE_TASK_LOCAL			(nth_uint16_t) 0x000C
#define NTH_DTYPE_TASK_GLOBAL_DO_LOCAL	(nth_uint16_t) 0x000D
#define NTH_DTYPE_TASK_TEAM_DO_LOCAL	(nth_uint16_t) 0x000E
/* -----------------------------------------------------------------*/
#define NTH_DTYPE_STANDARD			NTH_DTYPE_GLOBAL
/* -----------------------------------------------------------------*/
#define NTH_DST_INIT				(nth_uint16_t) 0x0000
#define NTH_DST_RUNNING				(nth_uint16_t) 0x0001
#define NTH_DST_READY				(nth_uint16_t) 0x0002
#define NTH_DST_BLOCK_NDEP			(nth_uint16_t) 0x0004
#define NTH_DST_BLOCK_TASKWAIT			(nth_uint16_t) 0x0008
#define NTH_DST_CREATION			(nth_uint16_t) 0x000F
#define NTH_DST_BLOCK_TEAMTASKS			(nth_uint16_t) 0x0010
#define NTH_DST_BARRIER				(nth_uint16_t) 0x0012
#define NTH_DST_EXIT				(nth_uint16_t) 0x0014
/* -----------------------------------------------------------------*/
#define NTH_DPRIO_REALTIME			(nth_uint16_t) 0x0000
#define NTH_DPRIO_HIGH				(nth_uint16_t) 0x4444
#define NTH_DPRIO_NORMAL			(nth_uint16_t) 0x8888
#define NTH_DPRIO_LOW				(nth_uint16_t) 0xCCCC
#define NTH_DPRIO_IDLE				(nth_uint16_t) 0xFFFF
/* *******************************************************************
 * STRUCTURES
 * ******************************************************************/
struct nth_loop_desc_t;
struct nth_dep_t;
struct nth_desc_t;
/* -------------------------------------------------------------------
 * nth_loop_desc_t: loop descriptor structure.
 * -----------------------------------------------------------------*/
typedef struct nth_loop_desc_t{
/* loop desc control */
	nth_spin_t mutex; 			/* struct's mutual exclusion */
	nth_word_t init; 			/* is the loop structure
								   initialized? */
	nth_word_t shared; 			/* are others nano-threads sharing
								   this structure */
	nth_word_t nreached;		/* how many nano-threads have reached
								   the critical point (usually a
								   intone's 'end_for') */
/* initial values */
	nth_int32_t start;
	nth_int32_t end;
	nth_int32_t step;
	nth_int32_t chunk;
	nth_word_t schedule;
	nth_word_t ordered;
	nth_word_t nplayers;
/* derivated values */
	nth_word_t step_abs;
	nth_int32_t step_sign;
	nth_word_t chunk_real;
	nth_word_t chunk_remainder;
/* current values */
	nth_word_t next_iter;
}nth_loop_desc_t;
/* -------------------------------------------------------------------
 * nth_dep_t:
 * -----------------------------------------------------------------*/
typedef struct nth_dep_t{
	void *desc;
	void *succ;
	struct nth_dep_t *next;
	struct nth_dep_t *previous;
	nth_word_t ndep;
}nth_dep_t;


/*
 * nth_task_ctx_t: specific context of task even if aggregated
 */
typedef struct nth_task_ctx_t {
	struct nth_desc_t *nthread;
	
	struct nth_task_ctx_t *parent_ctx;
	volatile nth_word_t my_ntasks;
	int level; // TODO: remove from nth_desc

	int immediate:1;    /* created or from cutoff? */
	int final:1;    	/* is it a final task? */
	int created_task:1; /* did this task create any other? */
	nth_time_t enter_time;

	/* instrumentation info */
	nth_instrumentation_ctx *instrument;
	nth_profile_data_t *active_profile;
	nth_profile_data_t profile;

	/* dependency info */
	nth_taskdeps_t deps;
} nth_task_ctx_t;


/*
 * nth_team_t: team specific data
 */

struct nth_player_t;

typedef struct nth_team_t
{
	/* multiple readers-writers vars; change often with tasks */
	union {
		struct {
			volatile nth_word_t 	ntasks;
			nth_desc_edlist_t 	queue;
			nth_spin_t		mutex;
		} d;
		l2cacheline dummy;
	} rw;

	/* writes at team start; read-only afterwards */
	union {
		struct {
			nth_word_t		nplayers;
			nth_word_t		nplayers_id;
			struct nth_desc_t *	master;
			void *			udata;
			struct nth_player_t *	inherit_from;
		} d;
		l2cacheline dummy;
	} ro;

	/* not aligned */
	int		    sem;
	int		    sem_flag;
	volatile nth_word_t barrier[NTH_DEFAULT_BARRIERS_PER_DESCRIPTOR];
	nth_loop_desc_t     loop[NTH_DEFAULT_LOOPS_PER_DESCRIPTOR];
} nth_team_t;
/* -------------------------------------------------------------------
 * nth_player_t: Player info
 * -----------------------------------------------------------------*/
typedef struct nth_player_t{
	struct nth_player_t *parent;

        nth_byte_t 	id;
        nth_team_t 	*team;
        nth_byte_t	 barrier_id;
        nth_byte_t 	loop_id;
        nth_loop_desc_t loop_local;
        nth_loop_desc_t *loop_current;
	nth_word_t 	n_team_players;

}nth_player_t;

/* -------------------------------------------------------------------
 * nth_desc_t: descriptor structure.
 * -----------------------------------------------------------------*/
typedef struct nth_desc_t{
/* n writes -- n reads */
/* shared team info (to lower level) */
/* xteruel:FIXME:add padding */
	// simple implementation of task sync
        volatile nth_word_t my_ntasks;

/* shared loop info */
	//nth_loop_desc_t team_loop[NTH_DEFAULT_LOOPS_PER_DESCRIPTOR];

/* 1 write -- n reads */
	nth_qt_t *sp;				/* stack pointer */
	nth_uint16_t type;				/* descriptor's type */

	int global:1;				/* not a team nth */
	int tie:1;				/* tie when executed? */
	int is_task:1;				/* is a task ? */
	int tied:1;				/* tied to a thread */
	volatile int idle;			/* is an idle nth? */

	volatile nth_uint16_t state;		/* descriptor's state */
	nth_uint16_t idle_state;
	nth_uint16_t prio;				/* descriptor's priority */
	nth_uint16_t vp;				/* virtual process */

	nth_word_t ndep;		/* number of dependences */

	nth_word_t stack_addr;			/* stack address */
	nth_word_t stack_size;			/* stack size */

	struct nth_task_ctx_t *creator_ctx;
	struct nth_desc_t *creator;		/* successor (i'm a task) */
	struct nth_desc_t *next;		/* next desc (if enqueued) */
	struct nth_desc_t *prev;		/* prev desc (if enqueue) */
	volatile nth_desc_edlist_t *myqueue;		/* where am I queued? */

	struct nth_queue_t *succ;		/* successors */
	//nth_desc_edlist_t team_queue;		/* team queue */

	nth_word_t deep_level;			/* nano-thread deep level */
	nth_word_t real_level;
/* task info */
/* team info (my info) */
	nth_team_t myteam;
	//nth_team_t *team;			/* 'team' i belong */

	nth_player_t myplayer;
	nth_player_t *player;

	int id;

	nth_task_ctx_t  top_ctx;
	nth_task_ctx_t  *task_ctx;

	int executed;  // false if never executed
	nth_time_t prediction;

	//TODO: padding
	//nth_taskdeps_t deps;
}nth_desc_t;
/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * descriptors functions:
 * -----------------------------------------------------------------*/
nth_desc_t* nth_desc_get(void);
nth_desc_t * nth_get_idle (nth_player_t *player);
void nth_desc_init(nth_desc_t *desc);
void nth_desc_depadd(nth_desc_t *desc, nth_word_t ndep);
nth_word_t nth_desc_depsub(nth_desc_t *desc, nth_word_t ndep);

void nth_desc_succadd(nth_desc_t *desc, nth_desc_t *succ);
void nth_desc_succflush(nth_desc_t *desc);

#define nth_team_lock(desc) nth_spin_lock(&(desc)->team->team_mutex)
#define nth_team_unlock(desc) nth_spin_unlock(&(desc)->team->team_mutex)

/* -------------------------------------------------------------------
 * descriptor queues functions:
 * -----------------------------------------------------------------*/
nth_desc_t* nth_desc_scheduler(nth_desc_t *from_desc);
void nth_desc_q_init(nth_desc_edlist_t *q);
void nth_desc_q_put(nth_desc_edlist_t *q, nth_desc_edlist_t *d);
nth_desc_t* nth_desc_q_get(nth_desc_edlist_t *q);
nth_desc_t* nth_desc_q_get_ready(nth_desc_edlist_t *q,int vp);
/* -------------------------------------------------------------------
 * dependence queues functions:
 * -----------------------------------------------------------------*/
nth_dep_t* nth_dep_get (void);

void nth_dep_q_put(nth_dep_t *d);
nth_dep_t* nth_dep_q_get(void);
#ifdef __cplusplus
}
#endif
#endif /* !NTH_DESC_H */
