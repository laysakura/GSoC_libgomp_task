/* nthmd_support_s.s -- Machine dependent support implementation
 *                      i386-linux assembly support
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
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * Note that some machines want labels to have leading underscores,
 * while others (e.g. System V) do not.  Thus, several labels appear
 * duplicated except for the leading underscore, e.g.
 *
 *   · qt_cswap:
 *   · qt_cswap:
 *
 * Callee-save: %esi, %edi, %ebx, %ebp
 * Caller-save: %eax, %ecx
 * Can't tell: %edx (seems to work w/o saving it.)
 * -----------------------------------------------------------------*/
	.text
	.align 2
	.globl _nth_qt_abort
	.globl nth_qt_abort
	.globl _nth_qt_block
	.globl nth_qt_block
	.globl _nth_qt_blocki
	.globl nth_qt_blocki
	.globl _nth_qt_start
	.globl nth_qt_start
	.type _nth_qt_abort,@function
	.type nth_qt_abort,@function
	.type _nth_qt_block,@function
	.type nth_qt_block,@function
	.type _nth_qt_blocki,@function
	.type nth_qt_blocki,@function
	.type _nth_qt_start,@function
	.type nth_qt_start,@function
/* void *blocking (helper, arg0, arg1, new)
 *
 * On procedure entry, the helper is at 4(sp), args at 8(sp) and
 * 12(sp) and the new thread's sp at 16(sp).  It 'appears' that the
 * calling convention for the iX86 requires the caller to save all
 * floating-point registers, this makes our life easy. 
 *
 * Halt the currently-running thread.  Save it's callee-save regs on
 * to the stack, 32 bytes.  Switch to the new stack (next == 16+32(sp))
 * and call the user function (f == 4+32(sp) with arguments: old sp
 * arg1 (8+32(sp)) and arg2 (12+32(sp)).  When the user function is
 * done, restore the new thread's state and return.
 *
 * The helper function (4(sp)) can return a void* that is returned
 * by the call to 'qt_blockk{,i}'.  Since we don't touch %eax in
 * between, we get that 'for free'. 
 */
_nth_qt_block:
nth_qt_block:
_nth_qt_blocki:
nth_qt_blocki:
	pushl %ebp			/* Save callee-save, sp-=4. */
	pushl %esi			/* Save callee-save, sp-=4. */
	pushl %edi			/* Save callee-save, sp-=4. */
	pushl %ebx			/* Save callee-save, sp-=4. */
	movl %esp, %eax		/* Remember old stack pointer. */
	movl 32(%esp), %esp	/* Move to new thread. */
	pushl 28(%eax)		/* Push arg 2. */
	pushl 24(%eax)		/* Push arg 1. */
	pushl %eax			/* Push arg 0. */
	movl 20(%eax), %ebx	/* Get function to call. */
	call *%ebx			/* Call f. */
	addl $12, %esp		/* Pop args. */
	popl %ebx			/* Restore callee-save, sp+=4. */
	popl %edi			/* Restore callee-save, sp+=4. */
	popl %esi			/* Restore callee-save, sp+=4. */
	popl %ebp			/* Restore callee-save, sp+=4. */
	ret					/* Resume the stopped function. */
	hlt
.Lfe0:
	.size	_nth_qt_blocki,.Lfe0-_nth_qt_blocki
	.size	nth_qt_blocki,.Lfe0-nth_qt_blocki
_nth_qt_abort:
nth_qt_abort:
	movl %esp, %eax		/* Remember old stack pointer. */
	movl 16(%esp), %esp	/* Move to new thread. */
	pushl 12(%eax)		/* Push arg 2. */
	pushl 8(%eax)		/* Push arg 1. */
	pushl %eax			/* Push arg 0. */
	movl 4(%eax), %ebx	/* Get function to call. */
	call *%ebx			/* Call f. */
	addl $12, %esp		/* Pop args. */
	popl %ebx			/* Restore callee-save, sp+=4. */
	popl %edi			/* Restore callee-save, sp+=4. */
	popl %esi			/* Restore callee-save, sp+=4. */
	popl %ebp			/* Restore callee-save, sp+=4. */
	ret					/* Resume the stopped function. */
	hlt
.Lfe1:
	.size	_nth_qt_abort,.Lfe1-_nth_qt_abort
	.size	nth_qt_abort,.Lfe1-nth_qt_abort
_nth_qt_start:
nth_qt_start:
	pushl %edi		/* Push 'pt' arg to 'startup'. */
	popl %eax		/* Clean up the stack. */
	call *%ebx		/* Call the user's function. */
	pushl %eax		/* Push return from user's. */
	pushl %edi		/* Push 'pt' arg to `cleanup'. */
	call *%esi		/* Call 'cleanup'. */
	hlt				/* 'cleanup' never returns. */
.Lfe2:
	.size	_nth_qt_start,.Lfe2-_nth_qt_start
	.size	nth_qt_start,.Lfe2-nth_qt_start
