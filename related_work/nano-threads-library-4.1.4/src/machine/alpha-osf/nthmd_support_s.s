/* nthmd_support_s.s -- Machine dependent support implementation
 *                      alpha-linux assembly support
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
 *     _qt_cswap
 *     qt_cswap
 *
 * Callee-save (non-volatile): r14-r31, f14-f31
 * Caller-save (volatile):     r0,r3-r12, f0-f13
 * Dedicated   (non-volatile): r1,r2,r13
 * -----------------------------------------------------------------*/


/* Data */

	.section        .rodata.str1.8,"aMS",@progbits,1
	.align 3
.LC4:	.string	"Aixo es el missatge %d\n"
	.align 3
.LC6:	.string	"nth_qt_start called (nth 0x%llx)!!!\n"
	.align 3
.LC8:	.string	"nth_qt_abort called!!!\n"
	.align 3
.LC10:	.string	"nth_qt_start: cleanup function returns!!!\n"

	.section        ".toc","aw"
.LC3:	.tc stderr[TC],stderr
.LC5:	.tc .LC4[TC],.LC4
.m_nqs:	.tc .LC6[TC],.LC6
.m_nqa:	.tc .LC8[TC],.LC8
.m_cfr: .tc .LC10[TC],.LC10


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
	.section	".opd","aw"
	.align		3
nth_qt_block:
	.quad		.L.nth_qt_block, .TOC.@tocbase,0
	.previous
	.type		nth_qt_block, @function
.L.nth_qt_block:
	stdu 1,-272(1)
	mflr 0
	std 0,288(1)
	# condition register must be saved?
	# r2 must be saved?

	std 13,120(1)
	std 14,128(1)
	std 15,136(1)
	std 16,144(1)
	std 17,152(1)
	std 18,160(1)
	std 19,168(1)
	std 20,176(1)
	std 21,184(1)
	std 22,192(1)
	std 23,200(1)
	std 24,208(1)
	std 25,216(1)
	std 26,224(1)
	std 27,232(1)
	std 28,240(1)
	std 29,248(1)
	std 30,256(1)
	std 31,264(1)

#	ld 29,.LC3@toc(2)
#	li 5, 458
#	ld 4,.LC5@toc(2)
#	ld 3,0(29)
#	bl fprintf
#	nop

	addi  9, 3, 0
	addi  3, 1, 0               # pass old sp as a parameter
	addi  1, 6, 0               # new sp

	ld    0,0(9)
	mtctr 0
	std   2,40(1)
	ld    2,8(9)
	ld    11,16(9)
#l: b l
	bctrl
        ld 2,40(1)
	
	ld 14,128(1)
	ld 15,136(1)
	ld 16,144(1)
	ld 17,152(1)
	ld 18,160(1)
	ld 19,168(1)
	ld 20,176(1)
	ld 21,184(1)
	ld 22,192(1)
	ld 23,200(1)
	ld 24,208(1)
	ld 25,216(1)
	ld 26,224(1)
	ld 27,232(1)
	ld 28,240(1)
	ld 29,248(1)
	ld 30,256(1)
	ld 31,264(1)

	ld 0,288(1)
	mtlr 0
	addi 1,1,272
	blr
	.long		0
	.byte		0,0,0,1,128,19,0,0
	.size		nth_qt_block,.-.L.nth_qt_block

	.section	".text"
        .align 		2
	.globl		nth_qt_abort
	.section	".opd","aw"
	.align		3
nth_qt_abort:
	.quad		.L.nth_qt_abort, .TOC.@tocbase,0
	.previous
	.type		nth_qt_abort, @function
.L.nth_qt_abort:
	stdu 1,-144(1)
	mflr 0
	std 0,160(1)

        std 29,120(1)
        std 30,128(1)
        std 31,136(1)

	ld 29,.LC3@toc(2)
	ld 4,.m_nqa@toc(2)
	ld 3,0(29)
	bl fprintf
	nop

	ld 29,120(1)
	ld 30,128(1)
	ld 31,136(1)


	ld 0,160(1)
	mtlr 0
	addi 1,1,144
	blr
	.long		0
	.byte		0,0,0,1,128,3,0,0
	.size		nth_qt_abort,.-.L.nth_qt_abort

	.section	".text"
        .align 		2
	.globl		nth_qt_start
	.section	".opd","aw"
	.align		3
nth_qt_start:
	.quad		.L.nth_qt_start, .TOC.@tocbase,0
	.previous
	.type		nth_qt_start, @function
.L.nth_qt_start:

	
#l: b l
	


	stdu 1,-144(1)
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


        ld 3, 48(1)
        ld 4, 56(1)
        ld 5, 64(1)
        ld 6, 72(1)
        ld 7, 80(1)
        ld 8, 88(1)
        ld 9, 96(1)
        ld 10, 104(1)

	addi 11, 14, 0    # Set `userf' procedure value
	ld   0,0(11)
	mtctr 0
	ld   2,8(11)
	ld   11,16(11)
	bctrl
	nop

	addi 4,3,0
	addi 3,15,0
	addi 11,16,0
	ld   0,0(11)
	mtctr 0
	ld   2,8(11)
	ld   11,16(11)
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

	ld 29,.LC3@toc(2)
	ld 4,.m_cfr@toc(2)
	ld 3,0(29)
	bl fprintf
	nop
5: b 5b

	blr
	.long		0
	.byte		0,0,0,1,128,3,0,0
	.size		nth_qt_start,.-.L.nth_qt_start


