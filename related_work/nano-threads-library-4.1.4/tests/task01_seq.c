#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_TEST 10
#define NUM_ELEMS 10

int rv = 0;
typedef struct lint{
	struct lint *next;
	int value;
} lint_t;

lint_t *my_lint = NULL;

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

	fprintf(stderr," ·Task test from %d: ",first);
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
	usleep(10);
}

void
inc_my_lint(){
	lint_t *inc=my_lint;

	while(inc!=NULL){
		increment(inc); /* task */
		inc = inc->next;
	}
}

int
main (argc, argv)
	int argc;
	char *argv[];
{
	int i;
	
	init_my_lint(NUM_ELEMS);
	test_my_lint(0);

	for(i=1;i<NUM_TEST;i++){
		inc_my_lint();
		test_my_lint(i);
	}

/* Print results */
	if (!rv) fprintf(stdout,
"Task execution test................................... successful.\n");
	else fprintf(stdout,
"Task execution test................................... error.\n");

	return rv;
}
