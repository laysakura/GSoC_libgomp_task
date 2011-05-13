#include <stdio.h>
#include <nthreads.h>
#include <intone.h>

#define MAX_THREADS 32
#define NUM_TESTS 100
#define NUM_ITERS 1024
#define CACHE_SIZE 4096 

int rv = 0, ncpus = 0;
int thread_vector[MAX_THREADS*CACHE_SIZE];

void
initialize_thread_vector (int max_threads)
{
	int i;
	for(i=0;i<MAX_THREADS;i++){
		thread_vector[i*CACHE_SIZE]=0;
	}
}

void
parallel_function()
{
	int i,curr_th,nths;
	
	nths = nth_getncpus();
	curr_th = in__tone_thread_id();
	
	for(i=0;i<NUM_ITERS;i++){
		thread_vector[curr_th*CACHE_SIZE]++;
	}

	in__tone_barrier();
	
	for(i=0;i<nths;i++){
		if (thread_vector[i*CACHE_SIZE]!=NUM_ITERS) rv = 1;
	}

	in__tone_barrier();
	
}


int
main (int argc, char *argv[])
{
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ Starting OMP in__tone_barrier() test with %3d cpus\n", ncpus);
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	nth_desc_t *self;
	int ndep, narg;
	unsigned long mask;
	int i,j;

	ndep = 0;
	mask = 0;
	narg = 0;
	self = nth_myself();

	for(i=0;i<NUM_TESTS;i++){
		initialize_thread_vector(ncpus);
		nth_team_set_nplayers(&ncpus);
		for(j=0;j<ncpus;j++){
			nth_create_1s_vp(&parallel_function, &ndep, &j, &self,
				&mask, &narg);
		}
		nth_block();
	}

/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ OMP in__tone_barrier() test with %3d cpus................. successful.\n",ncpus);
	else fprintf(stdout,
"+ OMP in__tone_barrier() test with %3d cpus................. error.\n",ncpus);
	return rv;
}
