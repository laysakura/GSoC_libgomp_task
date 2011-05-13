/* nth_main.c -- 
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
#define _GNU_SOURCE
#include "nth_config.h"
#include "config.h"
#include "nthreads.h"
#include "nth_main.h"
#include "nth_stack.h"
#include "nth_data.h"
#include "nth_desc.h"
#include "nth_qt.h"
#include "nth_sched.h"
#include "nth_support.h"
#include "nth_gv.h"
#include "nth_instrument.h"
/* -----------------------------------------------------------------*/
#include <getopt.h>
#include <limits.h>
#include <math.h>
#include <pthread.h>
#include <sched.h>
#include <signal.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/resource.h>
#include <sys/times.h>
#include <unistd.h>

/* xteruel:FIXME: Sched setaffinity */
#include <sched.h>
#include <sys/types.h>
#include <linux/unistd.h>
#include <errno.h>



/* *******************************************************************
 * GLOBAL DATA
 * ******************************************************************/
extern char **environ;
/* -------------------------------------------------------------------
 * output strings
 * -----------------------------------------------------------------*/
static char str_cmdline_package_name[]=\
PACKAGE_STRING;

static char str_cmdline_package_copyright[]=\
"(c) 2006 - BSC-CNS.\n\
     BSC - Barcelona Supercomputing Center.\n\
     CNS - Centro Nacional de Supercomputacion.\n";

static char str_cmdline_options[]=\
"[app. parameters] [-nth [nano-threads library parameters]]\n";
static char str_cmdline_description[]=\
"Description of Nano-threads library parameters:\n\n\
     -c <nn>         Set number of cpus.\n\
     -t <nn>         Set number of kernel threads.\n\
\n\
     -ss <nn>        Set stack size.\n\
     -mss <nn>       Set main stack size.\n\
     -ls <nn>        Set layout size.\n\
     -mls <nn>       Set main layout size.\n\
\n\
     -rusage         Display resource usage information (only -dev library).\n\
     -times          Display execution time information (only -dev library).\n\
     -statistics     Display extra runtime statistics.\n\
\n\
     -dlevel         Display internal debug information (only -dbg version).\n\
\n\
     --setup, -s     Display current setup.\n\
     --version, -v   Display library version.\n\
     --help, -h      Display this information.\n\
";

static char str_cmdline_bug_report_text[]=\
"For bug reporting, please send an e-mail to";
static char str_cmdline_bug_report_email[]=\
PACKAGE_BUGREPORT;

/* Library static data */

nth_team_t serial_team; // team for starting thread

/* *******************************************************************
 * INTERFACE FUNCTIONS
 * ******************************************************************/
/* -------------------------------------------------------------------
 * nth_get_environment: initialize global variables in nth_data
 * structure: argc, argv and envp. Also find the '-nth' argument
 * which marks the beginning of nano-threads arguments.
 * -----------------------------------------------------------------*/
void
nth_get_environment(void)
{
	nth_word_t *p;
	nth_word_t i;
NTH_DEBUG_START(NTH_DEBUG_GET_ENVIRONMENT,NTH_KTH,NTH_MYSELF,
"start")

/* find general values */
	p=(nth_word_t *)environ;
	i=0;
	p--;
	while(*(--p)!=i){
		i++;
	}
	nth_data.argc = (int) i;
	nth_data.argv = (char **) ++p;
	nth_data.envp = (char **) environ;

NTH_DEBUG_BODY_VAL(NTH_DEBUG_GET_ENVIRONMENT,NTH_KTH, NTH_MYSELF,
"argc =",nth_data.argc)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_GET_ENVIRONMENT,NTH_KTH, NTH_MYSELF,
"argv =",nth_data.argv)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_GET_ENVIRONMENT,NTH_KTH, NTH_MYSELF,
"envp =",nth_data.envp)

	i=0;
	while (i<nth_data.argc){
		if (nth_data.argv[i] && !strcmp (nth_data.argv[i], "-nth"))
			break;
		i++;
	}
	nth_data.nth_arg = i;

