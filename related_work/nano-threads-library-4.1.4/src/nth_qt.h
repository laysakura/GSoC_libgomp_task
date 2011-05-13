/* nth_qt.h -- QuickThreads header.
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
#ifndef NTH_QT_H
#define NTH_QT_H
#ifdef __cplusplus
extern "C"{
#endif
/* *******************************************************************
 * INCLUDES
 * ******************************************************************/
#include "nth_config.h"
#include <stdarg.h>
/* *******************************************************************
 * STRUCTURES
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_qt_t: a QuickThreads thread is represented by it's current
 * stack pointer. To restart a thread, you merely need pass the
 * current sp(nth_qt_t*) to a QuickThreads primitive. 'qt_t*' is a
 * location on the stack.  To improve type checking, represent it by
 * a particular struct.
 * -----------------------------------------------------------------*/
typedef struct nth_qt_t{
	nth_byte_t dummy;
}nth_qt_t;
/* -------------------------------------------------------------------
 * nth_qt_userf_t: the type of the user function takes some number of
 * arguments.
 * -------------------------------------------------------------------
 * nth_qt_cleanup_t: the type of the clean-up function executed after
 * user function. Take the thread parameter like argument.
 * -------------------------------------------------------------------
 * nth_qt_helper_t: the type of a helper-function. This function take
 * the old sp value (the QuickThread leaving execution) and two more
 * parameters like argument (view block, abort, etc... functions).
 * -------------------------------------------------------------------
 * nth_qt_block_t: save the state of the thread and call the helper
 * function using the stack of the new thread.
 * -----------------------------------------------------------------*/
typedef void* (nth_qt_userf_t)(nth_word_t arg0, ...);
typedef void  (nth_qt_cleanup_t)(void *pt);
/* -----------------------------------------------------------------*/
typedef void* (nth_qt_helper_t)(nth_qt_t *old, void *a0, void *a1);
typedef void* (nth_qt_block_t)(nth_qt_helper_t *helper, void *a0,
	void *a1, nth_qt_t *newthread);
/* *******************************************************************
 * TEST MACHINE DEPENDENT DEFINED VALUES
 * ******************************************************************/
#if !defined(NTH_QT_STKALIGN)
	#error "Need to know the machine-dependent stack alignment."
#endif
#if !defined(NTH_QT_STKBASE)
	#error "Need to know the machine-dependent stack base size."
#endif
#if !defined(NTH_QT_GROW_DOWN) || (NTH_QT_GROW_UP)
	#error "Stack must grow down or up!"
#endif
/* *******************************************************************
 * DEFINES
 * ******************************************************************/
/* -------------------------------------------------------------------
 * NTH_QT_STKROUNDUP:
 * -----------------------------------------------------------------*/
#define NTH_QT_STKROUNDUP(bytes)\
	(((bytes)+NTH_QT_STKALIGN)&~(NTH_QT_STKALIGN-1))
/* -------------------------------------------------------------------
 * NTH_QT_SP:
 * -----------------------------------------------------------------*/
#if defined(NTH_QT_GROW_DOWN)
	#define NTH_QT_SP(sto, size)\
	((nth_qt_t*)(&((nth_qt_t*)sto)[size]))
#else
	#define NTH_QT_SP(sto, size)\
	((nth_qt_t*)sto)
#endif
/* -------------------------------------------------------------------
 * NTH_QT_ADJ: All things are put on the stack relative to the final
 * value of the stack pointer.
 * -----------------------------------------------------------------*/
#if defined(NTH_QT_GROW_DOWN)
	#define NTH_QT_ADJ(sp)\
	(((char *)sp) - NTH_QT_STKBASE)
#else
	#define NTH_QT_ADJ(sp)\
	(((char *)sp) + NTH_QT_STKBASE)
#endif
/* -------------------------------------------------------------------
 * NTH_QT_SPUT: Internal helper for putting stuff on stack.
 * -----------------------------------------------------------------*/
#define NTH_QT_SPUT(top, at, val)\
	(((nth_word_t *)(top))[at] = (nth_word_t)(val))
/* -------------------------------------------------------------------
 * NTH_QT_ARGS_ADJUST: Sometimes the stack pointer needs to munged a
 * bit when storing the list of arguments.
 * -----------------------------------------------------------------*/
#if !defined(NTH_QT_ARGS_ADJUST)
	#define NTH_QT_ARGS_ADJUST(sp) (sp)
#endif
/* -------------------------------------------------------------------
 * NTH_QT_ARGS_MD0:
 * -----------------------------------------------------------------*/
#if !defined(NTH_QT_ARGS_MD0)
	#define NTH_QT_ARGS_MD0(sp, vasize) (sp)
#endif
/* -------------------------------------------------------------------
 * NTH_QT_ARGS_MD1:
 * -----------------------------------------------------------------*/
#if !defined(NTH_QT_ARGS_MD1)
	#define NTH_QT_ARGS_MD1(sp) do{;}while(0)
#endif
/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
void nth_qt_null(void);
void nth_qt_error(void);
/* -------------------------------------------------------------------
 * nth_qt_args: Has to be a function call because initialization is
 * an expression and we need to loop to copy nbytes of stuff on to
 * the stack. But that's probably OK, it's not terribly cheap, anyway.
 * -----------------------------------------------------------------*/
nth_qt_t *nth_qt_args(nth_qt_t *sp, nth_word_t nbytes, va_list vargs,
	void *pt, nth_qt_userf_t *userf, nth_qt_cleanup_t *cleanup);

// Creation info request type 
typedef enum { NTH_CI_NONE=0, NTH_CI_REFS=1, NTH_CI_VALS=2, NTH_CI_ALL=3 } nth_ci_t;

nth_qt_t*
nth_qt_args_va (nth_qt_t *sp, nth_ci_t ci, void **sfl[],
    nth_word_t nar, nth_word_t nav, va_list vargs,
    void *pt, nth_qt_userf_t userf, nth_qt_cleanup_t *cleanup);
/* -------------------------------------------------------------------
 * nth_qt_abort, nth_qt_block & nth_qt_blocki: This functions are
 * implemented in the machine dependent part of the library.
 * All the functions are complained with the nth_qt_abort_t structure,
 * specified before.
 * -----------------------------------------------------------------*/
void *nth_qt_abort(nth_qt_helper_t *h, void *a0, void *a1,
	nth_qt_t *newthread);
void *nth_qt_block(nth_qt_helper_t *h, void *a0, void *a1,
	nth_qt_t *newthread);
void *nth_qt_blocki(nth_qt_helper_t *h, void *a0, void *a1,
	nth_qt_t *newthread);
/* -------------------------------------------------------------------
 * nth_qt_start: This function is implemented in the machine
 * dependent part of the library. His duty is to control the
 * execution of a new quick-thread, calling user's function and
 * the clean-up's function.
 * -----------------------------------------------------------------*/
void nth_qt_start(void);
#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* NTH_QT_H */
