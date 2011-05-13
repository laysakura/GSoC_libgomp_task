/* nth_config.h -- Configuration header of nthreads.
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
#ifndef NTH_CONFIG_H
#define NTH_CONFIG_H
/* *******************************************************************
 * INCLUDES
 * ******************************************************************/
#include <nthmd_config.h>
/* *******************************************************************
 * DEFINES
 * ******************************************************************/
/* -------------------------------------------------------------------
 * VERSIONING
 * -----------------------------------------------------------------*/
#include "nth_version.h"
/* comment next line to enable versioning */
/*#define NTH_VERSIONING_DISABLED*/
/* -------------------------------------------------------------------
 * GENERAL PURPOSE DEFINES
 * -----------------------------------------------------------------*/
#ifndef TRUE
	#define TRUE 1
#endif
#ifndef FALSE
	#define FALSE 0
#endif
/* -----------------------------------------------------------------*/
#ifndef NTH_MIN
	#define NTH_MIN(X,Y) ((X)<(Y))? (X) : (Y)
#endif
#ifndef NTH_MAX
	#define NTH_MAX(X,Y) ((X)>(Y))? (X) : (Y)
#endif
/* -------------------------------------------------------------------
 * ERROR MODULE DEFINES
 * -----------------------------------------------------------------*/
#define NTH_SUCCESSFUL			+0
#define NTH_MAIN_ERROR			-1
#define NTH_START_ERROR			-2
#define NTH_STACK_ERROR			-3
#define NTH_INTONE_ERROR		-4
#define NTH_NTHREAD_ERROR		-5
/* -------------------------------------------------------------------
 * LIBRARY VERSION DEFINES (CONDITIONAL COMPILATION)
 * -----------------------------------------------------------------*/
//#define NTH_DEBUG
//#define NTH_DEVELOPMENT
//#define NTH_PARAVER
/* -----------------------------------------------------------------*/
#if defined (NTH_DEBUG)
	#define NTH_DEBUG_LEVEL		(nth_byte_t)	dbg_level
	#define NTH_DEBUG_MAX_COLOR	(nth_byte_t)	0x07
	#define NTH_DEBUG_COLOR
	#define NTH_DEBUG_SHOW_START
	#define NTH_DEBUG_SHOW_END
	#define NTH_DEBUG_SHOW_BODY
	extern nth_word_t dbg_color[];
	extern nth_byte_t dbg_level;
#endif
/* -----------------------------------------------------------------*/
#if defined(NTH_DEBUG)
/* nthreads.c ------------------------------------------------------*/
#define NTH_DEBUG_CREATE					0x10
#define NTH_DEBUG_CREATE_DESC				0x10
#define NTH_DEBUG_CREATE_1S					0x10
#define NTH_DEBUG_CREATE_1S_VP				0x10
#define NTH_DEBUG_CREATE_TASK				0x10
#define NTH_DEBUG_BLOCK						0x10
#define NTH_DEBUG_YIELD						0x10
#define NTH_DEBUG_TASK_BLOCK				0x10
#define NTH_DEBUG_TASKGROUP_BLOCK			0x10
#define NTH_DEBUG_MYSELF					0x10
#define NTH_DEBUG_FSELF						0x10
#define NTH_DEBUG_DEPADD					0x10
#define NTH_DEBUG_FDEPADD					0x10
#define NTH_DEBUG_DEPSUB					0x10
#define NTH_DEBUG_FDEPSUB					0x10
#define NTH_DEBUG_GETNCPUS					0x10
#define NTH_DEBUG_GET_CPU_NUM				0x10
#define NTH_DEBUG_SYNCHRONIZE				0xFF /* N calls */