NTH_DEBUG_BODY_VAL(NTH_DEBUG_GET_ENVIRONMENT,NTH_KTH,NTH_MYSELF,
"arg nth index =",nth_data.nth_arg)
NTH_DEBUG_END(NTH_DEBUG_GET_ENVIRONMENT,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_set_environment: set environment values (argc, argv and envp)
 * like nano-threads library doesn't exists.
 * -----------------------------------------------------------------*/
void
nth_set_environment(void)
{
	nth_word_t *aux;
NTH_DEBUG_START(NTH_DEBUG_SET_ENVIRONMENT,NTH_KTH,NTH_MYSELF,
"start")
	nth_data.argv[nth_data.nth_arg]=NULL;
	aux = (nth_word_t *)&nth_data.argv[0];
	aux[-1] = nth_data.nth_arg;
NTH_DEBUG_END(NTH_DEBUG_SET_ENVIRONMENT,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_main_init: initialisation function. this is executed before
 * main function and is defined like a constructor function.
 * -----------------------------------------------------------------*/
void
nth_main_init(void)
{
	nth_word_t i;
	nth_desc_t *aux_desc;
	int rv_pthread;
	int rv_getrusage;
NTH_DEBUG_START(NTH_DEBUG_MAIN_INIT,NTH_KTH,NTH_MYSELF,
"start")

NTH_DEBUG_BODY(NTH_DEBUG_MAIN_INIT,NTH_KTH,NTH_MYSELF,
"data setup for nano-threads library...")

	/* get environment */
	nth_get_environment();

	/* start instrumentation if enabled */
	nth_instrument_init(nth_data.argv[0]);	

	/* setting nano-threads options */
	nth_set_default_options();			/* default options */
	nth_set_environment_options();		/* environment options */
	nth_set_cmdline_options();			/* comand line options */
	nth_set_general_options();			/* derivated values */
	nth_check_options();				/* check consistency */

        /* once nkths is know, set the level of concurrency */
        pthread_setconcurrency(nth_data.nkths);

	/* set environment */
	nth_set_environment();

	/* Init GV */
	gv_init();

	nth_sch_init();

	/* Init profile */
	profile_init();

NTH_DEBUG_BODY(NTH_DEBUG_MAIN_INIT, NTH_KTH, NTH_MYSELF,
"dressing main stack layout...")

						
	nth_desc_t *myself = (nth_desc_t *)nth_descriptor_allocate();
	nth_desc_init (myself);
	myself->type = NTH_DTYPE_LOCAL;
	myself->tied = myself->tie = 1;
	myself->state = NTH_DST_RUNNING;
	myself->executed = 1;
	myself->ndep = 1; /* it is running */
	myself->task_ctx = &myself->top_ctx;
	nth_init_task_ctx (myself->task_ctx,0,0,0,0);
	NTH_KTH = 0;
	NTH_MYSELF = myself;
	nth_data.kth_myself[NTH_KTH] = myself;

	nth_init_team(&serial_team,1,myself,0);
	nth_init_player(&myself->myplayer);
	nth_enter_team(&serial_team,&myself->myplayer,0);
	nth_init_team(&myself->myteam,nth_data.nkths,myself,0);

	
NTH_DEBUG_BODY(NTH_DEBUG_MAIN_INIT, NTH_KTH, NTH_MYSELF,
"...main stack dressed")
NTH_DEBUG_BODY_VAL(NTH_DEBUG_MAIN_INIT, NTH_KTH, NTH_MYSELF,
"creating [n] auxiliar kernel threads =", nth_data.nkths-1)
	
	for (i=1; i<nth_data.nkths; i++){
		aux_desc = (nth_desc_t *)nth_desc_get();
		nth_desc_succadd(NTH_MYSELF, aux_desc);
		aux_desc->state = NTH_DST_BLOCK_NDEP;
		aux_desc->type = NTH_DTYPE_LOCAL;
		aux_desc->tied = 1;
		aux_desc->vp = i;
		aux_desc->idle = 1;
		aux_desc->task_ctx = &aux_desc->top_ctx;
		nth_init_task_ctx (aux_desc->task_ctx,0,0,0,0);


		/* initialize thread_attr: init. attr */
		pthread_attr_init(&nth_data.thread_attr);
		/* initialize thread_attr: stack attr */
		rv_pthread = pthread_attr_setstack(
			(pthread_attr_t *) &nth_data.thread_attr,
			(void *) aux_desc->stack_addr,
			(size_t) aux_desc->stack_size
		);
		if (rv_pthread){
			perror("pthread_attr_setstack");
			fprintf(stderr,
				"%s %d (%s): "
				"error settings attributes for threads.\n",
				 __FILE__, __LINE__, __FUNCTION__
			);
			fprintf(stderr,
				"\t pthread_attr_setstack returns value %x.\n",
				rv_pthread
			);
			exit(NTH_MAIN_ERROR); 
		}
		/* creating pthreads with cleanup function */
		rv_pthread = pthread_create(
			(pthread_t *) &nth_data.thread_ids[i],
			(pthread_attr_t *) &nth_data.thread_attr,
			(void *) nth_cleanup,
			(void *) aux_desc
		);
		if (rv_pthread){
			perror("pthread_create");
			fprintf(stderr,
				"%s %d (%s): "
				"error creating threads.\n",
				 __FILE__, __LINE__, __FUNCTION__
			);
			fprintf(stderr,
				"\t pthread_create returns value %x.\n",
				rv_pthread
			);
			exit(NTH_MAIN_ERROR); 
		}
	}

#if defined (NTH_DEVELOPMENT)
NTH_DEBUG_BODY(NTH_DEBUG_MAIN_INIT, NTH_KTH, NTH_MYSELF,
"performance measure before app. execution")

	if (nth_data.rusage){
		rv_getrusage = getrusage(RUSAGE_SELF, &nth_data.r_usage_init);
		if (rv_getrusage){
			perror("getrusage");
			exit(NTH_MAIN_ERROR); 
		}
	}
	if (nth_data.times){
		nth_data.times_init = times(&nth_data.tms_init);
		if (nth_data.times_init == -1){
			perror("times");
			exit(NTH_MAIN_ERROR); 
		}
	}
#endif
	nth_instrument_thread_start();

NTH_DEBUG_END(NTH_DEBUG_MAIN_INIT, NTH_KTH, NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_main_fini:
 * -----------------------------------------------------------------*/
void
nth_main_fini(void)
{
	nth_word_t i;
NTH_DEBUG_START(NTH_DEBUG_MAIN_FINI, NTH_KTH, NTH_MYSELF,
"start")

	/* Waiting for possible tasks */
	nth_task_block();

	nth_instrument_in_runtime(NTH_MYSELF);

#if defined (NTH_DEVELOPMENT)
NTH_DEBUG_BODY(NTH_DEBUG_MAIN_FINI, NTH_KTH, NTH_MYSELF,
"performance measure after app. execution")

	int rv_getrusage;

	if (nth_data.times){
		nth_data.times_fini = times(&nth_data.tms_fini);
		if (nth_data.times_fini == -1){
			perror("times");
			exit(NTH_MAIN_ERROR); 
		}
		nth_data.times_it = nth_data.times_fini
			- nth_data.times_init;
		nth_print_times(nth_data.times_it);
	}
	if (nth_data.rusage){
		rv_getrusage = getrusage(RUSAGE_SELF, &nth_data.r_usage_fini);
		if (rv_getrusage){
			perror("getrusage");
			exit(NTH_MAIN_ERROR); 
		}
		nth_print_rusage();
	}
	if (nth_data.profile){
		nth_print_profile();
	}
#endif

NTH_DEBUG_BODY(NTH_DEBUG_MAIN_FINI, NTH_KTH, NTH_MYSELF,
"terminating threads...")
		
	nth_desc_succflush(NTH_MYSELF);

NTH_DEBUG_BODY_VAL(NTH_DEBUG_MAIN_FINI, NTH_KTH, NTH_MYSELF,
"joining [n] kernel threads...", nth_data.nkths-1)

	for (i=1; i<nth_data.nkths; i++){
		pthread_join(
			(pthread_t) nth_data.thread_ids[i],
			(void **) NULL
		);
	}

	profile_cleanup();

	if (nth_data.statistics){
		nth_print_statistics();
		profile_show_stats();
	}
	
	gv_fini();

	nth_instrument_thread_end();
	nth_instrument_end();

NTH_DEBUG_BODY_VAL(NTH_DEBUG_MAIN_FINI, NTH_KTH, NTH_MYSELF,
"...[n] kernel threads joined", nth_data.nkths-1)
NTH_DEBUG_END(NTH_DEBUG_MAIN_FINI, NTH_KTH, NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_search_option:
 * -----------------------------------------------------------------*/
nth_char_t*
nth_search_option (char *opt, int has_arg)
{
	char *p = NULL;
	char *p2 = NULL;
	int i = nth_data.nth_arg;

	if (opt!=NULL){
		while (i<nth_data.argc){
			if (nth_data.argv[i] && !strcmp (nth_data.argv[i], opt)){
				p2 = nth_data.argv[i];
				nth_data.argv[i++] = NULL;
				break;
			}
			++i;
		}
		if (has_arg){
			if (p2 && i<nth_data.argc){
				p = nth_data.argv[i];
				nth_data.argv[i] = NULL;
				return p;
			}
			else{
				return NULL;
			}
		}
	}
	else {
		while (i<nth_data.argc && nth_data.argv[i]==NULL) ++i;
		if (i<nth_data.argc) {
			p2 = nth_data.argv[i];
			nth_data.argv[i] = NULL;
		}
	}
	return p2;
}
/* -------------------------------------------------------------------
 * nth_set_default_options: set the defaults options defined in
 * nth_config.h.
 * -----------------------------------------------------------------*/
void
nth_set_default_options (void)
{ 
NTH_DEBUG_START(NTH_DEBUG_SET_DEFAULT_OPTIONS,NTH_KTH,NTH_MYSELF,
"start")
	nth_data.ncpus 
		= (nth_uint16_t) NTH_DEFAULT_NCPUS;
	nth_data.nkths 
		= (nth_uint16_t) NTH_DEFAULT_NKTHS;
	nth_data.rusage
		= (nth_uint16_t) NTH_DEFAULT_RUSAGE;
	nth_data.times
		= (nth_uint16_t) NTH_DEFAULT_TIMES;
	nth_data.statistics
		= (nth_uint16_t) NTH_DEFAULT_STATISTICS;
	nth_data.profile
		= (nth_uint16_t) NTH_DEFAULT_PROFILE;
	
	nth_data.help
		= (nth_uint16_t) NTH_DEFAULT_HELP;
	nth_data.version
		= (nth_uint16_t) NTH_DEFAULT_VERSION;
	nth_data.setup
		= (nth_uint16_t) NTH_DEFAULT_SETUP;
	
	nth_data.exit
		= (nth_uint16_t) NTH_DEFAULT_EXIT;

	nth_data.main_layout_base 
		= (nth_word_t) NTH_DEFAULT_MAIN_LAYOUT_BASE;
	nth_data.main_stack_size 
		= (nth_word_t) NTH_DEFAULT_MAIN_STACK_SIZE;
	nth_data.main_guard_size 
		= (nth_word_t) NTH_DEFAULT_MAIN_GUARD_SIZE;
	nth_data.main_desc_size 
		= (nth_word_t) NTH_DEFAULT_MAIN_DESC_SIZE;
	
	nth_data.stack_size 
		= (nth_word_t) NTH_DEFAULT_AUX_STACK_SIZE;
	nth_data.guard_size 
		= (nth_word_t) NTH_DEFAULT_AUX_GUARD_SIZE;
	nth_data.desc_size 
		= (nth_word_t) NTH_DEFAULT_AUX_DESC_SIZE;

	nth_data.max_num_nthreads
		= NTH_DEFAULT_MAX_NUM_NTHREADS;
	nth_data.max_deep_level
		= NTH_DEFAULT_MAX_DEEP_LEVEL;

	/* tiedness */
	nth_data.tasks_type = 0;

NTH_DEBUG_END(NTH_DEBUG_SET_DEFAULT_OPTIONS,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_set_enviroment_options: Read environment variables and
 * overwrite the default values.
 * -----------------------------------------------------------------*/

void
nth_set_environment_options (void)
{
	char * p;
	int i;
NTH_DEBUG_START(NTH_DEBUG_SET_ENVIRONMENT_OPTIONS,NTH_KTH,NTH_MYSELF,
"start")

	p = (char *) getenv("OMP_NUM_THREADS");
	if (p!=NULL) nth_data.nkths = atoi (p);
	
	p = (char *) getenv("OMP_STACK_SIZE");
	if (p!=NULL) nth_data.stack_size = atoi (p);

	p = (char *) getenv("OMP_SCHEDULE");
	if (p!=NULL){
		i=0;
		while(p[i]!=0){
			if ((p[i]> 64) && (p[i] < 91)) p[i]+=32;
			i++;
			if (p[i] == ','){
				nth_data.runtime_chunk = atoi (&p[i+1]);
				p[i] = 0;
				if (strcasecmp(p,"static")==0) nth_data.runtime_sched = 1;
				if (strcasecmp(p,"dynamic")==0) nth_data.runtime_sched = 2;
				if (strcasecmp(p,"guided")==0) nth_data.runtime_sched = 4;
				p[i] = ',';
			}
		}
		if (strcasecmp(p,"static")==0) nth_data.runtime_sched = 1;
		if (strcasecmp(p,"dynamic")==0) nth_data.runtime_sched = 2;
		if (strcasecmp(p,"guided")==0) nth_data.runtime_sched = 4;
	}

	p = (char *) getenv ("NTH_TIE");
	if ( p != NULL ) {
		if (!strcasecmp(p,"false")) nth_data.tasks_type = NTH_DTYPE_TEAM;
		else if (!strcasecmp(p,"true"))
			nth_data.tasks_type = NTH_DTYPE_TEAM_DO_LOCAL;
	}

	p = (char *)getenv("PROFILE");
	if ( p != NULL ) profile_activate(p);

	nth_sch_environment_options();

NTH_DEBUG_END(NTH_DEBUG_SET_ENVIRONMENT_OPTIONS,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_set_cmdline_options: Read command line arguments and overwrite
 * default values (also which defined from environment variables).
 * Once a nano thread command line argument is readed it is deleted
 * from the command line list of arguments.
 * -----------------------------------------------------------------*/
void
nth_set_cmdline_options (void)
{
	char *p;
NTH_DEBUG_START(NTH_DEBUG_SET_CMDLINE_OPTIONS,NTH_KTH,NTH_MYSELF,
"start")

	p = nth_search_option("-c", TRUE);
	if (p!=NULL) nth_data.ncpus = atoi (p);

	p = nth_search_option("-t", TRUE);
	if (p!=NULL) nth_data.nkths = atoi (p);
	
	p = nth_search_option("-ss", TRUE);
	if (p!=NULL) nth_data.stack_size = atoi (p);

	p = nth_search_option("-mss", TRUE);
	if (p!=NULL) nth_data.main_stack_size = atoi (p);

	p = nth_search_option("-gs", TRUE);
	if (p!=NULL) nth_data.guard_size = atoi (p);
	
	p = nth_search_option("-mgs", TRUE);
	if (p!=NULL) nth_data.main_guard_size = atoi (p);
	
	p = nth_search_option("-ds", TRUE);
	if (p!=NULL) nth_data.desc_size = atoi (p);
	
	p = nth_search_option("-mds", TRUE);
	if (p!=NULL) nth_data.main_desc_size = atoi (p);
	
#if defined (NTH_DEBUG)
	p = nth_search_option("-dlevel", TRUE);
	if (p!=NULL) dbg_level = atoi(p);
#else
	p = nth_search_option("-dlevel", TRUE);
	if (p!=NULL)
	{
		fprintf(stderr,
			"%s %d (nth_set_cmdline_options): "
			"Trying to get debug information with a non-debug library.\n",
			__FILE__, __LINE__
		);
	}
#endif
	
	/* Unary comand line options */
	
	p = nth_search_option("--help", FALSE);
	if (p!=NULL) nth_data.help = TRUE;
	
	p = nth_search_option("-h", FALSE);
	if (p!=NULL) nth_data.help = TRUE;
	
	p = nth_search_option("--version", FALSE);
	if (p!=NULL) nth_data.version = TRUE;
	
	p = nth_search_option("-v", FALSE);
	if (p!=NULL) nth_data.version = TRUE;
	
	p = nth_search_option("--setup", FALSE);
	if (p!=NULL) nth_data.setup = TRUE;

	p = nth_search_option("-s", FALSE);
	if (p!=NULL) nth_data.setup = TRUE;

	p = nth_search_option("-statistics", FALSE);
	if (p!=NULL) nth_data.statistics = TRUE;

#if defined (NTH_DEVELOPMENT)
	p = nth_search_option("-rusage", FALSE);
	if (p!=NULL) nth_data.rusage = TRUE;

	p = nth_search_option("-times", FALSE);
	if (p!=NULL) nth_data.times = TRUE;

	p = nth_search_option("-profile", FALSE);
	if (p!=NULL) nth_data.profile = TRUE;
#else
	p = nth_search_option("-rusage", FALSE);
	if (p!=NULL) 
	{
		fprintf(stderr,
			"%s %d (nth_set_cmdline_options): "
			"Trying to get profile information with a non-development library.\n",
			__FILE__, __LINE__
		);
	}
	p = nth_search_option("-times", FALSE);
	if (p!=NULL) 
	{
		fprintf(stderr,
			"%s %d (nth_set_cmdline_options): "
			"Trying to get profile information with a non-development library.\n",
			__FILE__, __LINE__
		);
	}
	p = nth_search_option("-profile", FALSE);
	if (p!=NULL) 
	{
		fprintf(stderr,
			"%s %d (nth_set_cmdline_options): "
			"Trying to get profile information with a non-development library.\n",
			__FILE__, __LINE__
		);
	}
#endif

NTH_DEBUG_END(NTH_DEBUG_SET_CMDLINE_OPTIONS,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_set_general_options: Initialization of the package. Set the
 * global variables of the package acording to previous definitions:
 *  - Default values (nth_config.h and nthmd_config.h).
 *  - Environment variables.
 *  - Command line arguments.
 * nth_set_general_options also reserve space in main memory and
 * initialize others structures (queues, etc...)
 * -----------------------------------------------------------------*/
void
nth_set_general_options (void)
{
	nth_int32_t i;
	nth_word_t sls,mask;
NTH_DEBUG_START(NTH_DEBUG_SET_GENERAL_OPTIONS,NTH_KTH,NTH_MYSELF,
"start")
NTH_DEBUG_BODY(NTH_DEBUG_SET_GENERAL_OPTIONS,NTH_KTH,NTH_MYSELF,
"setting rest of global variables")

	/* set the page size */
	nth_data.page_size = getpagesize();
	/* set the stack layout mask */
#if 0
	nth_data.stack_layout_mask = NTH_MAX_WORD_VALUE;
	sls = nth_data.stack_layout_size * nth_data.page_size;
	mask = (nth_word_t) 1;
	while (!(sls & mask)){
		nth_data.stack_layout_mask -= mask;
		mask = mask << 1;
	}
#endif
	/* set page-size mask */
	nth_data.page_size_mask = NTH_MAX_WORD_VALUE;
	sls = nth_data.page_size;
	mask = (nth_word_t) 1;
	while (!(sls & mask)){
		nth_data.page_size_mask -= mask;
		mask = mask << 1;
	}

NTH_DEBUG_BODY(NTH_DEBUG_SET_GENERAL_OPTIONS,NTH_KTH,NTH_MYSELF,
"allocating space in memory")

	nth_data.thread_ids = 
		(pthread_t *) nth_malloc(sizeof(pthread_t)*nth_data.nkths);
	nth_data.lrqs =
		(nth_desc_q_t *) nth_malloc(sizeof(nth_desc_edlist_t)*nth_data.nkths);
	nth_data.plrqs =
		(nth_desc_dlist_t *) nth_malloc(sizeof(nth_desc_dlist_t)*nth_data.nkths);
	
	nth_data.kth_myself = (nth_desc_t **)malloc(sizeof(nth_desc_t *) *
		nth_data.nkths);
	
NTH_DEBUG_BODY(NTH_DEBUG_SET_GENERAL_OPTIONS,NTH_KTH,NTH_MYSELF,
"initializing structures")

	/* memory variables initialization  */
	nth_data.mem_addr = NULL;
	nth_data.num_nthreads = 0;
	nth_data.num_tasks = 0;
	nth_data.id = 0;
	for ( i = 0; i < NTH_MAX_LEVEL ; i++) {
		nth_data.total_tasks[i] = 0;
	}

	nth_spin_init(&nth_data.mem_mutex);
	/* initialize free descriptors queue */
	nth_desc_eslist_init(&nth_data.fdq);
	/* initialize global run queue */
	nth_desc_edlist_init(&nth_data.rq);
	/* initialize local run queue */
	for (i=0;i<nth_data.nkths;i++){
		nth_desc_edlist_init(&nth_data.lrqs[i]);
		nth_desc_dlist_init(&nth_data.plrqs[i]);
	}

 	

NTH_DEBUG_END(NTH_DEBUG_SET_GENERAL_OPTIONS,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_check_options:
 * -----------------------------------------------------------------*/
#ifndef NTH_VERSIONING_DISABLED
extern const char *const __nanos_family;
extern const int __nanos_version;

static void
nth_check_version(void)
{
	if ((NANOS_CURRENT_VERSION != __nanos_version)
			|| (strcmp(NANOS_CURRENT_FAMILY, __nanos_family) != 0))
	{
		fprintf(stderr,
				"Nanos: library/program version mismatch. Library is family '%s' and version '%d' but \n"
				"program was compiled against family '%s' and version '%d'\n",
                NANOS_CURRENT_FAMILY,
                NANOS_CURRENT_VERSION,
				__nanos_family,
				__nanos_version
			   );
		exit(NTH_MAIN_ERROR); 
	}
}
#endif

void
nth_check_options (void)
{
NTH_DEBUG_START(NTH_DEBUG_CHECK_OPTIONS,NTH_KTH,NTH_MYSELF,
"start")

#ifndef NTH_VERSIONING_DISABLED
	/* check version */
	nth_check_version();
#endif

	/* after check all options */
	if (nth_data.help){
		nth_print_usage();
		nth_data.version = FALSE;
		nth_data.exit = TRUE;
	}
	if (nth_data.version){
		nth_print_version();
	}
	if (nth_data.setup){
		nth_print_setup();
	}
	
	if (nth_data.exit) exit(NTH_SUCCESSFUL);

NTH_DEBUG_END(NTH_DEBUG_CHECK_OPTIONS,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_cleanup: cleanup function.
 * -----------------------------------------------------------------*/
// _syscall0(pid_t, gettid);
static pid_t my_gettid(void)
{
		return syscall(__NR_gettid);
}

void*
nth_cleanup (void *me)
{
	nth_desc_t *desc;
NTH_DEBUG_START(NTH_DEBUG_CLEANUP,NTH_KTH,NTH_MYSELF,
"start")	
	
	/* xteruel:FIXME: Sched set affinity patch */
	{
		cpu_set_t cpu_set;
		pid_t me = my_gettid();

		sched_getaffinity(
			(pid_t) me,
			sizeof(cpu_set),
			&cpu_set
		);
		int i;
		for (i = 0; i < CPU_SETSIZE; i++)
		{
			CPU_SET(i, &cpu_set); 
		}
		sched_setaffinity(
			(pid_t) me,
			sizeof(cpu_set),
			&cpu_set);
	}

	NTH_MYSELF = (nth_desc_t*) me;
	NTH_KTH = NTH_MYSELF->vp;

	NTH_MYSELF->executed = 1;
	nth_instrument_thread_start();

	nth_data.kth_myself[NTH_KTH] = me;

	/* I'm running.. */
	nth_atm_add(&NTH_MYSELF->ndep, 1);

	/* but not for long :) */
	nth_block();	

NTH_DEBUG_BODY(NTH_DEBUG_CLEANUP,NTH_KTH,NTH_MYSELF,
"cleanup awake. executing pthread_exit()")	

	nth_instrument_thread_end();

	pthread_exit(0);

NTH_DEBUG_END(NTH_DEBUG_CLEANUP,NTH_KTH,NTH_MYSELF,
"end, error: you shouldn't see this message")
}

void * nth_cleanup_nthread  ( void *pt )
{
	nth_desc_t *myself=NTH_MYSELF;
	nth_desc_t *next;
NTH_DEBUG_START_VAL(NTH_DEBUG_IDLE,NTH_KTH,NTH_MYSELF,
"start, pt =", pt)

	profile_exectime_stop(myself->task_ctx);

	myself->ndep = 0;

	// TODO: remove it, needs appropiate support
	nth_task_block();

	if ( myself->is_task ) {
		profile_task_finished(myself->task_ctx);

		nth_desc_t *creator = myself->creator;
		assert(creator);
		assert(myself->creator_ctx);
		nth_word_t val= nth_atm_add(&myself->creator_ctx->my_ntasks,-1);
		nth_assert(val>0,"kth=%d, val=%d",NTH_KTH,val);
		if ( val == 1 &&
		     creator->task_ctx == myself->creator_ctx &&
		     creator->idle_state == NTH_DST_BLOCK_TASKWAIT
		    ) {
			nth_sch_wakeup(creator);
		}
	}

	if(myself->player && myself->player->team){
		if(myself->is_task)
		{		
			int val = nth_atm_add(&myself->player->team->rw.d.ntasks,(-1));
/*			if ( val == 1 ) {
				nth_desc_t *nth;
				for ( nth = myself->team->team_master;
				      nth; nth = nth->team_next ) {
					if ( nth->state == NTH_DST_BLOCK_TASKS )
						nth_sch_wakeup(nth);
				}
			}*/
		} else {
			/* This is a nano-thread exiting a parallel region...
			   do full barrier...
			   if we exit the parallel we lose the team information */
	//		nth_leave_team(1);
//			in__tone_barrier();
/*			nth_team_lock(myself);
			if(myself == myself->team->team_master){
				myself->team->team_master =
					myself->team->team_master->team_next;
			} else {
				nth_desc_t *prev;
				assert(myself->team->team_master);
				prev = myself->team->team_master;
				while ( prev && prev->team_next != myself ) {
					prev = prev->team_next;
				}
				nth_assert(prev,"kth=%d myself=%p master=%p",
					   NTH_KTH,myself,myself->team->team_master);
				prev->team_next = myself->team_next;
			}
			nth_team_unlock(myself);*/
		}
	}

NTH_DEBUG_BODY(NTH_DEBUG_IDLE,NTH_KTH,myself,
"resolving dependences (if any)")

	nth_task_flush_deps(myself->task_ctx);
	nth_desc_succflush(myself);

NTH_DEBUG_BODY(NTH_DEBUG_IDLE,NTH_KTH,myself,
"in idle loop")

	nth_sch_exitnth();

NTH_DEBUG_END(NTH_DEBUG_IDLE,NTH_KTH,myself,
"end")
}

/* -------------------------------------------------------------------
 * nth_idle: idle function.
 * -----------------------------------------------------------------*/
void *
nth_idle (void *pt)
{
	nth_desc_t *myself=NTH_MYSELF;
	nth_desc_t *next;
NTH_DEBUG_START_VAL(NTH_DEBUG_IDLE,NTH_KTH,NTH_MYSELF,
"start, pt =", pt)

	myself->ndep = 0;

NTH_DEBUG_BODY(NTH_DEBUG_IDLE,NTH_KTH,myself,
"in idle loop")

	nth_sch_exitnth();

NTH_DEBUG_END(NTH_DEBUG_IDLE,NTH_KTH,myself,
"end")
}
/* -------------------------------------------------------------------
 * nth_null: null function.
 * ----------------------------------------------------------------*/
void
nth_null (void)
{
NTH_DEBUG_START(NTH_DEBUG_NULL,NTH_KTH,NTH_MYSELF,
"start")
NTH_DEBUG_END(NTH_DEBUG_NULL,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_helper_switch: helper function (switch execution).
 * -----------------------------------------------------------------*/
void
nth_helper_function (nth_qt_t *old_sp, void *type, void *new_desc)
{
		
}
/* -------------------------------------------------------------------
 * nth_helper_switch: helper function (switch execution).
 * -----------------------------------------------------------------*/
void
nth_helper_switch (nth_qt_t *old_sp, void *a0, void *new_desc)
{
NTH_DEBUG_START(NTH_DEBUG_HELPER_SWITCH,NTH_KTH,NTH_MYSELF,
"start")

NTH_DEBUG_BODY(NTH_DEBUG_HELPER_SWITCH,NTH_KTH,NTH_MYSELF,
"setting old_desc..")

	NTH_MYSELF->sp = old_sp;
	
NTH_DEBUG_BODY_VAL(NTH_DEBUG_HELPER_SWITCH,NTH_KTH,NTH_MYSELF,
"... old_desc =", NTH_MYSELF)
NTH_DEBUG_BODY_VAL(NTH_DEBUG_HELPER_SWITCH,NTH_KTH,NTH_MYSELF,
"... old_desc->sp =", NTH_MYSELF->sp)

	nth_sch_enqueue(NTH_MYSELF);

NTH_DEBUG_BODY_VAL(NTH_DEBUG_HELPER_SWITCH,NTH_KTH,NTH_MYSELF,
"updating tls with new descriptor. new_desc =", new_desc)

	NTH_MYSELF = new_desc;
	nth_data.kth_myself[NTH_KTH] = new_desc;

	nth_instrument_enter_cpu(new_desc);

NTH_DEBUG_END(NTH_DEBUG_HELPER_SWITCH,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_helper_exit: helper function (exit old sp ).
 * -----------------------------------------------------------------*/
void
nth_helper_exit (nth_qt_t *old_sp, void *a0, void *new_desc)
{
	nth_desc_t *myself = NTH_MYSELF;
NTH_DEBUG_START(NTH_DEBUG_HELPER_EXIT,NTH_KTH,NTH_MYSELF,
"start")

NTH_DEBUG_BODY(NTH_DEBUG_HELPER_EXIT,NTH_KTH,NTH_MYSELF,
"setting old_desc..")

NTH_DEBUG_BODY_VAL(NTH_DEBUG_HELPER_EXIT,NTH_KTH,NTH_MYSELF,
"... old_desc =", NTH_MYSELF)

/* put old desc in free queue */
NTH_DEBUG_BODY(NTH_DEBUG_HELPER_EXIT,NTH_KTH,NTH_MYSELF,
"... old_desc in 'free descriptor's queue'")

	nth_assert(myself->my_ntasks == 0,"ntasks on exit %d",myself->my_ntasks);
	nth_assert(myself->state == NTH_DST_INIT,"state on exit %d",myself->state);

	if ( myself->is_task )
		nth_atm_add(&nth_data.num_tasks, (nth_word_t)-1);
	nth_atm_add(&nth_data.num_nthreads, (nth_word_t)-1);

	nth_desc_eslist_push_back(&nth_data.fdq,myself);
	
	
NTH_DEBUG_BODY_VAL(NTH_DEBUG_HELPER_EXIT,NTH_KTH,NTH_MYSELF,
"updating tls with new descriptor. new_desc =", new_desc)

	NTH_MYSELF = new_desc;
	nth_data.kth_myself[NTH_KTH] = new_desc;

	nth_instrument_enter_cpu(new_desc);

NTH_DEBUG_END(NTH_DEBUG_HELPER_EXIT,NTH_KTH,NTH_MYSELF,
"end")
}
/* -------------------------------------------------------------------
 * nth_print_usage: show the command line arguments that nano-threads
 * includes to the program.
 * -----------------------------------------------------------------*/
void
nth_print_usage (void)
{
/* head */
	fprintf (stderr, "%s - with %s %s\n",
		nth_data.argv[0],
		str_cmdline_package_name,
		str_cmdline_package_copyright
	);
/* usage */
	fprintf (stderr, "Usage: %s %s\n%s\n",
		nth_data.argv[0],
		str_cmdline_options,
		str_cmdline_description
	);
/* foot */	
	fprintf (stderr, "%s %s\n",
		str_cmdline_bug_report_text,
		str_cmdline_bug_report_email
	);
}
/* -------------------------------------------------------------------
 * nth_print_version: show the library version.
 * -----------------------------------------------------------------*/
void
nth_print_version (void)
{

/* head */
	fprintf (stderr, "%s - with %s %s\n",
		nth_data.argv[0],
		str_cmdline_package_name,
		str_cmdline_package_copyright
	);
/* foot */	
	fprintf (stderr, "%s %s\n",
		str_cmdline_bug_report_text,
		str_cmdline_bug_report_email
	);
}
/* -------------------------------------------------------------------
 * nth_print_rusage:
 * -----------------------------------------------------------------*/
void
nth_print_rusage (void)
{
	fprintf(stderr,
		"\n%s: getrusage().\n",
		str_cmdline_package_name
	);
	fprintf(stderr,
		" - User time used................................: %d secs, %d usecs.\n",
		(int) (nth_data.r_usage_fini.ru_utime.tv_sec
		- nth_data.r_usage_init.ru_utime.tv_sec)
		,
		(int) (nth_data.r_usage_fini.ru_utime.tv_usec
		- nth_data.r_usage_init.ru_utime.tv_usec)
	);
	fprintf(stderr,
		" - System time used..............................: %d secs, %d usecs.\n",
		(int) (nth_data.r_usage_fini.ru_stime.tv_sec
		- nth_data.r_usage_init.ru_stime.tv_sec)
		,
		(int) (nth_data.r_usage_fini.ru_stime.tv_usec
		- nth_data.r_usage_init.ru_stime.tv_usec)
	);
	fprintf(stderr,
		" - Maximum resident set size.....................: %d.\n",
		(int) nth_data.r_usage_fini.ru_maxrss
	);
	fprintf(stderr,
		" - Integral resident set size....................: %d.\n",
		(int) nth_data.r_usage_fini.ru_idrss
	);
	fprintf(stderr,
		" - Page faults not requiring I/O.................: %d.\n",
		(int) nth_data.r_usage_fini.ru_minflt
	);
	fprintf(stderr,
		" - Page faults requiring I/O.....................: %d.\n",
		(int) nth_data.r_usage_fini.ru_majflt
	);
	fprintf(stderr,
		" - Swap..........................................: %d.\n",
		(int) nth_data.r_usage_fini.ru_nswap
	);
	fprintf(stderr,
		" - Block input operations........................: %d.\n",
		(int) nth_data.r_usage_fini.ru_inblock
	);
	fprintf(stderr,
		" - Block output operations.......................: %d.\n",
		(int) nth_data.r_usage_fini.ru_oublock
	);
	fprintf(stderr,
		" - Messages sent.................................: %d.\n",
		(int) nth_data.r_usage_fini.ru_msgsnd
	);
	fprintf(stderr,
		" - Messages received.............................: %d.\n",
		(int) nth_data.r_usage_fini.ru_msgrcv
	);
	fprintf(stderr,
		" - Signals received..............................: %d.\n",
		(int) nth_data.r_usage_fini.ru_nsignals
	);
	fprintf(stderr,
		" - Voluntary context switch......................: %d.\n",
		(int) nth_data.r_usage_fini.ru_nvcsw
	);
	fprintf(stderr,
		" - Involuntary context switch....................: %d.\n",
		(int) nth_data.r_usage_fini.ru_nivcsw
	);
}
/* -------------------------------------------------------------------
 * nth_print_times:
 * -----------------------------------------------------------------*/
void
nth_print_times (long it_times)
{
	long clock_ticks = sysconf(_SC_CLK_TCK);

	fprintf(stderr,
		"\n%s: times().\n",
		str_cmdline_package_name
	);
	fprintf(stderr,
		" - Real time used................................: %d secs, %d msecs.\n",
		(int) (it_times / clock_ticks),
		(int) (it_times * (1000 / clock_ticks) % 1000)
	);
	fprintf(stderr,
		" - User time used................................: %d secs, %d msecs.\n",
		(int) ((nth_data.tms_fini.tms_utime - nth_data.tms_init.tms_utime)
		/ clock_ticks),
		(int) ((nth_data.tms_fini.tms_utime - nth_data.tms_init.tms_utime)
		* (1000 / clock_ticks) % 1000)
	);
	fprintf(stderr,
		" - System time used..............................: %d secs, %d msecs.\n",
		(int) ((nth_data.tms_fini.tms_stime - nth_data.tms_init.tms_stime)
		/ clock_ticks),
		(int) ((nth_data.tms_fini.tms_stime - nth_data.tms_init.tms_stime)
		* (1000 / clock_ticks) % 1000)
	);
}
/* -------------------------------------------------------------------
 * nth_print_setup: temporal function to print configuration.
 * -----------------------------------------------------------------*/
void
nth_print_setup (void)
{
	fprintf(stderr,
		"\n%s: setup values for this execution.\n",
		str_cmdline_package_name
	);
	fprintf (stderr,
        " - Number of cpus................................: %u.\n",
		(int) nth_data.ncpus
	);
	fprintf (stderr,
        " - Number of kernel threads......................: %u.\n",
		(int) nth_data.nkths
	);
	fprintf (stderr,
        " - Memory page size..............................: %u [0x%x].\n",
		(int) nth_data.page_size, (int) nth_data.page_size
	);
	fprintf (stderr,
        " - Memory page size mask.........................: %u [0x%p].\n",
		(int) nth_data.page_size_mask, (void *) nth_data.page_size_mask
	);
	fprintf (stderr, "\n");
	fprintf (stderr,
        " - Size of nano-thread stack.....................: %u [0x%x].\n",
		(int) nth_data.stack_size, (int) nth_data.stack_size
	);
	fprintf (stderr,
        " - Size of nano-thread guard zone................: %u [0x%x].\n",
		(int) nth_data.guard_size, (int) nth_data.guard_size
	);
	fprintf (stderr,
        " - Size of nano-thread descriptor................: %u [0x%x].\n",
		(int) nth_data.desc_size, (int)  nth_data.desc_size
	);
	fprintf (stderr,
        " - Size of nano-thread layout....................: %u [0x%x].\n",
		(int) (nth_data.stack_size+nth_data.guard_size+nth_data.desc_size),
		(int) (nth_data.stack_size+nth_data.guard_size+nth_data.desc_size)
	);
	fprintf (stderr, "\n");
	fprintf (stderr,
        " - Base of main nano-thread layout...............: %u [0x%x].\n",
		(int) NTH_DEFAULT_MAIN_LAYOUT_BASE, (int) NTH_DEFAULT_MAIN_LAYOUT_BASE
	);
	fprintf (stderr,
        " - Size of main nano-thread stack................: %u [0x%x].\n",
		(int) nth_data.main_stack_size, (int) nth_data.main_stack_size
	);
	fprintf (stderr,
        " - Size of main nano-thread guard zone...........: %u [0x%x].\n",
		(int) nth_data.main_guard_size, (int) nth_data.main_guard_size
	);
	fprintf (stderr,
        " - Size of main nano-thread descriptor...........: %u [0x%x].\n",
		(int) nth_data.main_desc_size, (int) nth_data.main_desc_size
	);
	fprintf (stderr,
        " - Size of main nano-thread layout...............: %u [0x%x].\n",
		(int) (nth_data.main_stack_size+nth_data.main_guard_size+nth_data.main_desc_size),
		(int) (nth_data.main_stack_size+nth_data.main_guard_size+nth_data.main_desc_size)
	);
	fprintf (stderr, "\n");
	nth_sch_print_info();
	
	fprintf(stderr," - Nth tiedness .........................: %s \n",
		nth_data.tasks_type == 0 ? "default" :
		nth_data.tasks_type == NTH_DTYPE_TEAM ? "untied" :
		nth_data.tasks_type == NTH_DTYPE_TEAM_DO_LOCAL ? "tied" : "unknown");
}
/* -------------------------------------------------------------------
 * nth_print_statistics: function to print statistics.
 * -----------------------------------------------------------------*/
void
nth_print_statistics (void)
{
	nth_word_t i;
	nth_word_t total=0;

	printf("Tasks created:\n");
	for ( i = 0; i < NTH_MAX_LEVEL; i++ ) {
		if ( nth_data.total_tasks[i] > 0 ) {
			printf(" - level %d : %5d\n",i,nth_data.total_tasks[i]);
			total += nth_data.total_tasks[i];
		}
	}
	printf(" - total:   %6d\n",total);
	printf(" - maximum: %6d\n",nth_data.max_tasks);
}
/* -------------------------------------------------------------------
 * nth_print_profile: function to print profile.
 * -----------------------------------------------------------------*/
void
nth_print_profile (void)
{
}
