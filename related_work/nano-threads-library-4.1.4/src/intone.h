/* intone.h -- Intone header.
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
#ifndef INTONE_H
#define INTONE_H
/* *******************************************************************
 * INCLUDES
 * ******************************************************************/
#include "nth_config.h"

#ifdef __cplusplus
extern "C" {
#endif

/* *******************************************************************
 * DEFINES (INTONE)
 * ******************************************************************/
/* schedule types */

typedef enum {
	INTONE_SCH_DEFAULT=0,
	INTONE_SCH_STATIC=1,
	INTONE_SCH_DYNAMIC=2,
 	INTONE_SCH_GUIDED=4,
	INTONE_SCH_RUNTIME=8,
	INTONE_ORDERED=16 }
intone_sched_t;

#define INTONE_SCHEDULE_TYPE_MASK	0x00000007
/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
void in__tone_begin_for(int *__intone_start, int *__intone_end,
	int *__intone_step, int *__intone_chunk, int *__intone_schedule);
void in__tone_begin_for_(int *__intone_start, int *__intone_end,
	int *__intone_step, int *__intone_chunk, int *__intone_schedule);

int in__tone_next_iters(int *__intone_lstart, int *__intone_lend,
	int *__intone_last);
int in__tone_next_iters_(int *__intone_lstart, int *__intone_lend,
	int *__intone_last);

void in__tone_end_for(int *__intone_barrier_needed);
void in__tone_end_for_(int *__intone_barrier_needed);

void in__tone_barrier(void);
void in__tone_barrier_(void);

int in__tone_thread_id(void);
int in__tone_thread_id_(void);

int in__tone_is_master(void);
int in__tone_is_master_(void);

void in__tone_enter_ordered_(int * __intone_iter);
void in__tone_leave_ordered_(int * __intone_iter);

#ifdef __cplusplus
}
#endif
		
#endif /* INTONE_H */