#define NTH_DEBUG_SPIN_LOCK_				0X10
#define NTH_DEBUG_SPIN_UNLOCK_				0X10
/* intone.c --------------------------------------------------------*/
#define NTH_DEBUG_BEGIN_FOR				0X05
#define NTH_DEBUG_NEXT_ITERS				0X05
#define NTH_DEBUG_END_FOR				0X05
#define NTH_DEBUG_BARRIER				0X10
#define NTH_DEBUG_IS_MASTER				0x10
/* omp.c -----------------------------------------------------------*/
#define NTH_DEBUG_OMP_GET_THREAD_NUM		0x10
/* desc.c ----------------------------------------------------------*/
#define NTH_DEBUG_DESC_GET				0x20
#define NTH_DEBUG_DESC_INIT				0x20
#define NTH_DEBUG_DESC_SEEK				0x20
#define NTH_DEBUG_DESC_MYSELF				0xFF /* N calls */
#define NTH_DEBUG_DESC_DEPSET				0x20
#define NTH_DEBUG_DESC_DEPADD				0x20
#define NTH_DEBUG_DESC_DEPSUB				0x20
#define NTH_DEBUG_DESC_TASKDEPADD			0x20
#define NTH_DEBUG_DESC_TASKDEPSUB			0x20
#define NTH_DEBUG_DESC_SUCCADD				0x20
#define NTH_DEBUG_DESC_SUCCFLUSH			0x20
#define NTH_DEBUG_DESC_TASKADD				0x20
#define NTH_DEBUG_DESC_TASKFLUSH			0x20
#define NTH_DEBUG_DESC_SCHEDULER			0x20
#define NTH_DEBUG_DESC_Q_INIT				0x20
#define NTH_DEBUG_DESC_Q_PUT				0x20
#define NTH_DEBUG_DESC_Q_GET				0xFF /*N calls*/
#define NTH_DEBUG_DESC_Q_GET_READY			0xFF /*N calls*/
/* main.c ----------------------------------------------------------*/
#define NTH_DEBUG_GET_ENVIRONMENT			0X10
#define NTH_DEBUG_SET_ENVIRONMENT			0X10
#define NTH_DEBUG_MAIN_INIT					0X10
#define NTH_DEBUG_MAIN_FINI					0x10
#define NTH_DEBUG_SET_DEFAULT_OPTIONS		0x10
#define NTH_DEBUG_SET_ENVIRONMENT_OPTIONS	0x10
#define NTH_DEBUG_SET_CMDLINE_OPTIONS		0x10
#define NTH_DEBUG_SET_GENERAL_OPTIONS		0x10
#define NTH_DEBUG_CHECK_OPTIONS				0x10
#define NTH_DEBUG_CLEANUP					0x10
#define NTH_DEBUG_IDLE						0x10
#define NTH_DEBUG_NULL						0x10
#define NTH_DEBUG_HELPER_SWITCH				0x10
#define NTH_DEBUG_HELPER_EXIT				0x10
/* stack.c ---------------------------------------------------------*/
#define NTH_DEBUG_STACK_DRESS				0x30
/* queue.c ---------------------------------------------------------*/
#define NTH_DEBUG_QUEUE_INIT				0x30
#define NTH_DEBUG_QUEUE_PUT					0x30
#define NTH_DEBUG_QUEUE_GET					0x30
/* spin.c ----------------------------------------------------------*/
#define NTH_DEBUG_SPIN_INIT					0X40
#define NTH_DEBUG_SPIN_LOCK					0X40
#define NTH_DEBUG_SPIN_TRY_LOCK				0X40
#define NTH_DEBUG_SPIN_UNLOCK				0X40
/* qt.c ------------------------------------------------------------*/
#define NTH_DEBUG_QT_ARGS					0x50
/* support_x.x -----------------------------------------------------*/
/* -----------------------------------------------------------------*/
#endif
/* -----------------------------------------------------------------*/
#if defined(NTH_DEBUG) && !defined(NTH_DEBUG_COLOR)
#define NTH_DEBUG_START(level, kth, nth, msg)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"[+debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s.\n",\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg);\
}
#define NTH_DEBUG_START_VAL(level, kth, nth, msg, val)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"[+debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s (0x%x).\n",\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg, val);\
}
#define NTH_DEBUG_END(level, kth, nth, msg)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"[-debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s.\n",\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg);\
}
#define NTH_DEBUG_END_VAL(level, kth, nth, msg, val)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"[-debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s (0x%x).\n",\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg, val);\
}
#define NTH_DEBUG_BODY(level, kth, nth, msg)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"[=debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s.\n",\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg);\
}
#define NTH_DEBUG_BODY_VAL(level, kth, nth, msg, val)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"[=debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s (0x%x).\n",\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg, val);\
}
#endif
/* -----------------------------------------------------------------*/
#if defined(NTH_DEBUG) && defined(NTH_DEBUG_COLOR)
#define NTH_DEBUG_START(level, kth, nth, msg)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"\e[%dm[+debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s.\e[0m\n",\
		dbg_color[kth%NTH_DEBUG_MAX_COLOR],\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg);\
}
#define NTH_DEBUG_START_VAL(level, kth, nth, msg, val)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"\e[%dm[+debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s (0x%x).\e[0m\n",\
		dbg_color[kth%NTH_DEBUG_MAX_COLOR],\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg, val);\
}
#define NTH_DEBUG_END(level, kth, nth, msg)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"\e[%dm[-debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s.\e[0m\n",\
		dbg_color[kth%NTH_DEBUG_MAX_COLOR],\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg);\
}
#define NTH_DEBUG_END_VAL(level, kth, nth, msg, val)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"\e[%dm[-debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s (0x%x).\e[0m\n",\
		dbg_color[kth%NTH_DEBUG_MAX_COLOR],\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg, val);\
}
#define NTH_DEBUG_BODY(level, kth, nth, msg)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"\e[%dm[=debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s.\e[0m\n",\
		dbg_color[kth%NTH_DEBUG_MAX_COLOR],\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg);\
}
#define NTH_DEBUG_BODY_VAL(level, kth, nth, msg, val)\
if (level <= NTH_DEBUG_LEVEL){\
	fprintf(stderr,\
		"\e[%dm[=debug|%02d][k=%02d,n=0x%08x][%s|%s|%4d]: %s (0x%x).\e[0m\n",\
		dbg_color[kth%NTH_DEBUG_MAX_COLOR],\
		level, kth, nth, __FILE__, __FUNCTION__, __LINE__, msg, val);\
}
#endif
/* -----------------------------------------------------------------*/
#if defined(NTH_DEBUG)
#if !defined(NTH_DEBUG_SHOW_START)
	#undef NTH_DEBUG_START
	#undef NTH_DEBUG_START_VAL
