#include <stdio.h>
#include <nthreads.h>
#include <intone.h>

int rv = 0, ncpus = 0;

typedef struct vartype{
	char caracter;
	short corto;
	int entero;
	long largo;
	long long largolargo;
}vartype;

void
task (int *par0, int *par1, int *par2, int *par3, vartype *par4){
	printf("Task function: par0 = %d\n", *par0);
	printf("Task function: par1 = %d\n", *par1);
	printf("Task function: par2 = %d\n", *par2);
	printf("Task function: par3 = %d\n", *par3);
	printf("Task function: par4.c = %d\n", par4->caracter);
	printf("Task function: par4.s = %d\n", par4->corto);
	printf("Task function: par4.i = %d\n", par4->entero);
	printf("Task function: par4.l = %ld\n", par4->largo);
	printf("Task function: par4.ll = %Ld\n", par4->largolargo);
}

void
parallel(void){
	int type=0xA;
	int ndep=0;
	int vp=0;
	nth_desc_t *succ=0;
	void *lav[2];
	void **lav_ptr;
	int narg = 3;
	int nav = 2;
	size_t vpl[2];
	int lpar0 = 0;
	int lpar1 = 1;
	int lpar2 = 2;
	int lpar3 = 3;
	vartype lpar4;

	lpar4.caracter = 40;
	lpar4.corto = 41;
	lpar4.entero = 42;
	lpar4.largo = 43;
	lpar4.largolargo = 44;

	vpl[0] = sizeof(int);
	vpl[1] = sizeof(vartype);
	lav_ptr = lav;

	if (in__tone_is_master()){
		if(nth_create (task,&type, &ndep, &vp, &succ, &lav_ptr, &narg, &nav,
				&lpar0, &lpar1, &lpar2, 
				&vpl[0], &lpar3, &vpl[1], &lpar4)
			== ((nth_desc_t *) -2))
		{
			printf("Error, task cannot be created\n");
		}
		lpar2 = -2;
		lpar3 = -3;
		lpar4.caracter = 0;
		lpar4.entero = 0;

		printf("Main function: lpar3 = %d\n", *((int *) lav[0]));
		printf("Main function: lpar4.char = %d\n", *((char *) lav[1]));
	}
	nth_task_block();
}

int
main (int argc, char *argv[])
{
	ncpus = nth_getncpus();
	fprintf(stderr,
"+ Starting sample test with %3d cpus\n", ncpus);
/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
	int i;
	int ndep=0, narg=0;
	unsigned long mask=0;
	nth_desc_t *self;
	
	self = nth_myself();
	for(i=0;i<ncpus;i++){
		nth_create_1s(
			parallel,
			&ndep,
			&self,
			&mask,
			&narg
		);
	}
	nth_block();

/* ********************************************************************
 * ********************************************************************
 * *******************************************************************/	
// ---------------------------------------------------------------------.
	if ((!rv) || (rv == 77)) fprintf(stdout,
"+ Sample test............................................... successful.\n");
	else fprintf(stdout,
"+ Sample test.................................................... error.\n");
	return rv;
}
