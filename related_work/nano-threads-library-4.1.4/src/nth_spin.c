/* nth_spin.c -- Spin-lock implementation.
 * -------------------------------------------------------------------
 * The spin-lock module provides the classical functions to manage
 * spin-locks. Initialize, lock and unlock are the minimum set of
 * functions needed, 'try_lock' is implemented in order to provide
 * a non-blocking function that examines the state of the spin-lock
 * before the code changes it. 'try_lock' returns the previous value
 * that help us to determine who is the 'owner' of the spink-lock at
 * the moment:
 * 
 *   · NTH_TAS_FREE: means that we are the 'owner' of spin-lock.
 *   · NTH_TAS_BUSY: means that other one has the spin-lock locked.
 *
 * All the functions are implemented through 'test and set'
 * operations provided by 'nth_support' module.
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
#include "nth_spin.h"
#include "config.h"
#include "nth_support.h"		/* needed for test & set functions */
#include "nth_desc.h"			/* needed for debug purposes */
/* -----------------------------------------------------------------*/
#include <stdio.h>
#include <sys/types.h>
/* -----------------------------------------------------------------*/

/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_spin_init: This function initializes the spin-lock. 
 * -----------------------------------------------------------------*/
void
nth_spin_init (nth_spin_t *spin_var)
{
NTH_DEBUG_START(NTH_DEBUG_SPIN_INIT,NTH_KTH,NTH_MYSELF,
"start")

	*spin_var = NTH_TAS_FREE;

NTH_DEBUG_END(NTH_DEBUG_SPIN_INIT,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_spin_lock: It makes a lock at the spin-lock passed by
 * reference. The spin-lock is implemented through a busy wait test
 * and set operation.
 * -----------------------------------------------------------------*/
void
nth_spin_lock (volatile nth_spin_t *spin_var)
{
NTH_DEBUG_START(NTH_DEBUG_SPIN_LOCK,NTH_KTH,NTH_MYSELF,
"start")
#ifndef OLD_LOCKS
spin:
	while (*spin_var == NTH_TAS_BUSY);

	if (__sync_lock_test_and_set(spin_var,NTH_TAS_BUSY)) goto spin;
	__sync_synchronize();
#else
 	while((*spin_var)==NTH_TAS_BUSY);
 
 	while(nth_tas((nth_word_t)spin_var, NTH_TAS_BUSY)==NTH_TAS_BUSY){
 		while((*spin_var)==NTH_TAS_BUSY);
 	}
#endif

NTH_DEBUG_END(NTH_DEBUG_SPIN_LOCK,NTH_KTH,NTH_MYSELF,
"end")
}
/* -----------------------------------------------------------------*/
void
nthf_spin_lock_ (nth_spin_t *spin)
        __attribute__ ((weak, alias("nth_spin_lock")));
/* -------------------------------------------------------------------
 * nth_spin_try_lock: Try to lock the spin-lock passed by reference.
 * If success returns NTH_TAS_FREE and set the spin-lock to busy,
 * otherwise returns NTH_TAS_BUSY.
 * -----------------------------------------------------------------*/
nth_word_t
nth_spin_try_lock (nth_spin_t *spin_var)
{
NTH_DEBUG_START(NTH_DEBUG_SPIN_TRY_LOCK,NTH_KTH,NTH_MYSELF,
"start")

   nth_assert(0,"Not implemented");
   if (*spin_var == NTH_TAS_BUSY) return NTH_TAS_BUSY;
   return (nth_tas((nth_word_t)spin_var, NTH_TAS_BUSY));

NTH_DEBUG_END(NTH_DEBUG_SPIN_TRY_LOCK,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_spin_unlock: Set the spin-lock to NTH_TAS_FREE.
 * -----------------------------------------------------------------*/
void
nth_spin_unlock (spin_var)
	nth_spin_t *spin_var;
{
NTH_DEBUG_START(NTH_DEBUG_SPIN_UNLOCK,NTH_KTH,NTH_MYSELF,
"start")
#ifndef OLD_LOCKS
	__sync_lock_release(spin_var);
        __sync_synchronize();
#else
	nth_tas((nth_word_t)spin_var, NTH_TAS_FREE);
#endif

NTH_DEBUG_END(NTH_DEBUG_SPIN_UNLOCK,NTH_KTH,NTH_MYSELF,
"end")
}
/* -----------------------------------------------------------------*/
void
nthf_spin_unlock_ (nth_spin_t *spin)
        __attribute__ ((weak, alias("nth_spin_unlock")));

