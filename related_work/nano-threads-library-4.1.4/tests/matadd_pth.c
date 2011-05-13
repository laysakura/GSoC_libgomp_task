#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>

#define MATRIX_SIZE 5040
#define DEFAULT_NUM_TESTS 10

int rv = 0, ncpus = 1;
int num_tests = DEFAULT_NUM_TESTS;

int matrix[MATRIX_SIZE][MATRIX_SIZE];
int matrix_a[MATRIX_SIZE][MATRIX_SIZE];
int matrix_b[MATRIX_SIZE][MATRIX_SIZE];

typedef struct mip{
	int n;
	int begin;
	int end;
}mip;

void matrix_init(int);
int matrix_test(int);
int matrix_print(void);
void matrix_add(mip *);

void
matrix_init (int value)
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
matrix_test (int value)
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
			fprintf(stdout, "%4d ", matrix[i][j]);
		}
	}
	fprintf(stdout, "\n");

	return 0;
}

void
matrix_add (mip *params)
{
	int k,i,j;

	for(k=0;k<params->n;k++){
		for(i=params->begin;i<params->end;i++){
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
	if (argc > 2) ncpus = atoi(argv[2]);
	fprintf(stderr,
"+ Starting matrix add (pthreads) test with %3d cpus [%dt]\n",ncpus,num_tests);
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	int i;
	pthread_t *pth_id;
	pthread_attr_t pth_attr;
	mip *params;
	int value = 1;

	params = (mip *)malloc(sizeof(mip)*ncpus);
	pth_id = (pthread_t *)malloc(sizeof(pthread_t)*ncpus);

	matrix_init(value);

/* begin: parallel code */
	pthread_attr_init(&pth_attr);
	for(i=1;i<ncpus;i++){
		params[i].n = num_tests;
		params[i].begin = (MATRIX_SIZE / ncpus)*i;
		params[i].end = (MATRIX_SIZE / ncpus)*(i+1);
		pthread_create(
			(pthread_t *) &pth_id[i],
			(pthread_attr_t *) &pth_attr,
			(void *) matrix_add,
			(void *) &params[i]
		);
	}
	params[0].n = num_tests;
	params[0].begin = 0;
	params[0].end = (MATRIX_SIZE / ncpus);
	matrix_add(&params[0]);

	for(i=1;i<ncpus;i++){
		pthread_join(pth_id[i], (void **)NULL);
	}
/* end: parallel code */

	rv = matrix_test(value*2);

/*	matrix_print();*/
	
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ Matrix add (pthreads) test with %3d cpus.................. successful.\n", ncpus);
	else fprintf(stdout,
"+ Matrix add (pthreads) test with %3d cpus....................... error.\n", ncpus);
	return rv;
}

