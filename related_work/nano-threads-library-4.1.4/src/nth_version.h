/* nth_main.h --
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
 * ----------------------------------------------------------------*/
#ifndef NTH_VERSION_H
#define NTH_VERSION_H

/*
 * This pragma defines the interface supported by this Nanos runtime.
 *
 * By default family is assumed to be 'trunk' and version '399'.
 *
 * Family: trunk 
 *   The main version of Nanos without no special ongoing development
 *   Versions
 *       399 - Default mode for Nanos 360 compatibility plus task support.
 *             It features 'nthf_create_1s_vp_' along with 'nth_create'
 *       400 - Mode without 'nthf_create_1s_vp_', only 'nth_create'
 *             is available.
 *
 * Please, document every family and its related versions.
 */

/* Set here the interface supported by this implementation */

#define NANOS_CURRENT_FAMILY "trunk"
#define NANOS_CURRENT_VERSION 4203

/* Keep the pragma below with the two define's above */
#pragma nanos interface family(trunk) version(4203)

/* Do not modify anything else after this point */

#endif
