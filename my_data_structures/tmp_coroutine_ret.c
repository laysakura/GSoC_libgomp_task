#include "pcl.h"
#include "gsoc_taskqueue.h"
#include <stdio.h>
#include <stdlib.h>

#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L

typedef struct {
  int* retval;
  int arg;
} omp_internal_data;

typedef struct {
  gsoc_taskqueue* taskq;
  gsoc_task* current_task;
  gsoc_task* scheduler_task;
} gsoc_worker;

gsoc_worker *_worker;

void gsoc_scheduler(coroutine_t co)
{
  co_call(co);
}

int fib()
{
  return 333;
}

void omp_fib_1(void* data)
{
  int ret;
  ret = fib();
  printf("%d\n", ret);
}

int main()
{
  _worker = malloc(sizeof(gsoc_worker));

  co_vp_init();

  _worker->current_task = co_create(omp_fib_1, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  _worker->scheduler_task = co_create((void(*)(void*))gsoc_scheduler, _worker->current_task, NULL, OMP_TASK_STACK_SIZE_DEFAULT);

  co_call(_worker->scheduler_task);

  free(_worker);

  printf("Success\n");
  return 0;
}