#endif
#if !defined(NTH_DEBUG_SHOW_END)
	#undef NTH_DEBUG_END
	#undef NTH_DEBUG_END_VAL
#endif
#if !defined(NTH_DEBUG_SHOW_BODY)
	#undef NTH_DEBUG_BODY
	#undef NTH_DEBUG_BODY_VAL
#endif
#endif
/* -----------------------------------------------------------------*/
#if !defined(NTH_DEBUG_START)
	#define NTH_DEBUG_START(level, kth, nth, msg)
#endif
#if !defined(NTH_DEBUG_START_VAL)
	#define NTH_DEBUG_START_VAL(level, kth, nth, msg, val)
#endif
#if !defined(NTH_DEBUG_END)
	#define NTH_DEBUG_END(level, kth, nth, msg)
#endif
#if !defined(NTH_DEBUG_END_VAL)
	#define NTH_DEBUG_END_VAL(level, kth, nth, msg, val)
#endif
#if !defined(NTH_DEBUG_BODY)
	#define NTH_DEBUG_BODY(level, kth, nth, msg)
#endif
#if !defined(NTH_DEBUG_BODY_VAL)
	#define NTH_DEBUG_BODY_VAL(level, kth, nth, msg, val)
#endif
/* -------------------------------------------------------------------
 * CONDITIONAL COMPILATION
 * -----------------------------------------------------------------*/
