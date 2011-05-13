#include <stdio.h>
#include <stdlib.h>
#include <nthreads.h>
#include <intone.h>

void parallel_function(void);

#define MAX_THREADS 32
#define DEFAULT_NUM_TESTS 10

int rv = 0, ncpus = 0;
int thread_vector[MAX_THREADS];

void
test_thread_vector (int max_threads)
{
	int i,sum=0;
	
	if (thread_vector[0] != 1) rv = 1;
	
	for(i=1;i<max_threads;i++){
		sum += thread_vector[i];
	}
	if (sum != 0) rv = 1;
}

void
parallel_function()
{
	int curr_th;
	
	curr_th = in__tone_thread_id();
	
	if (in__tone_is_master()){
		fprintf(stderr, "  Thread master id = %d.\n" , curr_th);
		thread_vector[curr_th] = 1;
	}
	else{
		thread_vector[curr_th] = 0;
	}
}


int
main (int argc, char *argv[])
{
	int num_tests = DEFAULT_NUM_TESTS;
	if (argc > 1) num_tests = atoi(argv[1]);
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ OMP in__tone_is_master() test with %3d cpus [%dt]\n",ncpus, num_tests);
	if (ncpus > MAX_THREADS){
		fprintf(stderr, 
"  Maximum number of threads allowed is %d.\n", MAX_THREADS);
		exit(1);
	}
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	nth_desc_t *self;
	int ndep, narg;
	unsigned long mask;
	int i,j;

	ndep = 0; self = nth_myself(); mask = 0; narg = 0;

	for(i=0;i<num_tests;i++){
		nth_team_set_nplayers(&ncpus);
		for(j=0;j<ncpus;j++){
			/* j is the virtual processor */
			nth_create_1s_vp(&parallel_function, &ndep, &j, &self,
				&mask, &narg);
		}
		nth_block();
		test_thread_vector(ncpus);
	}
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ OMP in__tone_is_master() test with %3d cpus............... successful.\n",ncpus);
	else fprintf(stdout,
"+ OMP in__tone_is_master() test with %3d cpus.................... error.\n",ncpus);
	return rv;
}
