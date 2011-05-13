/* nthmd_config.h -- ia-64 header support.
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
#ifndef NTHMD_CONFIG_H
#define NTHMD_CONFIG_H
#ifdef __cplusplus
extern "C" {
#endif
/* ******************************************************************
 * STRUCTURES & DATA TYPES
 * *****************************************************************/
typedef unsigned long long nth_word_t;
typedef long long nth_sword_t;
typedef unsigned long long nth_uword_t;

typedef unsigned int nth_half_t;
typedef int nth_shalf_t;
typedef unsigned int nth_uhalf_t;

typedef int nth_int32_t;
typedef int nth_sint32_t;
typedef unsigned int nth_uint32_t;

typedef short nth_int16_t;
typedef short nth_sint16_t;
typedef unsigned short nth_uint16_t;

typedef char nth_byte_t;
typedef char nth_sbyte_t;
typedef unsigned char nth_ubyte_t;

typedef char nth_char_t;
typedef char nth_schar_t;
typedef unsigned char nth_uchar_t;
/* ******************************************************************
 * DEFAULT VALUES 
 * *****************************************************************/
#define NTHMD_WORD_SIZE				0x08
#define NTHMD_HALF_SIZE				0x04

#define NTHMD_L1_DCACHE_LINE_SIZE		0x40
#define NTHMD_L1_ICACHE_LINE_SIZE		0x40
#define NTHMD_L2_DCACHE_LINE_SIZE		128
#define NTHMD_L2_ICACHE_LINE_SIZE		0X00
#define NTHMD_L3_DCACHE_LINE_SIZE		0X00
#define NTHMD_L3_ICACHE_LINE_SIZE		0X00

#define NTHMD_MAX_WORD_VALUE			0xFFFFFFFFFFFFFFFFL

#define NTHMD_DEFAULT_MAIN_LAYOUT_BASE		0x607FFFFFFF000000L

#define NTHMD_DEFAULT_MAIN_STACK_LAYOUT_SIZE	0x4000
#define NTHMD_DEFAULT_MAIN_STACK_SIZE		0x7F00
#define NTHMD_DEFAULT_MAIN_GUARD_SIZE		0x0080
#define NTHMD_DEFAULT_MAIN_DESC_SIZE		0x0080

//#define NTHMD_DEFAULT_AUX_STACK_LAYOUT_BASE		0x90000000L 
#define NTHMD_DEFAULT_AUX_STACK_LAYOUT_SIZE		0x4000
#define NTHMD_DEFAULT_AUX_GUARD_SIZE		0x0080
#define NTHMD_DEFAULT_AUX_DESC_SIZE		0x0080
#define NTHMD_DEFAULT_AUX_STACK_SIZE			0x7F00

#define NTHMD_DEFAULT_DESCRIPTOR_SIZE			0x80
/* ******************************************************************
 * QUICK THREADS DEFINES
 * *****************************************************************/
/* -------------------------------------------------------------------
 * STACK FRAME FIGURE
 * -------------------------------------------------------------------
 *
 *  +------------------------+
 *  | (..) scratch           |
 *  | (..) scratch           |
 *  | (00) f31               |<-[sp]
 *  | (02) f30               |
 *  | (..)                   |
 *  | (30) f16               |
 *  | (32) f5                |
 *  | (..)                   |
 *  | (38) f2                |
 *  | (40) ar.fpsr           |
 *  | (41) b5                |
 *  | (..)                   |
 *  | (45) b1                |
 *  | (46) ar.lc             |
 *  | (47) pr                |
 *  | (48) ar.unat(callee)   |
 *  | (49) r7 == 'vuserf'    |
 *  | (50) r6 == 'pt'        |
 *  | (51) r5 == 'cleanup'   |
 *  | (52) r4 == 'startup'   |
 *  | (53) ar.unat(caller)   |
 *  | (54) tp (r13)          |
 *  | (55) ar.bspstore       |
 *  | (56) ar.rnat           |
 *  | (57) ar.pfs            |
 *  | (58) ar.rsc            |
 *  | (59) rp == 'start'     |
 *  +------------------------+
 *  | (60) arg[0]            |
 *  | (..)                   |
 *  | (nn) arg[n-1]          |
 *  +------------------------+
 *
 *  When a varargs thread is started, it 'returns' to the 'start'
 *  code.  The 'start' code calls the appropriate functions.
 * -----------------------------------------------------------------*/
