/* nthreads.c -- Nano-threads implementation.
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
#include "nthreads.h"
#include "config.h"
#include "nth_config.h"
#include "nth_main.h"
#include "nth_desc.h"
#include "nth_qt.h"
#include "nth_sched.h"
#include "nth_support.h"
#include "nth_gv.h"
#include "nth_instrument.h"
/* -----------------------------------------------------------------*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>


/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/

void nth_init_task_ctx ( nth_task_ctx_t *ctx, nth_task_ctx_t *parent,
			int level, int immediate )
{
	ctx->parent_ctx = parent;
	ctx->enter_time = 0;
	ctx->my_ntasks = 0;
	ctx->created_task = 0;
	ctx->instrument = 0;
	ctx->level = level;
	ctx->immediate = immediate;
	ctx->final = 0;

	nth_init_profile(&ctx->profile);
	nth_task_deps_init (&ctx->deps);

	ctx->active_profile = &ctx->profile;
}

void nth_finalize ( nth_desc_t *desc )
{
	if ( desc->task_ctx )
		desc->task_ctx->final = 1;
}

/**********************************************************
 *   nth_create_task: creates an OpenMP tasks nano-thread
 **********************************************************/

nth_desc_t * nth_create_task (
	void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, void ***va, int *nar, int *nav,
	...)
{
	fprintf(stderr,"nth_create_task is not supported in this runtime, please upgrade your compiler installation\n");
	exit(2);
	return NULL;
}


/* 新しく task を作り，それを返す関数 */
nth_desc_t * nth_create_task_ci (
	void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, nth_ci_t ci, void ***va, int *nar, int *nav,
	...)
{
	nth_desc_t *descriptor;  /* 返り値．生成される新しいtask */
	va_list vargs;
	int my_type = *type;
	nth_desc_t *myself = NTH_MYSELF;

NTH_DEBUG_START(NTH_DEBUG_CREATE, NTH_KTH, myself,
"start")
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"userf =", userf)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"&type =", type)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"type =", *type)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"ndep =", *ndep)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"vp =", *vp)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"succ =", *succ)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"va =", *va)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"nar =", *nar)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"nav =", *nav)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"&my_type", &my_type)

	nth_instrument_enter_create(myself);

	va_start(vargs, (*nav));
		
NTH_DEBUG_BODY(NTH_DEBUG_CREATE, NTH_KTH, myself,
"creating descriptor..")
	descriptor = (nth_desc_t *)nth_desc_get();

	/* TODO: return error? */
	if (!descriptor) {
NTH_DEBUG_BODY(NTH_DEBUG_CREATE, NTH_KTH, myself,"cannot allocate new task")
		return NULL;
	}
	
	if (my_type < 8) descriptor->type = my_type;
	else descriptor->type = my_type - 8;

NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"descriptor type =", descriptor->type)
	
	descriptor->ndep = (*ndep);
	descriptor->state = NTH_DST_CREATION;
	descriptor->vp = (*vp);
	
	if (*succ) nth_desc_succadd(descriptor, (*succ));
	
	descriptor->real_level = descriptor->deep_level = myself->deep_level + 1;
	descriptor->creator = myself;
	descriptor->creator_ctx = myself->task_ctx;

//	assert(my_type < 8);

	descriptor->is_task = 1;
	/* setting team info */
	descriptor->player = myself->player;
	nth_atm_add(&descriptor->player->team->rw.d.ntasks,1);
	nth_atm_add(&myself->task_ctx->my_ntasks,1);

	/* number of tasks couters */
	nth_atm_add(
		&nth_data.total_tasks[descriptor->deep_level > NTH_MAX_LEVEL?
			NTH_MAX_LEVEL-1 : descriptor->deep_level], 1);
	nth_word_t y,x = nth_atm_add(&nth_data.num_tasks,1);
	x++;
	while ( x >  (y=nth_data.max_tasks) ) {
		__sync_bool_compare_and_swap(&nth_data.max_tasks,y,x);
	}

	if ( myself->task_ctx )
		myself->task_ctx->created_task = 1;

	descriptor->task_ctx = &descriptor->top_ctx;
	nth_init_task_ctx (descriptor->task_ctx, myself->task_ctx,
		myself->deep_level+1,0);
	descriptor->task_ctx->nthread = descriptor;

	profile_estimate_task_size(descriptor->deep_level,
		&descriptor->prediction);

	/* creating stack frame */
	descriptor->sp = (nth_qt_t *) nth_qt_args_va(
		(nth_qt_t *) descriptor->sp,
		ci,
		(void ***) va,
		(nth_word_t) (*nar),
		(nth_word_t) (*nav),
		vargs,
		(void *) descriptor,
		(nth_qt_userf_t *) userf,  /* laysakura: nth_qt_t に，taskにbindされた関数についての情報があるはず
		                              -> nth_qt_tはaddressがstack-pointerに対応する構造体っぽい．nth_qt_tのメンバはdummy変数のみ
		                                 nth_qt_userf_tを見るべし */
		(nth_qt_cleanup_t *) nth_cleanup_nthread
	);

NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"descriptor type ", my_type)

	switch ( my_type ) {
		case NTH_DTYPE_GLOBAL_DO_LOCAL:
		case NTH_DTYPE_TASK_GLOBAL_DO_LOCAL:
			descriptor->tie = 1;
		case NTH_DTYPE_GLOBAL:
		case NTH_DTYPE_TASK_GLOBAL:
			descriptor->global = 1;
			break;
		case NTH_DTYPE_TASK_TEAM_DO_LOCAL:
		case NTH_DTYPE_TEAM_DO_LOCAL:
			descriptor->tie = nth_data.tasks_type != NTH_DTYPE_TEAM;
			break;
		case NTH_DTYPE_TEAM:
		case NTH_DTYPE_TASK_TEAM:
			descriptor->tie = nth_data.tasks_type == NTH_DTYPE_TEAM_DO_LOCAL;
			break;
		case NTH_DTYPE_LOCAL:
		case NTH_DTYPE_TASK_LOCAL:
			descriptor->tied = 1;
			break;
	}

	gv_task_create(myself,descriptor);
	va_end(vargs);

NTH_DEBUG_END_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"end, return =", descriptor)

	nth_instrument_leave_create(myself);
	return descriptor;
}

nth_desc_t *
nthf_create_task (void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, void ***va, int *nar, int *nav, ...)
	__attribute__ ((weak, alias ("nth_create_task")));

/**********************************************************
 *   nth_create: creates a nano-thread
 **********************************************************/
nth_desc_t *
nth_create_new (void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, void ***va, int *nar, int *nav, ...)
{
	nth_desc_t *descriptor;
	va_list vargs;
	int my_type = *type;
	nth_desc_t *myself = NTH_MYSELF;

NTH_DEBUG_START(NTH_DEBUG_CREATE, NTH_KTH, myself,
"start")
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"userf =", userf)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"&type =", type)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"type =", *type)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"ndep =", *ndep)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"vp =", *vp)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"succ =", *succ)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"va =", *va)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"nar =", *nar)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"nav =", *nav)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"&my_type", &my_type)

	nth_instrument_enter_create(myself);

	va_start(vargs, (*nav));
		
NTH_DEBUG_BODY(NTH_DEBUG_CREATE, NTH_KTH, myself,
"creating descriptor..")
	descriptor = (nth_desc_t *)nth_desc_get();

	/* TODO: return error? */
	if (!descriptor) {
NTH_DEBUG_BODY(NTH_DEBUG_CREATE, NTH_KTH, myself,"cannot allocate new task")
		return NULL;
	}
	
NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"descriptor type =", descriptor->type)
	
	descriptor->ndep = (*ndep);
	descriptor->state = NTH_DST_CREATION;
	descriptor->vp = (*vp);
	
	
	if (*succ) nth_desc_succadd(descriptor, (*succ));
	
	descriptor->real_level = descriptor->deep_level = myself->deep_level + 1;
	descriptor->creator = myself;
	descriptor->creator_ctx = myself->task_ctx;
	descriptor->player = 0;

	descriptor->task_ctx = &descriptor->top_ctx;
	nth_init_task_ctx (descriptor->task_ctx,myself->task_ctx,
		myself->deep_level+1,0);
	descriptor->task_ctx->nthread = descriptor;

	/* creating stack frame */
	descriptor->sp = (nth_qt_t *) nth_qt_args_va(
		(nth_qt_t *) descriptor->sp,
		NTH_CI_VALS,
		(void ***) va,
		(nth_word_t) (*nar),
		(nth_word_t) (*nav),
		vargs,
		(void *) descriptor,
		(nth_qt_userf_t *) userf,
		(nth_qt_cleanup_t *) nth_cleanup_nthread
	);

