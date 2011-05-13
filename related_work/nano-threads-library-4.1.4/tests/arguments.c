#include <stdio.h>
#include <stdlib.h>

int rv = 0, ncpus = 0;

int
main (int argc, char *argv[])
{
	fprintf(stderr,
"+ Starting command line arguments test\n");
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	int i = 0;
	int nargs = 0;
	while(i<argc){
		fprintf(stderr,"  arg %d: %s.\n",i,argv[i]);
		if ( i==0){
			/* empty */
		}
		else if (i == 1){
			nargs = atoi(argv[i]);
		}
		else{
			if ((i-1) != atoi(argv[i])) rv = 1;
		}
		i++;
	}
	if ( nargs && ((i-2) != nargs)) rv = 1;
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	if ((!rv) || (rv == 77))fprintf(stdout,
"+ Command line arguments test............................... successful.\n");
	else fprintf(stdout,
"+ Command line arguments test.................................... error.\n");
	return rv;
}
