/* nthmd_support_c.c -- Machine dependent support implementation
 *                      PowerPC64-linux C support
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
 * -------------------------------------------------------------------
 * QuickThreads -- Threads-building toolkit.
 * Copyright (c) 1993 by David Keppel
 *
 * Permission to use, copy, modify and distribute this software and
 * its documentation for any purpose and without fee is hereby
 * granted, provided that the above copyright notice and this notice
 * appear in all copies.  This software is provided as a
 * proof-of-concept and for demonstration purposes; there is no
 * representation about the suitability of this software for any
 * purpose.
 * -----------------------------------------------------------------*/
/* *******************************************************************
 * INCLUDES
 * ******************************************************************/
//#include <stdio.h> /* only for fprintf */
#include "../../nth_support.h"
/* *******************************************************************
 * INTERFACE FUNCTIONS (Atomic functions)
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_tas: Changes '*addr' for 'value', then returns the old value
 * of '*addr'.
 * -----------------------------------------------------------------*/
#if 0
#include <asm/atomic.h>
#else
#define EIEIO_ON_SMP    "eieio\n"
#define ISYNC_ON_SMP    "\n\tisync"

#endif

nth_word_t
nth_tas (addr, value)
        nth_word_t addr; /* memory address, usually a spin_t pointer */
        nth_word_t value;
{
        volatile nth_word_t * address = (volatile nth_word_t *) addr;
        nth_word_t ret_value;

        __asm__ __volatile__(
          EIEIO_ON_SMP
"1:       ldarx    %0,0,%3     # atomic_test_and_set\n\t\
          stdcx.   %2,0,%3\n\t\
          bne-     1b\n"
          ISYNC_ON_SMP
          : "=&r" (ret_value), "=m" (*address)
          : "r" (value), "r" (address)
          : "cc", "memory");

        return ret_value;
}

/* -------------------------------------------------------------------
 * nth_atm_add: Add 'value' to '*addr' and returns the old value
 * of '*addr'.
 * -----------------------------------------------------------------*/
nth_word_t
nth_atm_add (addr, value)
        nth_word_t addr;
        nth_word_t value;
{
        volatile nth_word_t * address = (volatile nth_word_t *) addr;
        nth_word_t ret_value, tmp;

	__asm__ __volatile__(
	  EIEIO_ON_SMP
"1:	  ldarx    %0,0,%4     # atomic_add_pres\n\t\
	  add      %1,%0,%3\n\t\
	  stdcx.   %1,0,%4\n\t\
	  bne-     1b\n"
	  ISYNC_ON_SMP
	  : "=&r" (ret_value), "=&r" (tmp), "=m" (*address)
	  : "r" (value), "r" (address), "m" (*address)
	);

	return ret_value;
}


/* *******************************************************************
 * INTERFACE FUNCTIONS (Stack Pointer)
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_get_sp: Get the 'stack pointer' register.
 * -----------------------------------------------------------------*/
nth_word_t
nth_get_sp ()
{
        nth_word_t ret_sp;

	__asm__ __volatile__(
	  "addi   %0, 1, 0\n\t"
	  : "=r" (ret_sp));

	return ret_sp;
}
