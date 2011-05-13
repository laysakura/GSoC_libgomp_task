/* nth_stack.c -- Thread's stack management implementation.
 * -------------------------------------------------------------------
 * The stack module take cares of stack's layout memory management.
 * Its main duty implements several function calls to allocate
 * nano-thread's structures. A nano-thread's structure consists in:
 *   · stack: thread's stack.
 *   · descriptor: structure that defines the nano-thread. We can
 *     find here the nano-thread's identifier, nano-thread's  type,
 *     the number of dependences, etc...
 *   · guard zone: a protected memory region beetwen the stack and the
 *     descriptor to avoid that a 'stack overflow' could be ignored
 *     for the user.
 *  This modules uses the global variables defined in the data module
 *  related with the stack's layout (stack's size, total layout's
 *  size, next position in memory, etc...). The module also allows
 *  that the address of a new descriptor (a descriptor itself can be
 *  used as total layout's identifier) could be passed as an
 *  argument for the user.
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
#include "nth_stack.h"
#include "config.h"
#include "nth_support.h"
/* -----------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nht_stack_allocate: Allocate the entire memory space for a 
 * nano-thread layout. A nano-thread layout is composed by:
 *   · stack: thread's stack.
 *   · descriptor: structure that defines the nano-thread.
 *   · guard zone: a protected memory region beetwen the stack and the
 *     descriptor to avoid that a 'stack overflow' could be ignored.
 * -----------------------------------------------------------------*/
nth_desc_t *
nth_stack_allocate (void)
{
	nth_desc_t *rv;
	nth_desc_t *gz;
	nth_word_t error;
	nth_word_t layout_size;
	nth_word_t guard_size;

	layout_size = 
		nth_data.desc_size*nth_data.page_size
		+ nth_data.guard_size*nth_data.page_size
		+ nth_data.stack_size*nth_data.page_size;
	
	guard_size = nth_data.guard_size*nth_data.page_size;

	rv = (nth_desc_t *)nth_malloc(layout_size);

	gz = (nth_desc_t *)
		(((nth_word_t)rv) + nth_data.desc_size*nth_data.page_size);
	gz = (nth_desc_t *)
		(((nth_word_t)gz) & nth_data.page_size_mask);

	/* xteruel:FIXME: to-test */
#if 0
	error = mprotect((void *) gz, guard_size, PROT_NONE);
	if (error != 0){
		perror("mprotect");
		fprintf(stderr,
			"%s %d (nth_stack_allocate): "
			"memory protection failed.\n",
			 __FILE__, __LINE__
		);
		fprintf(stderr,
			"\t trying to protect 0x%x bytes at 0x%p.\n",
			(int) guard_size, (void *) gz
		);
		exit(NTH_STACK_ERROR); 
	}
#endif	
	return rv;
}
/* -------------------------------------------------------------------
 * nht_stack_dress: Similar to 'nth_stack_allocate' allocate memory
 * space to stack layout but in this case don't reserve space for
 * the execution stack. This function assumes that execution stack
 * is already maped and only wrap it.
 * -----------------------------------------------------------------*/
nth_desc_t *
nth_stack_dress (void)
{
	nth_word_t mm_exit;
	nth_word_t mm_addr;
	nth_word_t mm_size;
NTH_DEBUG_START(NTH_DEBUG_STACK_DRESS,NTH_KTH,NTH_MYSELF,
"start")

/* guard zone allocation */
#ifdef NTH_MAIN_STACK_GUARD_ZONE
	mm_size = nth_data.main_guard_size*nth_data.page_size; 
	mm_addr = nth_data.main_layout_base
		- nth_data.main_stack_size*nth_data.page_size
		- nth_data.main_guard_size*nth_data.page_size;

	if (mm_size > 0){
		mm_exit = (nth_word_t) mmap(
			(void *) mm_addr,
			(size_t) mm_size,	
			(int) NULL,
			(int) MAP_PRIVATE | MAP_FIXED | MAP_ANONYMOUS,
			(int) NULL,
			(int) NULL
		);

		if (mm_exit != mm_addr){
			perror("mmap");
			fprintf(stderr,
				"%s %d (nth_stack_dress): "
				"guard zone allocation failed.\n",
				 __FILE__, __LINE__
			);
			fprintf(stderr,
				"\t trying to allocate 0x%x bytes at 0x%p-0x%p.\n",
				(int) mm_size, (void *) mm_addr, (void *)(mm_addr + mm_size)
			);
			exit(NTH_STACK_ERROR);
		}
	}
#endif

/* descritor allocation */
	mm_size = nth_data.main_desc_size*nth_data.page_size;
	mm_addr = nth_data.main_layout_base
		- nth_data.main_stack_size*nth_data.page_size
		- nth_data.main_guard_size*nth_data.page_size
		- nth_data.main_desc_size*nth_data.page_size;

	mm_exit = (nth_word_t) mmap(
		(void *) mm_addr,
		(size_t) mm_size,	
		(int) PROT_READ | PROT_WRITE,
		(int) MAP_PRIVATE | MAP_FIXED | MAP_ANONYMOUS,
		(int) NULL,
		(int) NULL
	);

	if (mm_exit != mm_addr){
		perror("mmap");
		fprintf(stderr,
			"%s %d (nth_stack_dress): "
			"descriptor allocation failed.\n",
			 __FILE__, __LINE__
		);
		fprintf(stderr,
			"\t trying to allocate 0x%x bytes at 0x%p-0x%p.\n",
			(int) mm_size, (void *) mm_addr, (void *) (mm_addr + mm_size)
		);
		exit(NTH_STACK_ERROR);
	}

NTH_DEBUG_END_VAL(NTH_DEBUG_STACK_DRESS,NTH_KTH,NTH_MYSELF,
"end, return =", mm_exit)
return (nth_desc_t *)mm_exit;
}
/* -------------------------------------------------------------------
 * nth_descriptor_allocate: Allocate only a nano-thread descriptor w/o
 * stack linked.
 * -----------------------------------------------------------------*/
nth_desc_t*
nth_descriptor_allocate(void)
{
	nth_word_t desc_size = nth_data.desc_size*nth_data.page_size;
	nth_desc_t *rv = (nth_desc_t *) nth_malloc(desc_size);
	return rv;
}
