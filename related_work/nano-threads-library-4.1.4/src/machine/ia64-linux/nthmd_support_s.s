/* nthmd_support_s.s -- Machine dependent support implementation
 *                      ia-64-linux assembly support
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
	.text
	.align 16
/* These all have the type signature
//
//	void *blocking (helper, arg0, arg1, new)
//
//    As the context switch is donde throught a procedure call, no
//    scratch register need to be saved. So a syncronous context switch
//    must be performed without scratch registers.([1] 10.2 & table 10-1)
//    [1] IA-64 Software Conventions an Runtime Architecture Guide, Intel
//
*/
.globl nth_qt_abort
.proc  nth_qt_abort
nth_qt_abort:
	.prologue
	.body
	flushrs
	br.cond.sptk.many nth_qt_common
.endp  nth_qt_abort

// void *nth_qt_block(nth_qt_helper_t *h, void *a0, void *a1,
//     nth_qt_t *newthread); 

saved_pfs	= r14
saved_rsc	= r15
saved_bsp	= r16
saved_unat	= r17
saved_rp	= r18
saved_rnat	= r19
saved_unat	= r20

ptr1		= r21
ptr2		= r22
ptr1b		= r23
temp1		= r24
temp2		= r25

old_sp		= r26
helper_addr	= r27

.globl nth_qt_block
.globl nth_qt_blocki
.proc nth_qt_block
.proc nth_qt_blocki
nth_qt_block:
nth_qt_blocki:
.prologue
.save ar.pfs, saved_pfs
	alloc saved_pfs = ar.pfs, 4, 3, 3, 0
	arg_helper = in0
	arg_a0 = in1
	arg_a1 = in2
	arg_newthread = in3
.body
	mov   saved_rsc = ar.rsc
	add   sp = -60*8,sp ;;
.prologue
	mov   saved_bsp = ar.bsp
.save ar.unat, saved_unat
	mov   saved_unat = ar.unat ;;
	flushrs
.save rp, saved_rp
	mov   saved_rp = rp
	mov   ar.rsc = 0 ;;
.body
// ***************************
// *** saving fp registers ***
// ***************************
	mov   ptr1 = sp
	add   ptr2 = 16,sp ;;
	stf.spill [ptr1] = f31,32
	stf.spill [ptr2] = f30,32 ;;
	stf.spill [ptr1] = f29,32
	stf.spill [ptr2] = f28,32 ;;
	stf.spill [ptr1] = f27,32
	stf.spill [ptr2] = f26,32 ;;
	stf.spill [ptr1] = f25,32
	stf.spill [ptr2] = f24,32 ;;
	stf.spill [ptr1] = f23,32
	stf.spill [ptr2] = f22,32 ;;
	stf.spill [ptr1] = f21,32
	stf.spill [ptr2] = f20,32 ;;
	stf.spill [ptr1] = f19,32
	stf.spill [ptr2] = f18,32 ;;
	stf.spill [ptr1] = f17,32
	stf.spill [ptr2] = f16,32 ;;
	stf.spill [ptr1] = f5,32
	stf.spill [ptr2] = f4,32 ;;
	stf.spill [ptr1] = f3,32
	stf.spill [ptr2] = f2,24 ;;
// ******************************
// *** saving fpsr and b5..b1 ***
// *** lc, pr                 ***
// ******************************
	mov temp1 = ar.fpsr
	mov temp2 = b5 ;;
	st8 [ptr1] = temp1,16
	st8 [ptr2] = temp2,16 ;;
	mov temp1 = b4
	mov temp2 = b3 ;;
	st8 [ptr1] = temp1,16
	st8 [ptr2] = temp2,16 ;;
	mov temp1 = b2 
	mov temp2 = b1 ;;
	st8 [ptr1] = temp1,16
	st8 [ptr2] = temp2,16 ;;
	mov temp1 = ar.lc 
	mov temp2 = pr ;;
	st8 [ptr1] = temp1,16
	st8 [ptr2] = temp2,16 ;;
// ***************************
// *** saving unat callee' ***
// *** r7, r6, r5, r4      ***
// *** saving unat caller  ***
// ***************************
	add  ptr1b = 16,ptr1
	st8.spill [ptr2] = r7, 16 ;;
	st8.spill [ptr1b] = r6,16
	st8.spill [ptr2] = r5, 16  ;;
	st8.spill [ptr1b] = r4,16
	st8 [ptr2] = saved_unat,16 ;;
// ****************************
// *** saving tp, bsp, rnat ***
// *** pfs, rsc & rp        ***
// ****************************
	st8 [ptr1b] = r13,16
	st8 [ptr2] = saved_bsp,16 ;;
	mov saved_rnat = ar.rnat 
	mov saved_pfs = ar.pfs ;;
	st8 [ptr1b] = saved_rnat,16
	st8 [ptr2] = saved_pfs,16 ;;
	st8 [ptr1b] = saved_rsc
	st8 [ptr2] = saved_rp ;;
// **************************
// *** saving unat callee ***
// *** ... deferred       ***
// **************************
	mov   saved_unat = ar.unat ;;
	st8 [ptr1] = saved_unat ;;
// **************************
// **************************
// **************************
nth_qt_common:
// ********************************
// *** change both stacks:      ***
// ***   - memory stack (sp)    ***
// ***   - register stack (bsp) ***
// ********************************
	mov old_sp = sp ;;
.body
	mov sp = arg_newthread 
	invala ;;

	add r21 = 55*8, sp    // & bsp
	add r22 = 56*8, sp ;; // & rnat
.prologue
	ld8 r16 = [r21],16 ;;
	mov ar.bspstore = r16 ;;