#define NTH_AUX_STACK_GUARD_ZONE
#define NTH_MAIN_STACK_GUARD_ZONE
/* -------------------------------------------------------------------
 * DEFAULT VALUES (machine-dependent)
 * -----------------------------------------------------------------*/
/* manchine-dependent values */
#define NTH_MAX_WORD_VALUE NTHMD_MAX_WORD_VALUE
#define NTH_WORD_SIZE NTHMD_WORD_SIZE
#define NTH_HALF_SIZE NTHMD_WORD_SIZE

#define NTH_L1_DCACHE_LINE_SIZE  NTHMD_L1_DCACHE_LINE_SIZE
#define NTH_L1_ICACHE_LINE_SIZE  NTHMD_L1_ICACHE_LINE_SIZE
#define NTH_L2_DCACHE_LINE_SIZE  NTHMD_L2_DCACHE_LINE_SIZE
#define NTH_L2_ICACHE_LINE_SIZE  NTHMD_L2_ICACHE_LINE_SIZE
#define NTH_L3_DCACHE_LINE_SIZE  NTHMD_L3_DCACHE_LINE_SIZE
#define NTH_L3_ICACHE_LINE_SIZE  NTHMD_L3_ICACHE_LINE_SIZE

typedef char l1cacheline[NTH_L1_DCACHE_LINE_SIZE];
typedef char l2cacheline[NTH_L2_DCACHE_LINE_SIZE];
typedef char l3cacheline[NTH_L3_DCACHE_LINE_SIZE];

/* machine-dependent defaults*/
#define NTH_DEFAULT_MAIN_LAYOUT_BASE NTHMD_DEFAULT_MAIN_LAYOUT_BASE
#define NTH_DEFAULT_MAIN_STACK_SIZE NTHMD_DEFAULT_MAIN_STACK_SIZE
#define NTH_DEFAULT_MAIN_GUARD_SIZE	NTHMD_DEFAULT_MAIN_GUARD_SIZE
#define NTH_DEFAULT_MAIN_DESC_SIZE NTHMD_DEFAULT_MAIN_DESC_SIZE
#define NTH_DEFAULT_AUX_STACK_SIZE NTHMD_DEFAULT_AUX_STACK_SIZE
#define NTH_DEFAULT_AUX_GUARD_SIZE NTHMD_DEFAULT_AUX_GUARD_SIZE
#define NTH_DEFAULT_AUX_DESC_SIZE NTHMD_DEFAULT_AUX_DESC_SIZE
/* -------------------------------------------------------------------
 * DEFAULT VALUES (machine-independent)
 * -----------------------------------------------------------------*/
/* machine-independent */
#define NTH_DEFAULT_NCPUS						0
#define NTH_DEFAULT_NKTHS						1
#define NTH_DEFAULT_STATISTICS						0
#define NTH_DEFAULT_RUSAGE						0
#define NTH_DEFAULT_TIMES						0
#define NTH_DEFAULT_PROFILE						0

#define NTH_DEFAULT_HELP						0
#define NTH_DEFAULT_VERSION						0
#define NTH_DEFAULT_SETUP						0
#define NTH_DEFAULT_EXIT						0

#define NTH_DEFAULT_BARRIERS_PER_DESCRIPTOR		128
#define NTH_DEFAULT_LOOPS_PER_DESCRIPTOR		128

/* DEFAULT LEVEL CRITERIA:
 * 0 - none
 * 1 - deep level guided
 * 2 - number of nano-thread guided
 * 3 - number of nano-threads per processor guided
 */
#define NTH_DEFAULT_MAX_LEVEL_CRITERIA			3
#define NTH_DEFAULT_MAX_DEEP_LEVEL				(nth_word_t)	0x05
#define NTH_DEFAULT_MAX_NUM_NTHREADS			(nth_word_t)	0x08

#endif /* !NTH_CONFIG_H */
