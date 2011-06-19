#define CO_USE_UCONEXT


#include "pcl.h"
#include "gsoc_taskqueue.h"
#include <stdio.h>
#include <stdlib.h>


#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L


unsigned int num_team_task;


typedef struct
{
  int* retval;
  int arg;
} omp_internal_data;


typedef struct
{
  pthread_t pthread_id;
  gsoc_taskqueue* taskq;
  gsoc_task* current_task;
  gsoc_task* scheduler_task;
} gsoc_worker;

gsoc_worker _worker;


gsoc_task* gsoc_task_create(void (*func)(void*), void *data, void *stack, int stacksize, gsoc_task* parent_task)
{
  gsoc_task* ret;
  ret = co_create(func, data, stack, stacksize);
  ret->num_children = 0;
  ret->creator = parent_task;
  __sync_add_and_fetch(&num_team_task, 1);
  if (__builtin_expect(parent_task != NULL, 1)) /* Fauls only if the task to be created is root task */
    __sync_add_and_fetch(&parent_task->num_children, 1);
  return ret;
}

void gsoc_task_scheduler_loop()
{
  while (1)
    {
      /* Never return from this function.
         So the caller of this function (task scheduling point ABI)
         doesn't have to think about context switch from this funciton. */
      gsoc_task* next_task;


      next_task = gsoc_taskqueue_pop(_worker.taskq);
      if (__builtin_expect(next_task == NULL, 0))
        {
          /* next_task = gsoc_taskqueue_take(taskq2); */
          /* if (!next_task) */
          /*   { */
          /*     printf("gsoc_task_scheduler_loop: num_team_task %d\n", num_team_task); */
              if (num_team_task == 0)
                return; /* to main */

              continue; /* try again */
            /* } */
        }

      _worker.current_task = next_task;
      co_call(_worker.current_task);
    }
}

void gsoc_encounter_task_directive(void(*func)(void*), void* data)
{
  gsoc_task* child_task;

  child_task = gsoc_task_create(func, (omp_internal_data*)data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, _worker.current_task);

  gsoc_taskqueue_push(_worker.taskq, child_task);
}

void gsoc_encounter_taskwait_directive()
{
  if (_worker.current_task->num_children == 0)
    {
      /* Skip taskwait directive */
      return;
    }

  /* This task sleeps until the last child wakes it up */
  co_call(_worker.scheduler_task);
}

void gsoc_encounter_taskexit_directive()
{
  if (_worker.current_task->creator)
    {
      __sync_sub_and_fetch(&_worker.current_task->creator->num_children, 1);
      if (_worker.current_task->creator->num_children == 0)
        /* Tell parent task that all of us children finished our work
           then parent resume its work using our result. */
        gsoc_taskqueue_push(_worker.taskq, _worker.current_task->creator);
    }

  __sync_sub_and_fetch(&num_team_task, 1);
}

int fib(int N);

void fib_outlined(omp_internal_data* data)
{
  *data->retval = fib(data->arg);
}

int fib(int N)
{
  int f1, f2;
  omp_internal_data omp_data1, omp_data2;

  if (N <= 1)
    {
      gsoc_encounter_taskexit_directive();
      return N;
    }


  /* #pragma omp task shared(f1) firstprivate(N) */
  /* f1 = fib(N - 1); */
  /* is tranlated in: */
  omp_data1.retval = &f1;
  omp_data1.arg = N - 1;
  gsoc_encounter_task_directive((void (*)(void*))fib_outlined, (omp_internal_data*)&omp_data1);

  /* #pragma omp task shared(f2) firstprivate(N) */
  /* f2 = fib(N - 2); */
  /* is tranlated in: */
  omp_data2.retval = &f2;
  omp_data2.arg = N - 2;
  gsoc_encounter_task_directive((void (*)(void*))fib_outlined, (omp_internal_data*)&omp_data2);

  gsoc_encounter_taskwait_directive();


  gsoc_encounter_taskexit_directive();

  return f1 + f2;
}

int main(int argc, char** argv)
{
  omp_internal_data data;
  int retval;
  data.retval = &retval;

  if (argc != 2)
    {
      fprintf(stderr, "ARGS: <N for fib(N)>\n");
      exit(1);
    }
  data.arg = atoi(argv[1]);

  _worker.taskq = gsoc_taskqueue_new();
  _worker.scheduler_task = co_create(gsoc_task_scheduler_loop, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  _worker.current_task = co_create((void(*)(void*))fib_outlined, &data, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  _worker.current_task->creator = NULL;

  co_vp_init(); /* Necessary to set initial value for "co_curr__" in pcl.c.
                   Without this, SEGV would happen because
                   swapcontext(co_curr__->context, co_next->context)
                   is called in pcl.c internally. */
  co_call(_worker.current_task);

  printf("fib(%d) = %d\n", data.arg, *data.retval);

  gsoc_taskqueue_delete(_worker.taskq);

  return 0;
}
