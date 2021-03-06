/*************************************************************************
 *
 *  C-to-C Translator
 *
 *  Adapted from Clean ANSI C Parser
 *  Eric A. Brewer, Michael D. Noakes
 * 
 *************************************************************************/
/*
 * Copyright (c) 1994-2002 Massachusetts Institute of Technology
 * Copyright (c) 2000 Matteo Frigo
 * Copyright (c) 2002 Bradley C. Kuszmaul
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef _OPERATORS_H_
#define _OPERATORS_H_
FILE_IDENTITY(operators_h_ident,
	      "$HeadURL: https://bradley.csail.mit.edu/svn/repos/cilk/5.4.3/cilk2c/operators.h $ $LastChangedBy: bradley $ $Rev: 1341 $ $Date: 2004-06-08 08:20:40 -0400 (Tue, 08 Jun 2004) $");

/* unary/binary operator table information */
typedef struct {
     const char *text;		/* text of the operator */
     const char *name;		/* name of the operator for debugging */
     short unary_prec;		/* unary precedence, all unary ops are right assoc */
     short binary_prec;		/* binary precedence */
     Bool left_assoc;		/* TRUE iff binary op is left associative */
     Bool (*unary_eval) (Node *);
     Bool (*binary_eval) (Node *);
} OpEntry;

GLOBAL extern OpEntry Operator[MAX_OPERATORS];	/* operators.c */

/* from operators.c */
GLOBAL void InitOperatorTable(void);	/* operators.c */
GLOBAL int OpPrecedence(NodeType typ, OpType op, Bool *left_assoc);
GLOBAL Node *EvaluateConstantExpr(Node *);
GLOBAL Bool ApplyUnary(Node *unary);	/* operators.c */

#endif				/* _OPERATORS_H_ */
