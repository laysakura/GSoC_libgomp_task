#include <stdio.h>
#include <stdlib.h>
#include <nthreads.h>
#include <intone.h>

void parallel_function(int);

#define DEFAULT_NUM_TESTS 10
#define DEFAULT_NUM_ITERS 1024
#define MAX_THREADS 128

int rv = 0, ncpus = 0;
int num_tests = DEFAULT_NUM_TESTS;
int num_iters = DEFAULT_NUM_ITERS;

nth_word_t value = 0;
nth_word_t sum[MAX_THREADS];

void
parallel_function(int id)
{
	int i, val = 0;

	sum[id] = 0;
	for(i=0;i<num_iters;i++){
		sum[id] += nth_tas(&value, val);
		if (val) val = 0;
		else val = 1;
	}
	sum[id] += nth_tas(&value, 0);
}

int
main (int argc, char *argv[])
{
	if (argc > 1) num_tests = atoi(argv[1]);
	if (argc > 2) num_iters = atoi(argv[2]);
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ Starting nth_tas() test with %3d cpus [%dt/%di]\n", ncpus, num_tests, num_iters);
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	nth_desc_t *self;
	int ndep, narg;
	unsigned long mask;
	int i,j, total;

	ndep = 0;
	mask = 0;
	narg = 1;
	self = nth_myself();

	for(i=0;i<num_tests;i++){
		nth_team_set_nplayers(&ncpus);
		for(j=0;j<ncpus;j++){
			nth_create_1s_vp(&parallel_function, &ndep, &j, &self,
				&mask, &narg, j);
		}
		nth_block();
		
		total = 0;
		for(j=0;j<ncpus;j++){
			total += sum[j];
		}
		
		if (total != ((num_iters/2) * ncpus)){
			fprintf(stderr, "  Error: total == %d when was expected %d\n", total, ((num_iters/2)*ncpus));
			rv = 1;
		}
		value = 0;
	}

/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ nth_tas() test with %3d cpus.............................. successful.\n",ncpus);
	else fprintf(stdout,
"+ nth_tas() test with %3d cpus................................... error.\n",ncpus);
	return rv;
}
