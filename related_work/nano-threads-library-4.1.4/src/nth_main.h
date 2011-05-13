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
#ifndef NTH_MAIN_H
#define NTH_MAIN_H
/* ******************************************************************
 * INCLUDES
 * *****************************************************************/
#include "nth_config.h"
#include "nth_data.h"
/* ******************************************************************
 * DEFINES
 * *****************************************************************/
#define NTH_HELPER_SWITCH			(void *)	1
#define NTH_HELPER_EXIT				(void *)	2
/* ******************************************************************
 * INTERFACE FUNCTIONS
 * *****************************************************************/
void nth_main_init(void) __attribute__((constructor));
void nth_main_fini(void) __attribute__((destructor));
char *nth_search_option(char *opt, int has_arg);
void nth_set_default_options (void);
void nth_set_environment_options (void);
void nth_set_cmdline_options (void);
void nth_set_general_options (void);
void nth_check_options (void);
void nth_pack_arguments(int argc, char *argv[], int *p_argc, char *p_argv[]);
/* -----------------------------------------------------------------*/
void* nth_idle(void *pt);
void nth_null(void);
void* nth_cleanup(void *);
void* nth_cleanup_nthread(void *);
void nth_helper_function(nth_qt_t *old_sp, void *a0, void *a1);
void nth_helper_switch(nth_qt_t *old_sp, void *a0, void *a1);
void nth_helper_exit(nth_qt_t *old_sp, void *a0, void *a1);
void nth_package_init(void);
void nth_start(int argc, char *argv[]);

void nth_print_usage (void);
void nth_print_version(void);
void nth_print_setup(void);
void nth_print_rusage(void);
void nth_print_times(clock_t times_it);
void nth_print_statistics(void);
#endif
