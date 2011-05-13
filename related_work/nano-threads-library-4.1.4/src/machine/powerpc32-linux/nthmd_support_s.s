/* nthmd_support_s.s -- Machine dependent support implementation
 *                      PowerPC32-linux assembly support
 * -------------------------------------------------------------------
 * Copyright (c) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2006, 2007
 *
 * BSC   - All Rights Reserved.
 * CEPBA - All Rights Reserved.
 * DAC   - All Rights Reserved.
 *
 * Nano-threads library, version 4.0, October 2006
 * Nano-threads library, version 1.0, February 1997
 *
 * NANOS ESPRIT Project E21907
 * INTONE IST Project IST-1999-20252
 * POP IST Project IST-2001-33071
 *
 * BSC disclaims all warranties with regard to this software including
 * all implied warranties of merchantability and fitness for a
 * particular purpose.
 * In no event shall BSC be liable for any special, indirect, or
 * consequential damages or any damages whatsoever resulting from loss
 * of use, data or profits, whether in action of contract negligence,
 * or other tortious action, arising out of or in connection with the
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
 *     _qt_cswap
 *     qt_cswap
 *
 * Callee-save (non-volatile): r14-r31, f14-f31
 * Caller-save (volatile):     r0,r3-r12, f0-f13
 * Dedicated   (non-volatile): r1,r2,r13
 * -----------------------------------------------------------------*/


/* Data */

	.section        .rodata
	.align 2
.LC4:	.string	"Aixo es el missatge %d\n"
	.align 2
.LC6:	.string	"nth_qt_start called (nth 0x%llx)!!!\n"
	.align 2
.LC8:	.string	"nth_qt_abort called!!!\n"
	.align 2
.LC10:	.string	"nth_qt_start: cleanup function returns!!!\n"

/*	.section        ".toc","aw"
.LC3:	.tc stderr[TC],stderr
.LC5:	.tc .LC4[TC],.LC4
.m_nqs:	.tc .LC6[TC],.LC6
.m_nqa:	.tc .LC8[TC],.LC8
.m_cfr: .tc .LC10[TC],.LC10
*/

/* End of data */

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
	.section	".text"
        .align 		2
	.globl  	nth_qt_block
	.type		nth_qt_block, @function
nth_qt_block:
	stwu 1,-136(1)
	mflr 0
	stw 0,144(1)
	# condition register must be saved?
	# r2 must be saved?

	stw 13,60(1)
	stw 14,64(1)
	stw 15,68(1)
	stw 16,72(1)
	stw 17,76(1)
	stw 18,80(1)
	stw 19,84(1)
	stw 20,88(1)
	stw 21,92(1)
	stw 22,96(1)
	stw 23,100(1)
	stw 24,104(1)
	stw 25,108(1)
	stw 26,112(1)
	stw 27,116(1)
	stw 28,120(1)
	stw 29,124(1)
	stw 30,128(1)
	stw 31,132(1)

#	ld 29,.LC3@toc(2)
#	li 5, 458
#	ld 4,.LC5@toc(2)
#	ld 3,0(29)
#	bl fprintf
#	nop

	addi  11, 3, 0
	addi  3, 1, 0               # pass old sp as a parameter
	addi  1, 6, 0               # new sp

#	lw    0,0(9)
	mtctr 11
#	stw   2,20(1)
#	ld    2,8(9)
#	ld    11,16(9)
#l: b l
	bctrl
#        lw 2,20(1)
	
	lwz 14,64(1)
	lwz 15,68(1)
	lwz 16,72(1)
	lwz 17,76(1)
	lwz 18,80(1)
	lwz 19,84(1)
	lwz 20,88(1)
	lwz 21,92(1)
	lwz 22,96(1)
	lwz 23,100(1)
	lwz 24,104(1)
	lwz 25,108(1)
	lwz 26,112(1)
	lwz 27,116(1)
	lwz 28,120(1)
	lwz 29,124(1)
	lwz 30,128(1)
	lwz 31,132(1)

	lwz 0,144(1)
	mtlr 0
	addi 1,1,136
	blr
	.size		nth_qt_block,.-nth_qt_block

	.section	".text"
        .align 		2
	.globl		nth_qt_abort
	.type		nth_qt_abort, @function
nth_qt_abort:

#	b nth_qt_abort
	stwu 1,-144(1)
	mflr 0
	std 0,160(1)
#
#        std 29,120(1)
#        std 30,128(1)
#        std 31,136(1)
#
#	ld 29,.LC3@toc(2)
#	ld 4,.m_nqa@toc(2)
#	ld 3,0(29)
#	bl fprintf
#	nop
#
#	ld 29,120(1)
#	ld 30,128(1)
#	ld 31,136(1)
#
#
	ld 0,160(1)
	mtlr 0
	addi 1,1,144
	blr
#	.long		0
#	.byte		0,0,0,1,128,3,0,0
	.size		nth_qt_abort,.-.L.nth_qt_abort

	.section	".text"
        .align 		2
	.globl		nth_qt_start
	.type		nth_qt_start, @function
nth_qt_start:

	
#l: b l
	


####	stdu 1,-144(1)
###	mflr 0
###	std 0,160(1)
##
#	std 29,120(1)
#	std 30,128(1)
#	std 31,136(1)
#
#	ld 29,.LC3@toc(2)
#	mr 5,1
#	ld 4,.m_nqs@toc(2)
#	ld 3,0(29)
#	bl fprintf
#	nop
#
#	ld 29,120(1)
#	ld 30,128(1)
#	ld 31,136(1)
##
###	ld 0,160(1)
####	mtlr 0
#####	addi 1,1,144


        lwz 3, 24(1)
        lwz 4, 28(1)
        lwz 5, 32(1)
        lwz 6, 36(1)
        lwz 7, 40(1)
        lwz 8, 44(1)
        lwz 9, 48(1)
        lwz 10, 52(1)

#	add 1, 1, 17
	addi 1, 1, 48
	addi 11, 14, 0    # Set `userf' procedure value
	mtctr 11
	bctrl
	nop

	addi 4,3,0
	addi 3,15,0
	addi 11,16,0
	mtctr 11
	bctrl
	nop

	
	
	
#	ld    0,0(9)
#	mtctr 0
#	std   2,40(1)
#	ld    2,8(9)
#	ld    11,16(9)
##l: b l
#	bctrl
#        ld 2,40(1)

#	ld 29,.LC3@toc(2)
#	ld 4,.m_cfr@toc(2)
#	ld 3,0(29)
#	bl fprintf
	nop
5: b 5b

	blr
	.size		nth_qt_start,.-nth_qt_start


