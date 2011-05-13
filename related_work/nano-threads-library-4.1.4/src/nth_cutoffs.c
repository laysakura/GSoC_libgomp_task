#include "nth_sched.h"
#include <stdlib.h>
#include <stdio.h>

static nth_cutoff_res_t nth_maxlevel_cutoff_create (int *n)
{
	nth_desc_t *myself = NTH_MYSELF;

	return myself->deep_level < nth_data.max_deep_level ?
		NTH_CUTOFF_CREATE : NTH_CUTOFF_IMMEDIATE;
}

static nth_cutoff_res_t nth_maxnths_cutoff_create (int *n)
{
	return nth_data.num_nthreads < nth_data.max_num_nthreads ?
		NTH_CUTOFF_CREATE : NTH_CUTOFF_IMMEDIATE;
}

static nth_cutoff_res_t nth_maxtasks_cutoff_create (int *n)
{
	return nth_data.num_tasks < nth_data.max_num_nthreads ?
		NTH_CUTOFF_CREATE : NTH_CUTOFF_IMMEDIATE;
}

static nth_cutoff_res_t nth_null_cutoff_create (int *n)
{
	return NTH_CUTOFF_CREATE;
}

static nth_cutoff_res_t nth_serial_cutoff_create (int *n)
{
	return NTH_CUTOFF_SERIALIZE;
}

static void nth_maxlevel_config (char *value)
{
	/* 3 is the mininum level for a task:
		- 0 kth
		- 1 serial thread
		- 2 omp thread
		- 3 task
	*/
	if (value) nth_data.max_deep_level = atoi(value)+2;
}

static void nth_maxlevel_print_info (void)
{
	fprintf(stderr,"=%d", nth_data.max_deep_level-2);
}

static void nth_maxnths_config (char *value)
{
	if (value) nth_data.max_num_nthreads = atoi(value);
}

static void nth_maxnths_init (void)
{
	nth_data.max_num_nthreads *= nth_data.nkths;
}

static void nth_maxnths_print_info (void)
{
	fprintf(stderr,"=%d", nth_data.max_num_nthreads);
}

nth_cutoff_t nth_maxlevel_cutoff = {
	"maxlevel",
	nth_maxlevel_cutoff_create,
	nth_maxlevel_config,
	0,
	nth_maxlevel_print_info
};

nth_cutoff_t nth_maxnths_cutoff = {
	"maxnths",
	nth_maxnths_cutoff_create,
	nth_maxnths_config,
	nth_maxnths_init,
	nth_maxnths_print_info
};

nth_cutoff_t nth_maxtasks_cutoff = {
	"maxtasks",
	nth_maxtasks_cutoff_create,
	nth_maxnths_config,
	nth_maxnths_init,
	nth_maxnths_print_info
};

nth_cutoff_t nth_null_cutoff = {
	"nocutoff",
	nth_null_cutoff_create,
	0,
	0,
	0
};

nth_cutoff_t nth_serial_cutoff = {
	"serial",
	nth_serial_cutoff_create,
	0,
	0,
	0
};

nth_cutoff_t *nth_curr_cutoff = &nth_maxnths_cutoff;

nth_cutoff_res_t nth_cutoff_create (int *n)
{
	nth_desc_t *myself = NTH_MYSELF;
	if ( myself->task_ctx && myself->task_ctx->final ) return NTH_CUTOFF_SERIALIZE; 
	return nth_curr_cutoff->create(n);
}

void nth_cutoff_set ( nth_cutoff_t *cutoff, char *config )
{
	nth_curr_cutoff = cutoff;
	if ( nth_curr_cutoff->config )
		nth_curr_cutoff->config(config);
}

void nth_cutoff_print_info ( void )
{
	fprintf(stderr," - Cutoff: %s", nth_curr_cutoff->name );
	if ( nth_curr_cutoff->print_info )
		nth_curr_cutoff->print_info();
	fprintf(stderr,"\n");
}

void nth_cutoff_init ( void )
{
	if (nth_curr_cutoff->init)
		nth_curr_cutoff->init();
}

static num_ready_factor = 1;

nth_cutoff_res_t nth_numready_cutoff_create (int *n)
{
	if ( nth_schedule->num_ready() <= nth_data.nkths*num_ready_factor) {
		return NTH_CUTOFF_CREATE;
	} else return NTH_CUTOFF_IMMEDIATE;
}

void nth_numready_config (char *value)
{
	if (value) num_ready_factor = atoi(value);
}

static void nth_numready_init (void)
{
}

static void nth_numready_print_info (void)
{
	fprintf(stderr,"=%d", num_ready_factor );
}

nth_cutoff_res_t nth_idle_cutoff_create (int *n)
{
	if ( nth_sch_get_idle_kths() > 0 ) return NTH_CUTOFF_CREATE;
	else return NTH_CUTOFF_IMMEDIATE;
}

nth_cutoff_t nth_numready_cutoff = {
	"numready",
	nth_numready_cutoff_create,
	nth_numready_config,
	nth_numready_init,
	nth_numready_print_info
};

nth_cutoff_t nth_idle_cutoff = {
	"idle",
	nth_idle_cutoff_create,
	0,
	0,
	0
};

static int nth_groupn=100;

nth_cutoff_res_t nth_groupn_cutoff_create (int *n)
{
	*n = nth_groupn;
	return NTH_CUTOFF_GROUPN;
}

void nth_groupn_config (char *value)
{
	if (value) nth_groupn = atoi(value);
}

static void nth_groupn_init (void)
{
}

static void nth_groupn_print_info (void)
{
	fprintf(stderr,"=%d", nth_groupn );
}


nth_cutoff_t nth_groupn_cutoff = {
	"groupn",
	nth_groupn_cutoff_create,
	nth_groupn_config,
	nth_groupn_init,
	nth_groupn_print_info
};
