#include <stdio.h>
int rv = 0, ncpus = 0;
int
main (int argc, char *argv[])
{
	fprintf(stderr,
"+ Starting hello world test\n");
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	fprintf(stderr,"  Hello World!\n");
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ Hello world test.......................................... successful.\n");
	else fprintf(stdout,
"+ Hello world test............................................... error.\n");
	return rv;
}
