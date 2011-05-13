/* nth_data.h -- Global data header.
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
#ifndef NTH_DATA_H
#define NTH_DATA_H
/* *******************************************************************
 * INCLUDES
 * ******************************************************************/
#include "nth_config.h"
#include "nth_desc.h"
#include "nth_spin.h"
/* -----------------------------------------------------------------*/
#include <pthread.h>
#include <sys/resource.h>
#include <sys/times.h>
/* *******************************************************************
 * STRUCTURES
 * ******************************************************************/

#define NTH_MAX_LEVEL 20

/* -------------------------------------------------------------------
 * nth_data_t:
 * -----------------------------------------------------------------*/
typedef struct nth_data_t{
/* main arguments */
	int argc;
	char **argv;
	char **envp;
	int nth_arg;
/* posix threads structures */
	pthread_t *thread_ids;
	pthread_attr_t thread_attr;
/* performance measures */
	struct rusage r_usage_init;
	struct rusage r_usage_fini;
	struct tms tms_init;
	struct tms tms_fini;
	clock_t times_init;
	clock_t times_fini;
	clock_t times_it;
/* general environment variables - initial values */
	/* general variables */
	nth_uint16_t ncpus;					/* number of real cpus */
	nth_uint16_t nkths;					/* number of kernel-threads */
	nth_uint16_t rusage;				/* show resource usage */
	nth_uint16_t times;					/* show times */
	nth_uint16_t statistics;				/* show statistics */
	nth_uint16_t profile;					/* show profile statistics */
	nth_uint16_t help;					/* show help options */
	nth_uint16_t version;				/* show library version */
	nth_uint16_t setup;					/* show setup options */
	nth_uint16_t exit;					/* exit before check parameters  */
	/* stack layout */
	nth_word_t main_layout_base;
	nth_word_t main_stack_size;
	nth_word_t main_guard_size;
	nth_word_t main_desc_size;
	nth_word_t stack_size;
	nth_word_t guard_size;
	nth_word_t desc_size;
#if 0	
	nth_word_t aux_stack_layout_base;
	nth_word_t aux_stack_size;
	nth_word_t stack_layout_mask;
	nth_word_t aux_stack_layout_current;
#endif
/* general purpose variables */
	nth_word_t page_size;
	nth_word_t page_size_mask;
	nth_word_t num_nthreads;			/* current [total] number of nano-threads */
	nth_word_t num_tasks;
	nth_word_t max_num_nthreads;		/* max number of nano-threads allowed */
	nth_word_t max_deep_level;			/* max deep level allowed */
	nth_word_t runtime_sched;			/* runtime schedule */
	nth_word_t runtime_chunk;			/* runtime chunk */
	nth_word_t tasks_type;			/* runtime tiedness */
/* memory management */
	void *mem_addr;
	nth_spin_t mem_mutex;
/* descriptor's queues */
	nth_desc_eslist_t fdq;
	nth_desc_q_t rq;
	nth_desc_q_t *lrqs;
	nth_desc_dlist_t *plrqs;
/* other's queues */
	nth_dep_t *free_dep_q;

/* running desc */
	nth_desc_t ** kth_myself; 

/* statistics */
	nth_word_t max_tasks;
	nth_word_t total_tasks[NTH_MAX_LEVEL];
	nth_word_t total_predictions;
	nth_word_t ok_predictions;
	nth_word_t good_tasks[NTH_MAX_LEVEL];

	nth_word_t id;
}nth_data_t;
/* *******************************************************************
 * GLOBAL SYMBOLS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_data: All sources that includes nth_data.h have the global
 * symbol nth_data.
 * -----------------------------------------------------------------*/
extern nth_data_t nth_data;
extern __thread nth_desc_t * NTH_MYSELF;
extern __thread nth_word_t NTH_KTH;
#endif /* !NTH_DATA_H */
