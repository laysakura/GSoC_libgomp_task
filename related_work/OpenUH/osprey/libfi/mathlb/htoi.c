/*

  Copyright (C) 2000, 2001 Silicon Graphics, Inc.  All Rights Reserved.

  This program is free software; you can redistribute it and/or modify it
  under the terms of version 2.1 of the GNU Lesser General Public License 
  as published by the Free Software Foundation.

  This program is distributed in the hope that it would be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

  Further, this software is distributed without any warranty that it is
  free of the rightful claim of any third person regarding infringement 
  or the like.  Any license provided herein, whether implied or 
  otherwise, applies only to this software file.  Patent licenses, if
  any, provided herein do not apply to combinations of this program with 
  other software, or any other product whatsoever.  

  You should have received a copy of the GNU Lesser General Public 
  License along with this program; if not, write the Free Software 
  Foundation, Inc., 59 Temple Place - Suite 330, Boston MA 02111-1307, 
  USA.

  Contact information:  Silicon Graphics, Inc., 1600 Amphitheatre Pky,
  Mountain View, CA 94043, or:

  http://www.sgi.com

  For further information regarding this notice, see:

  http://oss.sgi.com/projects/GenInfo/NoticeExplan

*/


#pragma ident "@(#) libfi/mathlb/htoi.c	92.2	09/27/99 14:56:21"


#include <fortran.h>

extern _f_real4 _HTOI( _f_real4 r, _f_int8 i );

/*
 * HTOI: real(kind=4) raised to an integer(kind=8) power
 */
_f_real4
_HTOI( _f_real4 r,
	_f_int8 i )
{
	_f_real8 _RTOI( _f_real8 r, _f_int8 i);
	return ((_f_real4) _RTOI( (_f_real8) r, i));
}

#if	defined(__mips) || defined(_LITTLE_ENDIAN)
_f_real4
__powrl( _f_real4 x,
	_f_int8 y )
{
	_f_real8 _RTOI( _f_real8 r, _f_int8 i);
	return ((_f_real4) _RTOI( (_f_real8) x, y));
}

/* if needed for compatibility with f77 for call by address */

#endif	/* end of mips or little endian */