NTH_DEBUG_BODY_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"descriptor type ", my_type)

	switch ( my_type ) {
		case NTH_DTYPE_GLOBAL_DO_LOCAL:
		case NTH_DTYPE_TASK_GLOBAL_DO_LOCAL:
			descriptor->tie = 1;
		case NTH_DTYPE_GLOBAL:
		case NTH_DTYPE_TASK_GLOBAL:
			descriptor->global = 1;
			break;
		case NTH_DTYPE_TASK_TEAM_DO_LOCAL:
		case NTH_DTYPE_TEAM_DO_LOCAL:
			descriptor->tie = nth_data.tasks_type != NTH_DTYPE_TEAM;
		case NTH_DTYPE_TEAM:
		case NTH_DTYPE_TASK_TEAM:
			descriptor->tie = nth_data.tasks_type == NTH_DTYPE_TEAM_DO_LOCAL;
			break;
		case NTH_DTYPE_LOCAL:
		case NTH_DTYPE_TASK_LOCAL:
			descriptor->tied = 1;
			break;
	}

	va_end(vargs);

NTH_DEBUG_END_VAL(NTH_DEBUG_CREATE, NTH_KTH, myself,
"end, return =", descriptor)

	nth_instrument_leave_create(myself);

	return descriptor;
}

nth_desc_t *
nthf_create_new (void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, void ***va, int *nar, int *nav, ...)
	__attribute__ ((weak, alias ("nth_create_new")));

/**********************************************************
 *   nth_submit: submits a nano-thread to the scheduler
 **********************************************************/

void nth_submit (nth_desc_t *nth)
{
	nth_sch_newnth(nth);
}

void nthf_submit ( nth_desc_t *nth )
	__attribute__ ((weak, alias ("nth_submit")));

/**********************************************************
 * nth_init_player: Initalizes a player structure
 **********************************************************/

int nth_init_player (nth_player_t *player)
{
	player->id = 0;
	player->team = 0;
	player->barrier_id = 0;
	player->loop_id = 0;
	player->loop_current = 0;
	nth_spin_init(&player->loop_local.mutex);
	player->loop_local.init = 0;

	/* default values */
	player->n_team_players = nth_data.nkths;

	return 0;
}

/**********************************************************
 * nth_end_player: Disposes all player structures
 **********************************************************/

int nth_end_player (nth_player_t *player)
{
	return 0;
}

/**********************************************************
 * nth_get_player_id: Returns my id in the team
 **********************************************************/

int nth_get_player_id (void)
{
	return NTH_MYSELF->player->id;
}



/**********************************************************
 * nth_init_team: Initalizes a team structure
 **********************************************************/

int nth_init_team (nth_team_t *team, int team_size, nth_desc_t *master,
		   void *data)
{
	int i;
	nth_player_t *inherit_from = master ?  master->player : 0;

	if ( team_size == 0 ) {
		if ( inherit_from )
			team_size = inherit_from->n_team_players;
		else
			team_size = nth_data.nkths;
	}

	team->rw.d.ntasks = 0;
	nth_desc_edlist_init(&team->rw.d.queue);
	nth_spin_init(&team->rw.d.mutex);

	team->ro.d.nplayers = team_size;
	team->ro.d.nplayers_id = 1; // 0 is reserved for master
	team->ro.d.master = master;
	team->ro.d.inherit_from = inherit_from;
	team->ro.d.udata = data;

	team->sem = 0;
	team->sem_flag = 0;

	for (i=0;i<NTH_DEFAULT_BARRIERS_PER_DESCRIPTOR; i++){
		team->barrier[i] = 0;
	}
	for (i=0;i<NTH_DEFAULT_LOOPS_PER_DESCRIPTOR; i++){
		nth_spin_init(&team->loop[i].mutex);
		team->loop[i].init = FALSE;
	}

	return 0;
}

