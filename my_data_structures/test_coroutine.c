#include "pcl.h"
#include <stdio.h>

#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L

__thread coroutine_t _current_task;
coroutine_t co1, co2, co_scheduler;

void f1()
{
  printf("f1:1\n");
  co_call(co_scheduler);
  printf("f1:2\n");
}

void f2()
{
  printf("f2:1\n");
  co_call(co_scheduler);
  printf("f2:2\n");
}

void sched_loop()
{
  int i;
  for (i = 0; i < 2; ++i)
    {
      co_call(co1);
      co_call(co2);
    }
}

int main()
{
  co_vp_init();

  co1 = co_create(f1, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  co2 = co_create(f2, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  co_scheduler = co_create(sched_loop, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  co_call(co_scheduler);

  printf("returned to main\n");

  return 0;
}
