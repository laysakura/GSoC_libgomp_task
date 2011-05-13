#include <stdio.h>
#include <nthreads.h>
#include <intone.h>
#include <omp.h>

int rv = 0, ncpus = 0;

int
main (argc, argv)
	int argc;
	char *argv[];
{
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ Starting OMP get_max_threads() test with %3d cpus\n", ncpus);
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	int max_threads = omp_get_max_threads();

	if (ncpus != max_threads){
		rv = 1;
	}

/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ OMP get_max_threads() test with %3d cpus.................. successful.\n", ncpus);
	else fprintf(stdout,
"+ OMP get_max_threads() test with %3d cpus....................... error.\n", ncpus);
	return rv;
}
