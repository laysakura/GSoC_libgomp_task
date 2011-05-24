/* nth_qt.c -- QuickThreads implementation.
 * -------------------------------------------------------------------
 * QuickThreads is not a standalone threads package. Rather, it is
 * used to build nonpreemptive user-space threads packages.
 * QuickThreads provides a portable interface to machine-dependent
 * code that performs thread initialization and context-switching.
 *
 * The module relies on the client threads package to allocate stacks,
 * thread queues, and other auxiliary data structure. It provides a
 * simple mechanism that performs a context switch, then invokes a
 * client function on behalf of the halted thread.
 *
 * The client function can then ``clean-up'' the halted thread,
 * putting it on an appropiate queue, deallocating it, etc...
 *
 * QuickThreads performs all thread manipulation using the thread's
 * stack pointer. Most of the code is implemented using macro
 * definition, the rest is coded through function calls. This module
 * is composed by the next files:
 *
 *   · nth_qt.c: QuickThread functions implementation.
 *   · nth_qt.h: QuickThread headers and macros definition.
 *   · nthmd_support_s.s: assembly support for a given architecture.
 *     This file can be found in the machine dependent directory
 *     (e.g. src/machine/i386-linux).
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
#include "nth_qt.h"
#include "config.h"
#include "nth_main.h"
#include "nth_desc.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_qt_args: push variable arguments in the stack.
 * If the stack grows down, 'vargs' is a pointer to the lowest address
 * in the block of arguments.  If the stack grows up, it is a pointer
 * to the highest address in the block.
 * -----------------------------------------------------------------*/
nth_qt_t*
nth_qt_args (nth_qt_t *sp, nth_word_t nbytes, va_list vargs,
	void *pt, nth_qt_userf_t userf, nth_qt_cleanup_t *cleanup)
{
	int i;
#ifdef NTH_QT_HAS_BSPSTORE
	nth_qt_t *bsp_sp = sp;
#endif
NTH_DEBUG_START(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"start")
	  
	sp = NTH_QT_ARGS_MD0 (sp, nbytes);

/* -------------------------------------------------------------------
 * xteruel:FIXME: [begin:xteruel] push arguments in the stack.
 * We must also test this method in __powerpc_32 due vargs
 * has the same form we want pass to userf. Anyway we must think in
 * the case that stack grow up.
 * -----------------------------------------------------------------*/
#if 1 /* xteruel:FIXME */
#ifdef QT_GROW_UP
	for(i=nbytes/(nth_word_t)sizeof(nth_word_t); i>0; --i){
		NTH_QT_SPUT(
			NTH_QT_ARGS_ADJUST(sp),
			i,
			((nth_word_t *)vargs)[-i]
		);
	}
#else
#if 0
	for(i=nbytes/(nth_word_t)sizeof(nth_word_t); i>0; --i){
		NTH_QT_SPUT(
			NTH_QT_ARGS_ADJUST(sp),
			i-1,
			((nth_word_t *)vargs)[i-1]
		);
	}
#endif
        for (i=0; i<nbytes / (nth_word_t)sizeof(nth_word_t); i++) {
		nth_word_t v = va_arg (vargs, nth_word_t);
//                printf ("Setting arg %d -> %x\n", i, v);
		NTH_QT_SPUT(NTH_QT_ARGS_ADJUST(sp), i, v);
	}
#if 0
	for (i=0; i<nbytes / (nth_word_t)sizeof(nth_word_t); i++) {
		long * addr = (long*) ((long)NTH_QT_ARGS_ADJUST(sp) + i);
		printf ("%lx %x\n", addr, *addr);
	}
#endif
#endif
#endif
	
/* -------------------------------------------------------------------
 * xteruel:FIXME:? [end:xteruel] push arguments in the stack.
 * -----------------------------------------------------------------*/

	NTH_QT_ARGS_MD1 (NTH_QT_ADJ(sp));

	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_ARGT_INDEX, pt);
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_USERF_INDEX, userf);
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_CLEANUP_INDEX, cleanup);