// **************************************
	ld8 r19= [r22],16 ;;
	mov ar.rnat = r19 ;;
	ld8 in3 = [r21],16    // in3 = pfs 
	ld8 r15 = [r22],16 ;;
// **************************************
// *** switch on RSE (previous value) ***
// **************************************
	mov ar.rsc = r15 ;;
// **************************************
.body
	mov out0 = old_sp ;;
	mov out1 = arg_a0 
	mov out2 = arg_a1 ;;

	mov arg_a0 = gp
	ld8 helper_addr = [arg_helper],8 ;;
	ld8 gp = [arg_helper]
	mov b6 = helper_addr ;;

	add sp = -16,sp ;;
	br.call.sptk.many b0 = b6 ;;
	mov gp = arg_a0
	add sp = 16,sp ;;

// ***************************
// *** restore new context ***
// ***************************

	add r21 = 40*8, sp ;; 
	ld8 r24 = [r21] ;;
	mov ar.fpsr = r24 ;;

	mov ptr1 = sp
	add ptr2 = 16,sp ;;
	ldf.fill f31 = [ptr1],32
	ldf.fill f30 = [ptr2],32 ;;
	ldf.fill f29 = [ptr1],32
	ldf.fill f28 = [ptr2],32 ;;
	ldf.fill f27 = [ptr1],32
	ldf.fill f26 = [ptr2],32 ;;
	ldf.fill f25 = [ptr1],32
	ldf.fill f24 = [ptr2],32 ;;
	ldf.fill f23 = [ptr1],32
	ldf.fill f22 = [ptr2],32 ;;
	ldf.fill f21 = [ptr1],32
	ldf.fill f20 = [ptr2],32 ;;
	ldf.fill f19 = [ptr1],32
	ldf.fill f18 = [ptr2],32 ;;
	ldf.fill f17 = [ptr1],32
	ldf.fill f16 = [ptr2],32 ;;
	ldf.fill f5 = [ptr1],32
	ldf.fill f4 = [ptr2],32 ;;
	ldf.fill f3 = [ptr1],32
	ldf.fill f2 = [ptr2],24 ;;

	ld8 temp1 = [ptr1],16 
	ld8 temp2 = [ptr2],16 ;;
//mov ar.fpsr = temp1
	mov b5 = temp2 ;;
	ld8 temp1 = [ptr1],16
	ld8 temp2 = [ptr2],16 ;;
	mov b4 = temp1
	mov b3 = temp2 ;;
	ld8 temp1 = [ptr1],16
	ld8 temp2 = [ptr2],16 ;;
	mov b2 = temp1
	mov b1 = temp2 ;;
	ld8 temp1 = [ptr1],16
	ld8 temp2 = [ptr2],16 ;;
	mov ar.lc = temp1
	mov pr = temp2,-1 ;;

	ld8 temp1 = [ptr1],16 ;;
	mov ar.unat = temp1 ;;
	ld8.fill r7 = [ptr2],16
	ld8.fill r6 = [ptr1],16 ;;
	ld8.fill r5 = [ptr2],16
	ld8.fill r4 = [ptr1],56 ;;
	ld8 temp1 = [ptr2] ;;
	ld8 r18 = [ptr1] ;;
	mov b0 = r18 ;;

	mov ar.pfs = in3 
	add sp = 60*8,sp
	mov ar.unat = temp1 ;; 
nth_qt_end:
	br.ret.sptk.many b0
.endp   nth_qt_block

.globl nth_qt_start
.proc	nth_qt_start
nth_qt_start:
	.prologue
 	.save ar.pfs, loc0
	alloc loc0 = ar.pfs,0,9,8,0

	mov r2=sp	
	add r3=8,sp ;;
	
	.body
	ld8 loc1 = [r2],16
	ld8 loc2 = [r3],16
	;;
	ld8 loc3 = [r2],16
	ld8 loc4 = [r3],16
	;;
	ld8 loc5 = [r2],16
	ld8 loc6 = [r3],16
	;;
	ld8 loc7 = [r2]
	ld8 loc8 = [r3]
	mov sp = r2		// adjust sp with the 16-byte scratch space
	;;			
	ld8  r10 = [r7],8
	;;
	mov  b6 = r10
	ld8  gp = [r7]
	mov  out0 = loc1
	mov  out1 = loc2
	mov  out2 = loc3
	mov  out3 = loc4
	mov  out4 = loc5
	mov  out5 = loc6
	mov  out6 = loc7
	mov  out7 = loc8

	br.call.sptk.many b0=b6

	ld8  r10 = [r5],8
	;;
	mov  b6 = r10
	ld8  gp = [r5]
	mov  out0 = r6		// pt
	mov  out1 = r8		// return from user's

	br.call.sptk.many b0=b6
	br.call.sptk.many b0=nth_qt_error  // 'cleanup' should never return 
.endp	nth_qt_start	

.globl nth_tas
.proc nth_tas
nth_tas:
	.prologue
	.body
	xchg8 r8 = [r32],r33
	br.ret.sptk.many b0
.endp nth_tas

.globl nth_atm_add
.proc nth_atm_add
nth_atm_add:
        .prologue
        .body
        ld8 r3 = [r32]
        ;;
.loop_add:
	mov r8 = r3
	;;
        add r2 = r8,r33
        mov ar.ccv = r8                         // expected pre-add value
        ;;
        cmpxchg8.acq r3 = [r32],r2,ar.ccv       // "store conditional"
        ;;
        cmp.eq p6,p7 = r3,r8
        (p7) br.cond.spnt.few .loop_add
        br.ret.sptk.many b0
.endp nth_atm_add