/* -------------------------------------------------------------------
 * NTH_QT_STKALIGN: Stack must be 16-byte aligned.
 * -----------------------------------------------------------------*/
#define NTH_QT_STKALIGN	(16)
/* -------------------------------------------------------------------
 * NTH_QT_STKBASE: . 
 * -----------------------------------------------------------------*/
#define NTH_QT_STKBASE	(60*8)
/* -------------------------------------------------------------------
 * NTH_QT_GROW_DOWN: Stack grows down.  The top of the stack is the
 * first thing to pop off (preincrement, postdecrement).
 * -----------------------------------------------------------------*/
#define NTH_QT_GROW_DOWN
/* -------------------------------------------------------------------
 * NTH_QT_..._INDEX's: Index of diferents items in the stack frame.
 * -----------------------------------------------------------------*/
#define NTH_QT_ARGU_INDEX			(61)
#define NTH_QT_START_INDEX  			(59)
#define NTH_QT_RSC_INDEX			(58)
#define NTH_QT_PFS_INDEX 			(57)
#define NTH_QT_RNAT_INDEX			(56)
#define NTH_QT_BSPSTORE_INDEX			(55)
#define NTH_QT_TP_INDEX				(54)
#define NTH_QT_UNATCALLER_INDEX			(53)
#define NTH_QT_R4_INDEX				(52)
#define NTH_QT_R5_INDEX				(51)
#define NTH_QT_R6_INDEX				(50)
#define NTH_QT_R7_INDEX				(49)
#define NTH_QT_UNATCALLEE_INDEX			(48)
#define NTH_QT_FPSR_INDEX			(40)

#define NTH_QT_STARTUP_INDEX		NTH_QT_R4_INDEX
#define NTH_QT_CLEANUP_INDEX		NTH_QT_R5_INDEX
#define NTH_QT_ARGT_INDEX		NTH_QT_R6_INDEX
#define NTH_QT_USERF_INDEX		NTH_QT_R7_INDEX

/* -------------------------------------------------------------------
 * NTH_QT_ARGS_MD0: When varargs are pushed, allocate space for all
 * the args. space for regs.
 * -----------------------------------------------------------------*/
#define NTH_QT_ARGS_MD0(sto, nbytes) \
  ((nth_qt_t *)(((nth_byte_t *)(sto)) - 8*8 - NTH_QT_STKROUNDUP(nbytes)))
/* -------------------------------------------------------------------
 * NTH_QT_ARGS_MD1:
 * -----------------------------------------------------------------*/
void nth_qt_start(void);

#define NTH_QT_ARGS_MD1(sto) \
  (NTH_QT_SPUT (sto, NTH_QT_START_INDEX, *((long *)nth_qt_start)),\
   NTH_QT_SPUT (sto, NTH_QT_RSC_INDEX, 3),\
   NTH_QT_SPUT (sto, NTH_QT_PFS_INDEX, 0),\
   NTH_QT_SPUT (sto, NTH_QT_FPSR_INDEX, 0x9804c0270033f),\
   NTH_QT_SPUT (sto, NTH_QT_RNAT_INDEX, 0),\
   NTH_QT_SPUT (sto, NTH_QT_TP_INDEX,0 ),\
   NTH_QT_SPUT (sto, NTH_QT_UNATCALLER_INDEX, 0),\
   NTH_QT_SPUT (sto, NTH_QT_R4_INDEX, 234),\
   NTH_QT_SPUT (sto, NTH_QT_UNATCALLEE_INDEX, 0))

/* ******************************************************************
 * GENERAL DEFINES
 * *****************************************************************/
#define NTH_QT_VARGS_DEFAULT
#define NTH_QT_HAS_BSPSTORE
#define NTH_QT_HAS_TP
#define NTH_QT_INIT_TP(sto,tp) NTH_QT_SPUT(sto,NTH_QT_TP_INDEX,tp)
/* -----------------------------------------------------------------*/
#ifdef __cplusplus
} /* extern "C" */
#endif
#endif /* !NTHMD_CONFIG */