#ifdef NTH_QT_HAS_BSPSTORE
NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"has_bspstore..")
	bsp_sp = (nth_qt_t*) NTH_QT_STKROUNDUP((nth_word_t)(((nth_word_t)bsp_sp) - nth_data.stack_size*nth_data.page_size));
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_BSPSTORE_INDEX, (nth_word_t) bsp_sp);
NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"bspstore =", bsp_sp)
#endif

NTH_DEBUG_END(NTH_DEBUG_QT_ARGS, NTH_KTH, NTH_MYSELF,
	"end")

	return ((nth_qt_t *)NTH_QT_ADJ(sp));
}
/* -------------------------------------------------------------------
 * nth_qt_null: Null function.
 * -----------------------------------------------------------------*/
void
nth_qt_null (void){
}
/* -------------------------------------------------------------------
 * nth_qt_error: Must be called when something wrong happens.
 * -----------------------------------------------------------------*/
void
nth_qt_error (void){
	extern void abort(void);
	abort();
}
/* -------------------------------------------------------------------
 * nth_qt_args_va: new implementation of qt_args
 * -----------------------------------------------------------------*/
nth_qt_t*
nth_qt_args_va_old (nth_qt_t *sp, void **sfl[],
	nth_word_t nar, nth_word_t nav, va_list vargs,
	void *pt, nth_qt_userf_t userf, nth_qt_cleanup_t *cleanup)
{
	void *val_ptr;
	int nbytes, arg_idx, ref_idx, sfl_idx, top;
#ifdef NTH_QT_HAS_BSPSTORE
	nth_qt_t *bsp_sp = sp;
#endif
NTH_DEBUG_START(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"start")
		
NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"saving sp value", sp)
	val_ptr = sp;

NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"computing stack frame size")
	nbytes = (nar + nav) * sizeof(void *);
	top = nar + (nav * 2);
	for (arg_idx = nar; arg_idx < top; arg_idx+=2){
		// xteruel:FIXME: size must be aligned !!! 
		nbytes += NTH_QT_STKROUNDUP(*((size_t *)(((void **)vargs)[arg_idx])));
	}

NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"updating sp value, nbytes =", nbytes)
	sp = NTH_QT_ARGS_MD0 (sp, nbytes);
	sfl_idx = 0;

NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"copying arguments by ref")
	for(arg_idx = 0; arg_idx < nar; arg_idx++){
		NTH_QT_SPUT(
			NTH_QT_ARGS_ADJUST(sp),
			arg_idx,
			((void **)vargs)[arg_idx]
		);
	}

NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"allocating arguments by val and copying val's")
	ref_idx = nar;
	
	for(arg_idx = nar; arg_idx < top; arg_idx+=2){
		// xteruel:FIXME: size must be aligned !!! 
		// xteruel:FIXME: stack grow up or down !!! 
		// xteruel:FIXME: little or big endian !!!
		val_ptr -= NTH_QT_STKROUNDUP(*((size_t *)((void **)vargs)[arg_idx]));
		sfl[sfl_idx] = val_ptr;
		NTH_QT_SPUT(
			NTH_QT_ARGS_ADJUST(sp),
			ref_idx,
			val_ptr
		);
		/* copying val's */
		memcpy(
			val_ptr,
			(void *)((void **)vargs)[arg_idx+1],
			(int) *((size_t *)((void **)vargs)[arg_idx])
		);
		ref_idx++;
		sfl_idx++;
	}

	NTH_QT_ARGS_MD1 (NTH_QT_ADJ(sp));

	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_ARGT_INDEX, pt);
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_USERF_INDEX, userf);
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_CLEANUP_INDEX, cleanup);

#ifdef NTH_QT_HAS_BSPSTORE
NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"has_bspstore..")
	bsp_sp = (nth_qt_t*) NTH_QT_STKROUNDUP((nth_word_t)(((nth_word_t)bsp_sp) - nth_data.stack_size*nth_data.page_size));
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_BSPSTORE_INDEX, (nth_word_t) bsp_sp);
NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"bspstore =", bsp_sp)
#endif

NTH_DEBUG_END(NTH_DEBUG_QT_ARGS, NTH_KTH, NTH_MYSELF,
	"end")
	return ((nth_qt_t *)NTH_QT_ADJ(sp));
}

