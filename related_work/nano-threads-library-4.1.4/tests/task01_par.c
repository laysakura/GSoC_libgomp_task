#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <nthreads.h>
#include <intone.h>

#define DEFAULT_NUM_TESTS 50
#define DEFAULT_NUM_ELEMS 12
int rv=0, ncpus=0;
int num_tests = DEFAULT_NUM_TESTS;
int num_elems = DEFAULT_NUM_ELEMS;

typedef struct lint{
	struct lint *next;
	int value;
} lint_t;

lint_t *my_lint = NULL;

void inti_my_lint (int);
void test_my_lint (int);
void increment (lint_t *);
void increment_my_lint (void);

void
init_my_lint(int n){
	lint_t *insert;
	int i;

	my_lint = (lint_t*)malloc(sizeof(lint_t));
	my_lint->value = 0;
	insert = my_lint;
	for(i=1;i<n;i++){
		insert->next = (lint_t*)malloc(sizeof(lint_t));
		insert = insert->next;
		insert->value = i;
	}
}

void
test_my_lint(int first){
	lint_t *print=my_lint;
	int i=first;

	fprintf(stderr,"  Task test from %2d: ",first);
	while(print!=NULL){
		fprintf(stderr,"%2d, ",print->value);
		if (print->value != i) rv = 1;
		i++;
		print = print->next;
	}
	fprintf(stderr,"\n");
}

void
increment(lint_t* elem){
	elem->value++;
	usleep(100);
}

void
inc_my_lint(){
	lint_t *inc=my_lint;
	int mask=0;
	int narg=1;

	if (in__tone_is_master()){
		while(inc!=NULL){
			if(nth_create_task(increment,&mask,&narg,inc) == (nth_desc_t*) -2)
			{
				increment(inc);
			}
			inc = inc->next;
		}
	}
	nth_task_block();
}

int
main (int argc, char *argv[])
{
	if (argc > 1) num_tests = atoi(argv[1]);
	if (argc > 2) num_elems = atoi(argv[2]);
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ Starting task 01 parallel execution test with %3d cpus [%dt/%de]\n",
	ncpus, num_tests, num_elems);
/* *********************************************************************
 * *********************************************************************
 * ********************************************************************/
	int i,j;
	int ndep=0, narg=0;
	unsigned long mask=0;
	nth_desc_t *self;

	init_my_lint(num_elems);
	test_my_lint(0);
	
	self = nth_myself();

	for(i=1;i<num_tests;i++){
		for(j=0;j<ncpus;j++){
			nth_create_1s(inc_my_lint, &ndep,
				&self, &mask, &narg
			);
		}
		nth_block();
		test_my_lint(i);
	}
/* *********************************************************************
 * *********************************************************************
 * ********************************************************************/
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ Task 01 parallel execution test with %3d cpus............. successful.\n", ncpus);
	else fprintf(stdout,
"+ Task 01 parallel execution test with %3d cpus.................. error.\n", ncpus);
	return rv;
}
