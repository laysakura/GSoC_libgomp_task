#include <stdio.h>
#include <nthreads.h>
#include <intone.h>
#include <omp.h>

void parallel_function(void);
void serial_function(void);

int rv = 0, ncpus = 0;

void parallel_function(){
	int curr_ths, nths;
	
	nths = nth_getncpus();
	curr_ths = omp_get_num_threads();
	
	if (curr_ths != nths) rv = 1;
	if(rv){
		fprintf(stderr,
		"  Testing parallel function: ncpus = %d, threads = %d. NO\n"
			, nths, curr_ths);
	}
	else{
		fprintf(stderr,
		"  Testing parallel function: ncpus = %d, threads = %d. OK\n"
			, nths, curr_ths);
	}
}

void parallel_function_2(){
	int curr_ths;
	
	curr_ths = omp_get_num_threads();
	
	if (curr_ths != 2) rv = 1;
	if(rv){
		fprintf(stderr,
		"  Testing parallel function: 2-threads. NO\n");
	}
	else{
		fprintf(stderr,
		"  Testing parallel function: 2-threads. OK\n");
	}
}

void serial_function(){
	int curr_ths;

	curr_ths = omp_get_num_threads();
	
	if (curr_ths != 1) rv = 1;
	if(rv){
		fprintf(stderr,
		"  Testing serial function: 1-thread. NO\n");
	}
	else{
		fprintf(stderr,
		"  Testing serial function: 1-thread. OK\n");
	}
}

int
main (argc, argv)
	int argc;
	char *argv[];
{
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ Starting OMP get_num_threads() test with %3d cpus\n", ncpus);
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	nth_desc_t *self;
	int ndep, narg, ncpus_2;
	unsigned long mask;
	int i;

	ncpus_2 = 2;
	ndep = 0; self = nth_myself(); mask = 0; narg = 0;

	serial_function();
	
	nth_team_set_nplayers(&ncpus);
	for(i=0;i<ncpus;i++){
		nth_create_1s(&parallel_function, &ndep, &self,
			&mask, &narg);
	}
	nth_block();

	serial_function();
	
	nth_team_set_nplayers(&ncpus_2);
	for(i=0;i<ncpus_2;i++){
		nth_create_1s(&parallel_function_2, &ndep, &self,
			&mask, &narg);
	}
	nth_block();
	
	serial_function();
	
	nth_team_set_nplayers(&ncpus);
	for(i=0;i<ncpus;i++){
		nth_create_1s(&parallel_function, &ndep, &self,
			&mask, &narg);
	}
	nth_block();
	
	serial_function();
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ OMP get_num_threads() test with %3d cpus.................. successful.\n", ncpus);
	else fprintf(stdout,
"+ OMP get_num_threads() test with %3d cpus....................... error.\n", ncpus);
	return rv;
}
