/* nth_queue.c -- Generic queues implementation.
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
/* *******************************************************************
 * INCLUDES
 * ******************************************************************/
#include "nth_queue.h"
#include "config.h"
#include "nth_main.h"
#include "nth_desc.h" /* necesary for debug purposes */
#include "nth_stack.h"
/* -----------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_queue_init: initializes the 'q' queue.
 * -----------------------------------------------------------------*/
void
nth_queue_init (nth_queue_t **q)
{
NTH_DEBUG_START_VAL(NTH_DEBUG_QUEUE_INIT,NTH_KTH,NTH_MYSELF,
"start, &queue =",q)

	*q = NULL;

NTH_DEBUG_END_VAL(NTH_DEBUG_QUEUE_INIT,NTH_KTH,NTH_MYSELF,
"end, queue =",*q)
}
/* -------------------------------------------------------------------
 * nth_queue_put: this function equeue a generic pointer ('void *')
 * 'addr' in 'q' queue.
 * -----------------------------------------------------------------*/
void
nth_queue_put(nth_queue_t **q, void *addr)
{
	nth_queue_t *aux;
	nth_queue_t *it;
NTH_DEBUG_START_VAL(NTH_DEBUG_QUEUE_PUT,NTH_KTH,NTH_MYSELF,
"start, &queue =",q)

	aux = (nth_queue_t *)nth_malloc(sizeof(nth_queue_t));
	aux->addr = addr;
	aux->next = NULL;

	if (*q){
		it = *q;
		while(it->next) it = it->next;
		it->next = aux;
	}
	else *q = aux;

NTH_DEBUG_END(NTH_DEBUG_QUEUE_PUT,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_queue_get: this function return TRUE if there are elements
 * in the 'q' queue. in this case returns (in 'addr' argument) a
 * generic pointer ('void *') to the first object in the queue. if
 * the queue is empty the function returns FALSE.
 * -----------------------------------------------------------------*/
nth_word_t
nth_queue_get(nth_queue_t **q, void **addr)
{
	nth_queue_t *aux;
	nth_word_t rv;
NTH_DEBUG_START_VAL(NTH_DEBUG_QUEUE_GET,NTH_KTH,NTH_MYSELF,
"start, &queue =",q)

	if (*q){
		aux = *q;
		*addr = (*q)->addr;
		*q = (*q)->next;
		free(aux);
		rv = TRUE;
	}
	else{
		*addr = NULL;
		rv = FALSE;
	}

NTH_DEBUG_BODY_VAL(NTH_DEBUG_QUEUE_GET,NTH_KTH,NTH_MYSELF,
"end(1/2), addr=",*addr)
NTH_DEBUG_END_VAL(NTH_DEBUG_QUEUE_GET,NTH_KTH,NTH_MYSELF,
"end(2/2), ret =",rv)
	return rv;
}