/**********************************************************
 * nth_end_team: Disposes all team structures
 **********************************************************/

int nth_end_team (nth_team_t *team)
{
	return 0;
}

/**********************************************************
 * nth_get_team_udata: Returns team associated user-data
 **********************************************************/

void * nth_get_team_udata (void)
{
	return NTH_MYSELF->player->team->ro.d.udata;
}


/**********************************************************
 *   nth_enter_team: associate nano-thread to a team
 **********************************************************/

int nth_enter_team (nth_team_t *team, nth_player_t *player,int sync)
{
	nth_desc_t *myself = NTH_MYSELF;

	if ( myself == team->ro.d.master) {
		player->id = 0;
		// increment level so it has the same as the other players
		myself->deep_level++;
		myself->task_ctx->level++;
	} else
		player->id = nth_atm_add(&team->ro.d.nplayers_id,1);

	/* associate to team */
	player->team = team;
	player->parent = myself->player;
	myself->player = player;

	/* inherit values */
	if ( team->ro.d.inherit_from ) {
		player->n_team_players =
			team->ro.d.inherit_from->n_team_players;
	}

	if (sync) in__tone_barrier();
	return 0;
}


/**********************************************************
 *   nth_leave_team: disassociate nano-thread to a team
 **********************************************************/
int nth_leave_team (int sync)
{
	nth_desc_t *myself = NTH_MYSELF;

	if (sync) in__tone_barrier();

	if ( myself == myself->player->team->ro.d.master ) {
		//restore level
		myself->deep_level--;
		myself->task_ctx->level--;
	}

	myself->player  = myself->player->parent;

	return 0;
}

/**********************************************************
 *   nth_current_team: returns current associated team
 **********************************************************/
nth_team_t *nth_current_team (void)
{
	return NTH_MYSELF->player->team;
}

/**********************************************************
 *   nth_rejoin_team: reassociates a nano-thread to a team
 **********************************************************/
int nth_rejoin_team (nth_team_t *team)
{
	NTH_MYSELF->player->team = team;
	return 0;
}


/* -------------------------------------------------------------------
 * nth_block:
 * -----------------------------------------------------------------*/
void
nth_block ()
{
	nth_word_t ntasks;
	nth_desc_t *myself=NTH_MYSELF;
NTH_DEBUG_START(NTH_DEBUG_BLOCK, NTH_KTH, NTH_MYSELF,
"start")
NTH_DEBUG_BODY_VAL(NTH_DEBUG_BLOCK, NTH_KTH, NTH_MYSELF,
"blok with (n) dependences before my own depsub", NTH_MYSELF->ndep)

NTH_DEBUG_BODY_VAL(NTH_DEBUG_BLOCK, NTH_KTH, NTH_MYSELF,
"blok with (n) dependences after my own depsub", NTH_MYSELF->ndep)

	nth_instrument_enter_block(myself);
	nth_sch_block_on_cond(NTH_DST_BLOCK_NDEP,&myself->ndep,1);
	assert(myself->ndep == 1);
	nth_instrument_leave_block(myself);

NTH_DEBUG_END(NTH_DEBUG_BLOCK, NTH_KTH, NTH_MYSELF,
"end.")
}
/* -----------------------------------------------------------------*/
void
nthf_block_ () __attribute__ ((weak, alias ("nth_block")));
/* -------------------------------------------------------------------
 * nth_yield:
 * -----------------------------------------------------------------*/
void
nth_yield(void)
{
NTH_DEBUG_START(NTH_DEBUG_YIELD, NTH_KTH, NTH_MYSELF,
"start")
NTH_DEBUG_BODY_VAL(NTH_DEBUG_YIELD, NTH_KTH, NTH_MYSELF,
"yield with (n) dependences before my own depsub", NTH_MYSELF->ndep)

	nth_instrument_enter_yield(NTH_MYSELF);
	nth_sch_yield();
	nth_instrument_leave_yield(NTH_MYSELF);

NTH_DEBUG_END(NTH_DEBUG_YIELD, NTH_KTH, NTH_MYSELF,
"end.")
}
/* -----------------------------------------------------------------*/
void
nthf_yield_ () __attribute__ ((weak, alias ("nth_yield")));
/* -------------------------------------------------------------------
 * nth_task_block: not implemented yet
 * -----------------------------------------------------------------*/
