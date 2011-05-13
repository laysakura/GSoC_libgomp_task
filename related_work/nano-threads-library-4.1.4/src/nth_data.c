/* nth_data.c -- Global data implementation.
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
#include "nth_data.h"
#include "nth_desc.h"
#include "config.h"
/* *******************************************************************
 * GLOBAL DATA
 * ******************************************************************/
nth_data_t  nth_data;

__thread nth_desc_t *NTH_MYSELF = NULL;
__thread nth_word_t NTH_KTH = 0;

nth_desc_t * NTH_CREATE_NTHREAD_ERROR = (nth_desc_t * ) (-1);
nth_desc_t * NTH_CANNOT_ALLOCATE_TASK = (nth_desc_t * ) (-2);

#if defined(NTH_DEBUG) && defined(NTH_DEBUG_COLOR)
/*nth_word_t dbg_color[NTH_DEBUG_MAX_COLOR]={30,31,32,33,34,35,36};*/
nth_word_t dbg_color[NTH_DEBUG_MAX_COLOR]={37,31,32,33,34,35,36};
nth_byte_t dbg_level = 0;
#endif 
