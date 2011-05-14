#include <pthread.h>
#include "myth.h"

//偶数ワーカーのコンテキストはMassiveThreadsに取り込まれる
void *worker_thread_fn(void *args)
{
	intptr_t rank=(intptr_t)args;
	fprintf(stderr,"Hello worker %d\n",(int)rank);
	if (rank%2==0){
		myth_startpoint_init_ex(rank);
		fprintf(stderr,"Hello myth management\n");
		myth_startpoint_exit_ex(rank);
	}
	else{
		myth_worker_start_ex(rank);
	}
	fprintf(stderr,"Goodbye worker %d\n",(int)rank);
	return NULL;
}

int main(int argc,char **argv)
{
	intptr_t num_workers=-1;
	intptr_t i;
	if (argc>=2)num_workers=atoi(argv[1]);
	num_workers=myth_init_ex(num_workers);
	pthread_t th[num_workers];
	for (i=0;i<num_workers;i++){
		pthread_create(&th[i],NULL,worker_thread_fn,(void*)i);
	}
	for (i=0;i<num_workers;i++){
		pthread_join(th[i],NULL);
	}
	myth_fini_ex();
	printf("OK\n");
	return 0;
}