void
nth_task_block()
{
	nth_desc_t *myself = NTH_MYSELF;
	nth_word_t ndep, task_ndep;
NTH_DEBUG_START(NTH_DEBUG_TASK_BLOCK, NTH_KTH, NTH_MYSELF,
"start")


	nth_instrument_enter_taskwait(myself);
	nth_sch_block_on_cond(NTH_DST_BLOCK_TASKWAIT, &myself->task_ctx->my_ntasks, 0);
	nth_assert(myself->task_ctx->my_ntasks == 0,
		  "kth=%d myself=%p my_tasks=%d\n",
		   NTH_KTH,myself,myself->task_ctx->my_ntasks);

	nth_task_flush_scope(myself->task_ctx);
	nth_instrument_leave_taskwait(myself);

NTH_DEBUG_END(NTH_DEBUG_TASK_BLOCK, NTH_KTH, NTH_MYSELF,
"end.")
}
/* -----------------------------------------------------------------*/
void
nthf_task_block_ () __attribute__ ((weak, alias ("nth_task_block")));


void
nth_team_task_block()
{
	nth_desc_t *myself = NTH_MYSELF;
	nth_word_t ndep, task_ndep;
NTH_DEBUG_START(NTH_DEBUG_TASK_BLOCK, NTH_KTH, NTH_MYSELF,
"start")

	assert(myself->player->team);

	/* wait until all tasks from team are executed  */
	nth_sch_block_on_cond(NTH_DST_BLOCK_TEAMTASKS,
		&myself->player->team->rw.d.ntasks,0);
	nth_assert(myself->player->team->rw.d.ntasks==0,"kth=%d ntasks=%d",
		  NTH_KTH,myself->player->team->rw.d.ntasks);

NTH_DEBUG_END(NTH_DEBUG_TASK_BLOCK, NTH_KTH, NTH_MYSELF,
"end.")
}

int nth_get_num_team_players (void)
{
	nth_desc_t *myself = NTH_MYSELF;
	if ( myself->player ) return myself->player->n_team_players;
 	return 1;
}

/* -------------------------------------------------------------------
 * nth_myself:
 * -----------------------------------------------------------------*/
nth_desc_t*
nth_myself ()
{
NTH_DEBUG_START(NTH_DEBUG_MYSELF, NTH_KTH, NTH_MYSELF,
"start")
NTH_DEBUG_END_VAL(NTH_DEBUG_MYSELF, NTH_KTH, NTH_MYSELF,
"end, myself =", NTH_MYSELF)
	return NTH_MYSELF;
}
/* -----------------------------------------------------------------*/
nth_desc*
nth_self ()
	__attribute__ ((weak, alias("nth_myself")));
/* -----------------------------------------------------------------*/
nth_desc*
nthf_self_ ()
	__attribute__ ((weak, alias ("nth_myself")));
/* -------------------------------------------------------------------
 * nth_depadd: this function is deprecated. the counter of
 * dependences is automatically managed by de create's functions.
 * -----------------------------------------------------------------*/
void
nth_depadd (nth_desc_t **desc, int *ndep)
{
NTH_DEBUG_START(NTH_DEBUG_DEPADD, NTH_KTH, NTH_MYSELF,
"start")
	nth_desc_depadd(*desc, (nth_word_t)*ndep);
NTH_DEBUG_BODY_VAL(NTH_DEBUG_DEPADD, NTH_KTH, NTH_MYSELF,
"adding dependences to desc =", *desc)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_DEPADD, NTH_KTH, NTH_MYSELF,
"number of dependences added =", *ndep)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_DEPADD, NTH_KTH, NTH_MYSELF,
"total dependences =", (*desc)->ndep)
NTH_DEBUG_END(NTH_DEBUG_DEPADD, NTH_KTH, NTH_MYSELF,
"end")
}
/* -----------------------------------------------------------------*/
void
nthf_depadd_ (nth_desc **desc, int *ndep)
	__attribute__ ((weak, alias("nth_depadd")));
