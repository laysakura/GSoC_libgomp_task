/* nthreads.h -- Nano-threads header.
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
#ifndef NTHREADS_H
#define NTHREADS_H
/* *******************************************************************
 * INCLUDES
 * ******************************************************************/
#include "nth_config.h"
#include "nth_desc.h"

#ifdef __cplusplus
extern "C" {
#endif
/* *******************************************************************
 * DEFINES
 * ******************************************************************/
extern nth_desc_t * NTH_CREATE_NTHREAD_ERROR;
extern nth_desc_t * NTH_CANNOT_ALLOCATE_TASK;
/* *******************************************************************
 * DATA TYPES
 * ******************************************************************/
typedef nth_word_t nth_argdesc_t;
/* *******************************************************************
 * BACKWARD COMPATIBILITY
 * ******************************************************************/
/* -------------------------------------------------------------------
 * DATA TYPES
 * -----------------------------------------------------------------*/
typedef struct nth_desc_t nth_desc;
typedef nth_argdesc_t nth_argdesc;

/* -------------------------------------------------------------------
 * HEADERS (nthreads)
 * -----------------------------------------------------------------*/
nth_desc_t *
nth_create (void *userf, int *type, int *ndep, int *vp,
    nth_desc_t **succ, char *file, int line, char *fname,
	void ***va, int *nar, int *nav, ...);

nth_desc *
nthf_create_ (void *userf, int *type, int *ndep, int *vp,
    nth_desc_t **succ, char *file, int line, char *fname,
	void ***va, int *nar, int *nav, ...);
				
/* -------------------------------------------------------------------
 * HEADERS (support)
 * -----------------------------------------------------------------*/
nth_word_t nth_tas(nth_word_t addr, nth_word_t value);
nth_word_t nth_atm_add(nth_word_t addr, nth_word_t value);
/* *******************************************************************
 * *******************************************************************
 * ******************************************************************/


/* old headers -----------------------------------------------------*/
nth_desc *nth_self(void);
/* -> nth_myself() */
int nth_cpus_actual(void);
/* -> nth_getncpus() */
/* fortran headers -------------------------------------------------*/
nth_desc *nthf_create_1s_(void * userf, int *ndep,
	nth_desc **succ, nth_argdesc *mask_desc, int *argc, ...);
/* -> nth_create_1s() */
nth_desc *nthf_create_1s_vp_(void * userf, int *ndep, int *vp,
	nth_desc **succ, nth_argdesc *mask_desc, int *argc, ...);
/* -> nth_create_1s_vp() */
nth_desc_t * nth_create_new (
	void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, void ***va, int *nar, int *nav,
	...);

nth_desc_t * nth_create_task (
	void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, void ***va, int *nar, int *nav,
	...);
nth_desc_t * nthf_create_task (void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, void ***va, int *nar, int *nav,...);

nth_desc_t * nth_create_task_ci (
	void *userf, int *type, int *ndep, int *vp,
	nth_desc_t **succ, nth_ci_t ci, void ***va, int *nar, int *nav,
	...);

void nth_submit (nth_desc_t *nth);
void nthf_submit (nth_desc_t *nth);

/* -> nth_create_task() */
void nthf_depadd_(nth_desc **desc, int *ndep);
/* -> nth_depadd() */
int nthf_depsub_(nth_desc **desc, int *ndep);
/* -> nth_depsub() */
nth_desc *nthf_self_(void);
/* -> nth_myself() */
void nthf_block_(void);
/* -> nth_block() */
int nthf_cpus_actual_(void);
/* -> nth_getncpus() */
/* *******************************************************************
 * INTERFACE FUNCTIONS (NANO-THREADS)
 * ******************************************************************/
void nth_depadd(nth_desc_t **desc, int *ndep);
int nth_depsub(nth_desc_t **desc, int *ndep);
 
void nth_push_taskgroup_scope(void);
void nthf_push_taskgroup_scope_(void);

void nth_pop_taskgroup_scope(void);
void nthf_pop_taskgroup_scope_(void);

void nth_block(void);
void nth_yield(void);

int nth_init_player (nth_player_t *player);
int nth_end_player (nth_player_t *player);
int nth_get_player_id (void);

void nth_finalize ( nth_desc_t *desc );

int nth_init_team (nth_team_t *team, int team_size, nth_desc_t *master,
		   void *data);
int nth_end_team (nth_team_t *team);
void * nth_get_team_udata (void);
int nth_enter_team (nth_team_t *team, nth_player_t *player, int sync);
int nth_leave_team (int sync);
nth_team_t *nth_current_team (void);
int nth_rejoin_team (nth_team_t *team);

int nth_get_num_team_players (void);

void nth_team_set_nplayers(int *nplayers);
void nthf_team_set_nplayers_(int *nplayers);

void nth_task_block(void);
void nthf_task_block_(void);

void nth_taskgroup_block(void);

nth_desc_t *nth_myself(void);

int nth_getncpus(void);
int nth_get_cpu_num(void);

void nth_push_task_ctx (nth_task_ctx_t *ctx);
void nth_pop_task_ctx ();

void synchronize(void);
#define __synchronize_pragma()

void nth_spin_lock(nth_spin_t *spin);
void nth_spin_unlock(nth_spin_t *spin);
void nthf_spin_lock_(nth_spin_t *spin);
void nthf_spin_unlock_(nth_spin_t *spin);

#ifdef __cplusplus
}
#endif

#endif
