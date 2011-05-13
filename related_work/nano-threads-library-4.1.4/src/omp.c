/* omp.c -- OpenMP support for Nano-Threads packages.
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
#include "omp.h"
#include "config.h"
#include "nthreads.h"
#include "nth_config.h"
#include "nth_main.h"
#include "nth_desc.h"
/* -----------------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * omp_get_thread_num:
 * -----------------------------------------------------------------*/
int
omp_get_thread_num ()
{
NTH_DEBUG_START(NTH_DEBUG_OMP_GET_THREAD_NUM,NTH_KTH,NTH_MYSELF,
"start")

NTH_DEBUG_END_VAL(NTH_DEBUG_OMP_GET_THREAD_NUM,NTH_KTH,NTH_MYSELF,
"end. return =", NTH_MYSELF->player->id)
	return (int) NTH_MYSELF->player->id;
}
/* -----------------------------------------------------------------*/
int
omp_get_thread_num_ ()
	__attribute__ ((weak, alias("omp_get_thread_num")));
/* -------------------------------------------------------------------
 * omp_get_num_threads
 * -----------------------------------------------------------------*/
int
omp_get_num_threads ()
{
	if (NTH_MYSELF->player->team)
		return (int)NTH_MYSELF->player->team->ro.d.nplayers;
	else return (int) 1;
}
/* -----------------------------------------------------------------*/
int
omp_get_num_threads_()
	__attribute__ ((weak, alias("omp_get_num_threads")));
/* -------------------------------------------------------------------
 * omp_get_max_threads:
 * -----------------------------------------------------------------*/
int
omp_get_max_threads ()
{
	return (int) nth_data.nkths;
}
/* -----------------------------------------------------------------*/
int
omp_get_max_threads_ ()
	__attribute__ ((weak, alias("omp_get_max_threads")));
/* -------------------------------------------------------------------
 * omp_set_num_threads:
 * -----------------------------------------------------------------*/
void
omp_set_num_threads (int nthreads)
{
	NTH_MYSELF->player->n_team_players = nthreads;
}

/* -----------------------------------------------------------------*/
void
omp_set_num_threads_ (int nthreads)
	__attribute__ ((weak, alias("omp_set_num_threads")));
/* *******************************************************************
 * lock functions:
 * ******************************************************************/
/* -------------------------------------------------------------------
 * omp_init_lock:
 * -----------------------------------------------------------------*/
void omp_init_lock (omp_lock_t *lock){
	nth_spin_init((nth_spin_t *)lock);
}
/* -----------------------------------------------------------------*/
void omp_init_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_init_lock")));
/* -------------------------------------------------------------------
 * omp_destroy_lock:
 * -----------------------------------------------------------------*/
void omp_destroy_lock(omp_lock_t *lock){
}
/* -----------------------------------------------------------------*/
void omp_destroy_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_destroy_lock")));
/* -------------------------------------------------------------------
 * omp_set_lock:
 * -----------------------------------------------------------------*/
void omp_set_lock(omp_lock_t *lock){
	nth_spin_lock((nth_spin_t *)lock);
}
/* -----------------------------------------------------------------*/
void omp_set_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_set_lock")));
/* -------------------------------------------------------------------
 * omp_unset_lock:
 * -----------------------------------------------------------------*/
void omp_unset_lock(omp_lock_t *lock){
	nth_spin_unlock((nth_spin_t *)lock);
}
/* -----------------------------------------------------------------*/
void omp_unset_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_unset_lock")));
/* -------------------------------------------------------------------
 * omp_test_lock:
 * -----------------------------------------------------------------*/
int omp_test_lock(omp_lock_t *lock){
	return nth_spin_try_lock((nth_spin_t *)lock);
}
/* -----------------------------------------------------------------*/
int omp_test_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_test_lock")));
/* *******************************************************************
 * nested lock functions:
 * ******************************************************************/
/* -------------------------------------------------------------------
 * omp_init_nest_lock:
 * -----------------------------------------------------------------*/
void omp_init_nest_lock (omp_lock_t *lock){
	nth_spin_init((nth_spin_t *)lock);
}
/* -----------------------------------------------------------------*/
void omp_init_nest_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_init_nest_lock")));
/* -------------------------------------------------------------------
 * omp_destroy_nest_lock:
 * -----------------------------------------------------------------*/
void omp_destroy_nest_lock(omp_lock_t *lock){
}
/* -----------------------------------------------------------------*/
void omp_destroy_nest_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_destroy_nest_lock")));
/* -------------------------------------------------------------------
 * omp_set_nest_lock:
 * -----------------------------------------------------------------*/
void omp_set_nest_lock(omp_lock_t *lock){
	nth_spin_lock((nth_spin_t *)lock);
}
/* -----------------------------------------------------------------*/
void omp_set_nest_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_set_nest_lock")));
/* -------------------------------------------------------------------
 * omp_unset_nest_lock:
 * -----------------------------------------------------------------*/
void omp_unset_nest_lock(omp_lock_t *lock){
	nth_spin_unlock((nth_spin_t *)lock);
}
/* -----------------------------------------------------------------*/
void omp_unset_nest_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_unset_nest_lock")));
/* -------------------------------------------------------------------
 * omp_test_nest_lock:
 * -----------------------------------------------------------------*/
int omp_test_nest_lock(omp_lock_t *lock){
	return nth_spin_try_lock((nth_spin_t *)lock);
}
/* -----------------------------------------------------------------*/
int omp_test_nest_lock_ (omp_lock_t *lock)
	__attribute__ ((weak, alias("omp_test_nest_lock")));
/* -------------------------------------------------------------------
 * omp_get_wtime:
 * -----------------------------------------------------------------*/
double
omp_get_wtime(void)
{
	struct timeval ts;
	double t;
	int err;
	
	/* FIXME: take into accout the error returned */
	err = gettimeofday(&ts, NULL);
	t = (double) (ts.tv_sec)  + (double) ts.tv_usec * 1.0e-6;
	
	return t;
}
/* -----------------------------------------------------------------*/
int omp_get_wtime_ (void)
	__attribute__ ((weak, alias("omp_get_wtime")));
/* -------------------------------------------------------------------
 * omp_test_nest_lock:
 * -----------------------------------------------------------------*/
double
omp_get_wtick(void)
{
	return (double) 1.0e-6;
}
/* -----------------------------------------------------------------*/
int omp_get_wtick_ (void)
	__attribute__ ((weak, alias("omp_get_wtick")));

int omp_in_final ( void ) 
{
   return NTH_MYSELF->task_ctx->final;
}
