#include <nthreads.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void matrix_init(int);
int matrix_test(int);
int matrix_print(void);
void matrix_add(int *, int *, int *);

#define MATRIX_SIZE 5040
#define MAX_THREADS 50
#define DEFAULT_NUM_TESTS 10

int rv = 0, ncpus = 0;
int num_tests = DEFAULT_NUM_TESTS;

int matrix[MATRIX_SIZE][MATRIX_SIZE];
int matrix_a[MATRIX_SIZE][MATRIX_SIZE];
int matrix_b[MATRIX_SIZE][MATRIX_SIZE];

void
matrix_init (value)
	int value;
{
	int i,j;

	for(i=0;i<MATRIX_SIZE;i++){
		for(j=0;j<MATRIX_SIZE;j++){
			matrix[i][j] = value;
			matrix_a[i][j] = value;
			matrix_b[i][j] = value;
		}
	}
}
int
matrix_test (value)
	int value;
{
	int i,j;
	int frv = 0;

	for(i=0;i<MATRIX_SIZE;i++){
		for(j=0;j<MATRIX_SIZE;j++){
			if (matrix[i][j] != value){
				fprintf(stderr,"  matrix[%d][%d] == %d and was expected %d\n",i,j,matrix[i][j],value);
				frv = -1;
			}
		}
	}

	return frv;
}
int
matrix_print ()
{
	int i,j;

	for(i=0;i<MATRIX_SIZE;i++){
		fprintf(stdout, "\n");
		for(j=0;j<MATRIX_SIZE;j++){
			fprintf(stderr, "%4d ", matrix[i][j]);
		}
	}
	fprintf(stderr, "\n");

	return 0;
}

void
matrix_add (n, begin, end)
	int *n;
	int *begin;
	int *end;
{
	int k,i,j;

	for(k=0;k<*n;k++){
		for(i=*begin;i<*end;i++){
			for(j=0;j<MATRIX_SIZE;j++){
				matrix[i][j]=matrix_a[i][j]+matrix_b[i][j];
			}
		}
	}
}

int
main (int argc, char *argv[])
{
	if (argc > 1) num_tests = atoi(argv[1]);
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ Starting matrix add (nthreads) test with %3d cpus [%dt]\n",ncpus,num_tests);
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	int begin[MAX_THREADS], end[MAX_THREADS];
	int i;
	nth_desc_t *self;
	int ndep, narg;
	unsigned long mask;
	int value=2;



	matrix_init(value);
	ndep = 0;
	self = nth_myself();
	mask = 0;
	narg = 3;
/* begin: parallel code */
	for(i=0;i<ncpus;i++){
		begin[i] = (MATRIX_SIZE / ncpus)*i;
		end[i] = (MATRIX_SIZE / ncpus)*(i+1);
		nth_create_1s(&matrix_add, &ndep, &self,
			&mask, &narg, &num_tests, &begin[i], &end[i]
		);
	}
	nth_block();
/* end: parallel code */

	rv = matrix_test(value*2);

	/* matrix_print(); */
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ Matrix add (nthreads) test with %3d cpus.................. successful.\n", ncpus);
	else fprintf(stdout,
"+ Matrix add (nthreads) test with %3d cpus....................... error.\n", ncpus);
	return rv;
}