/* -------------------------------------------------------------------
 * nth_qt_args_va: new implementation of qt_args
 * -----------------------------------------------------------------*/

/* 引数のuserfに注目．これがtaskに割り当てられるべき関数
 * つまり，taskの「環境」(かなり広い意味での)を作っている
 */

nth_qt_t*
nth_qt_args_va (nth_qt_t *sp, nth_ci_t ci, void **sfl[],
	nth_word_t nar, nth_word_t nav, va_list vargs,
	void *pt, nth_qt_userf_t userf, nth_qt_cleanup_t *cleanup)
{
NTH_DEBUG_START(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"start")
	nth_word_t i,sfl_idx=0;
	nth_word_t nbytes = (nar+nav) * sizeof(void *);
	nth_qt_t *val_sp = sp;
	void *arg_ref[nar];
	size_t *arg_vs;
	size_t arg_val_size[nav];
	void *arg_val[nav];
#ifdef NTH_QT_HAS_BSPSTORE
	nth_qt_t *bsp_sp = sp;
#endif
		
NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"reading va_list..")
	for(i=0;i<nar;i++){
		arg_ref[i] = va_arg(vargs, void*);
	}
NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"... arguments by reference ok")
	for(i=0;i<nav;i++){
		arg_vs = va_arg(vargs, size_t*);
		arg_val_size[i] = NTH_QT_STKROUNDUP((size_t)*arg_vs);
NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"size =", arg_val_size[i])
		if (arg_val_size[i]  > arg_vs)
			printf ("Warning: argument %d copy %d space %d\n",
                                    i, arg_val_size[i], arg_vs);
		arg_val[i] = va_arg(vargs, void*);
NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"&arg =", arg_val[i])
		nbytes += arg_val_size[i];
	}
NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"... arguments by value ok, nbytes =", nbytes)

	sfl_idx = 0;
	sp = NTH_QT_ARGS_MD0 (sp, nbytes);
	
NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"copying references..")
	for(i = 0; i < nar; i++){
		NTH_QT_SPUT(NTH_QT_ARGS_ADJUST(sp), i, arg_ref[i]);
		if ( (ci & NTH_CI_REFS) && *sfl) (*sfl)[sfl_idx++] = &((nth_word_t *)(NTH_QT_ARGS_ADJUST(sp)))[i];
	}
NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"copying values..")
	for(i = 0; i < nav; i++){
		int * add, jj;
		val_sp = val_sp - arg_val_size[i];
NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"val_sp =", val_sp)
		if ( (ci & NTH_CI_VALS) && *sfl) (*sfl)[sfl_idx++] = (void *)val_sp;
		NTH_QT_SPUT(NTH_QT_ARGS_ADJUST(sp),	nar + i, val_sp);
                add = (int *) arg_val[i];
		memcpy(val_sp, arg_val[i], arg_val_size[i]);
	}
	
NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"updating stack frame..")
	NTH_QT_ARGS_MD1 (NTH_QT_ADJ(sp));

	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_ARGT_INDEX, pt);
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_USERF_INDEX, userf);
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_CLEANUP_INDEX, cleanup);

#ifdef NTH_QT_HAS_BSPSTORE
NTH_DEBUG_BODY(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"has_bspstore..")
	bsp_sp = (nth_qt_t*) NTH_QT_STKROUNDUP((nth_word_t)(((nth_word_t)bsp_sp) - nth_data.stack_size*nth_data.page_size));
	NTH_QT_SPUT (NTH_QT_ADJ(sp), NTH_QT_BSPSTORE_INDEX, (nth_word_t) bsp_sp);
NTH_DEBUG_BODY_VAL(NTH_DEBUG_QT_ARGS,NTH_KTH,NTH_MYSELF,
"bspstore =", bsp_sp)
#endif

NTH_DEBUG_END_VAL(NTH_DEBUG_QT_ARGS, NTH_KTH, NTH_MYSELF,
	"end",  (nth_qt_t *)NTH_QT_ADJ(sp));
	return ((nth_qt_t *)NTH_QT_ADJ(sp));
}

