#include <stdio.h>
#include <nthreads.h>
#include <intone.h>

void parallel_function(void);

#define NUM_TESTS 100
#define NUM_ITERS 1024

int rv = 0, ncpus = 0;
nth_word_t value = 0;

void
parallel_function()
{
	int i;
	
	for(i=0;i<NUM_ITERS;i++){
		nth_atm_add(&value, 1);
	}
}

int
main (int argc, char *argv[])
{
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ Starting nth_atm_add() test with %3d cpus\n", ncpus);
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
		nth_team_set_nplayers(&ncpus);
		for(j=0;j<ncpus;j++){
			nth_create_1s_vp(&parallel_function, &ndep, &j, &self,
				&mask, &narg);
		}
		nth_block();
		if (value != (NUM_ITERS * ncpus)) rv = 1;
		value = 0;
	}

/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ nth_atm_add() test with %3d cpus.......................... successful.\n",ncpus);
	else fprintf(stdout,
"+ nth_atm_add() test with %3d cpus.......................... error.\n",ncpus);
	return rv;
}
