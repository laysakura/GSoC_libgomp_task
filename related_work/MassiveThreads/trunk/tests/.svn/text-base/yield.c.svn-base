#include "myth.h"

//ランキューより十分に長い値を指定
#define YIELD_COUNT (1<<20)
//#define SHOW_LOG

void *test_thread(void *args)
{
	int i;
	for(i=0;i<YIELD_COUNT;i++){
#ifdef SHOW_LOG
		fprintf(stderr,"B%d\n",i);
#endif
		myth_yield();
	}
	return NULL;
}

int main(int argc,char **argv)
{
	myth_init();
	myth_thread_t th=myth_create(test_thread,NULL);
	int i;
	for(i=0;i<YIELD_COUNT;i++){
#ifdef SHOW_LOG
		fprintf(stderr,"A%d\n",i);
#endif
		myth_yield();
	}
	myth_join(th,NULL);
	myth_fini();
	printf("OK\n");
	return 0;
}
