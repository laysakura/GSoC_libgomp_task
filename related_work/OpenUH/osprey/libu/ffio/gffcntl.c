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


#pragma ident "@(#) libu/ffio/gffcntl.c	92.2	06/29/99 13:16:47"

#include <ffio.h>

/*
 * F class fcntl requests
 *
 * Parameters:
 *	fd	- file descriptor (dummy)
 *	cmd	- command code
 *	arg	- command specific parameter
 *	stat	- pointer to status return word
 */
_gen_ffcntl(
	struct fdinfo	*fio,
	int		cmd,
	void		*arg,
	struct ffsw	*stat)
	{
	struct fdinfo *llfio;
	struct ffc_info_s *ffcp, locinfo;
	int ret;

	llfio = fio->fioptr;

	ret = 0;
	switch(cmd)
		{
		case FC_GETINFO:
			ffcp = (struct ffc_info_s *)arg;
			XRCALL(llfio,fcntlrtn)
				llfio, FC_GETINFO, &locinfo, stat);
			ffcp->ffc_flags = 
				FFC_REC |	/* records */
				FFC_WEOD |	/* can write EOD */

				FFC_SEEKA |	/* can seek abs */
				FFC_SEEKE |	/* can seek end */
				FFC_RWND |	/* can rewind */

				FFC_FIXD |	/* can do variable len recs */
				FFC_BINARY |	/* can do binary */
				FFC_CODED |	/* can do chars */

				FFC_RDM |	/* can do random I/O */
				FFC_SEQ |	/* can do seq */
				0;
/*
 *			Can do WEOF IFF lower layer can
 */
			if ((locinfo.ffc_flags & FFC_WEOF) != 0)
				ffcp->ffc_flags |= FFC_WEOF;

			ffcp->ffc_gran = 8;	/* granularity is 8 bits */
			ffcp->ffc_reclen = fio->maxrecsize;
			ffcp->ffc_fd = locinfo.ffc_fd; /* fd from lower layer */
			break;
		case FC_STAT:
		case FC_SETRECL:
		case FC_GETTP:
			ret = XRCALL(llfio,fcntlrtn) llfio, cmd, arg, stat);
			break;
		case FC_ASPOLL:
		case FC_RECALL:
			break;
		default:
			if (IS_RESERVED_FC(cmd))
				{
				ret = XRCALL(llfio,fcntlrtn) 
					llfio, cmd, arg, stat); 
				}
			else
				{ 
				ERETURN(stat, FDC_ERR_NOSUP, 0) 
				} 
			break;   
		}
	return(ret);
	}