/* -------------------------------------------------------------------
 * nth_depsub: this function is deprecated. see nth_depadd.
 * -----------------------------------------------------------------*/
int
nth_depsub (nth_desc_t **desc, int *ndep)
{
NTH_DEBUG_START(NTH_DEBUG_DEPSUB, NTH_KTH, NTH_MYSELF,
	"start")
	return (int) nth_desc_depsub(*desc, (nth_word_t)*ndep);
NTH_DEBUG_END(NTH_DEBUG_DEPSUB, NTH_KTH, NTH_MYSELF,
	"end")
}
/* -----------------------------------------------------------------*/
int
nthf_depsub_ (nth_desc **desc, int *ndep)
	__attribute__ ((weak, alias("nth_depsub")));



/* -------------------------------------------------------------------
 * nth_getncpus:
 * -----------------------------------------------------------------*/
int
nth_getncpus ()
{
NTH_DEBUG_START(NTH_DEBUG_GETNCPUS, NTH_KTH, NTH_MYSELF,
"start")
NTH_DEBUG_END_VAL(NTH_DEBUG_GETNCPUS, NTH_KTH, NTH_MYSELF,
"end, ncpus =", nth_data.nkths)
	return (int)nth_data.nkths;
}
/* -----------------------------------------------------------------*/
int
nth_cpus_actual ()
	__attribute__ ((weak, alias ("nth_getncpus")));
/* -----------------------------------------------------------------*/
int
nthf_cpus_actual_()
	__attribute__ ((weak, alias ("nth_getncpus")));
/* -------------------------------------------------------------------
 * nth_getncpus:
 * -----------------------------------------------------------------*/
int
nth_get_cpu_num (void)
{
NTH_DEBUG_START(NTH_DEBUG_GET_CPU_NUM, NTH_KTH, NTH_MYSELF,
"start")
NTH_DEBUG_END_VAL(NTH_DEBUG_GET_CPU_NUM, NTH_KTH, NTH_MYSELF,
"end, cpu =", NTH_KTH)
	return (int) NTH_KTH;
}
/* -----------------------------------------------------------------*/
int
nthf_get_cpu_num_ (void)
	__attribute__ ((weak, alias ("nth_get_cpu_num")));

/* -------------------------------------------------------------------
 * nth_team_set_nplayers 
 * -----------------------------------------------------------------*/
void
nth_team_set_nplayers (int *nplayers)
{
	NTH_MYSELF->player->n_team_players = *nplayers;
}
/* -----------------------------------------------------------------*/
void
nthf_team_set_nplayers_ (int *nplayers)
	__attribute__ ((weak, alias ("nth_team_set_nplayers")));

/* -------------------------------------------------------------------
 * synchronize:
 * -----------------------------------------------------------------*/
void
synchronize (void)
{
NTH_DEBUG_START(NTH_DEBUG_SYNCHRONIZE, NTH_KTH, NTH_MYSELF,
"start")

	__synchronize_pragma();

NTH_DEBUG_END(NTH_DEBUG_SYNCHRONIZE, NTH_KTH, NTH_MYSELF,
"end")
}
/* -----------------------------------------------------------------*/
void
synchronize_ ()
	__attribute__ ((weak, alias("synchronize")));

void nth_push_task_ctx (nth_task_ctx_t *ctx)
{
	nth_desc *myself = NTH_MYSELF;

	myself->deep_level++;
	nth_init_task_ctx(ctx,myself->task_ctx,myself->deep_level,1);
	myself->task_ctx = ctx;
	myself->task_ctx->nthread = myself;
	gv_task_immediate(myself);
	nth_instrument_enter_immediate(myself);
	profile_task_enter_level(ctx);
}

void nth_pop_task_ctx ()
{
	nth_desc *myself = NTH_MYSELF;

	// TODO: remove, needs additional support
	nth_task_block();
	nth_task_flush_deps(myself->task_ctx);

	profile_task_exit_level(myself->task_ctx);
	nth_instrument_exit_immediate(myself);
	myself->deep_level--;
	// propagate task creation
	if ( myself->task_ctx->created_task )
		myself->task_ctx->parent_ctx->created_task = 1;
	// restore previous level context
	myself->task_ctx = myself->task_ctx->parent_ctx;
}
