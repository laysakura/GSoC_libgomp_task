#include "myth.h"

void *test_thread(void *args)
{
	return NULL;
}

int main(int argc,char **argv)
{
	myth_init();
	myth_thread_t th=myth_create(test_thread,NULL);
	myth_join(th,NULL);
	myth_fini();
	printf("OK\n");
	return 0;
}
