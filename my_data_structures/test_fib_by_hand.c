#define CO_USE_UCONEXT


#define _GNU_SOURCE
#include "pcl.h"
#include "gsoc_taskqueue.h"
#include <stdio.h>
#include <stdlib.h>


#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L

#define NUM_THREADS 1
__thread unsigned int _thread_id;
unsigned int _num_detected_threads = 0;
pthread_t _pthread_id[NUM_THREADS];

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

gsoc_worker _workers[NUM_THREADS];


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


      next_task = gsoc_taskqueue_pop(_workers[0].taskq);
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

      _workers[0].current_task = next_task;
      co_call(_workers[0].current_task);
    }
}

void gsoc_encounter_task_directive(void(*func)(void*), void* data)
{
  gsoc_task* child_task;

  child_task = gsoc_task_create(func, (omp_internal_data*)data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, _workers[0].current_task);

  gsoc_taskqueue_push(_workers[0].taskq, child_task);
}

void gsoc_encounter_taskwait_directive()
{
  if (_workers[0].current_task->num_children == 0)
    {
      /* Skip taskwait directive */
      return;
    }

  /* This task sleeps until the last child wakes it up */
  co_call(_workers[0].scheduler_task);
}

void gsoc_encounter_taskexit_directive()
{
  if (_workers[0].current_task->creator)
    {
      __sync_sub_and_fetch(&_workers[0].current_task->creator->num_children, 1);
      if (_workers[0].current_task->creator->num_children == 0)
        /* Tell parent task that all of us children finished our work
           then parent resume its work using our result. */
        gsoc_taskqueue_push(_workers[0].taskq, _workers[0].current_task->creator);
    }

  __sync_sub_and_fetch(&num_team_task, 1);
}

int fib(int N);

void fib_outlined(omp_internal_data* data)
{
  *data->retval = fib(data->arg);
  co_exit_to(_workers[0].scheduler_task);
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

void* start_master_thread(omp_internal_data* data)
{
  gsoc_task* root_task;

  cpu_set_t cpuset;
  CPU_ZERO(&cpuset);
  CPU_SET(_thread_id, &cpuset);
  pthread_setaffinity_np(pthread_self(), sizeof(cpuset), &cpuset);

  _workers[0].scheduler_task = co_create(gsoc_task_scheduler_loop, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
  root_task = gsoc_task_create((void(*)(void*))fib_outlined, data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, NULL);

  co_vp_init(); /* Necessary to set initial value for "co_curr__" in pcl.c.
                   Without this, SEGV would happen because
                   swapcontext(co_curr__->context, co_next->context)
                   is called in pcl.c internally. */
  gsoc_taskqueue_push(_workers[0].taskq, root_task);
  co_call(_workers[0].scheduler_task);
}

void gsoc_run_workers(omp_internal_data* data)
{
  _workers[0].taskq = gsoc_taskqueue_new();
  /* _workers[1].taskq = gsoc_taskqueue_new(); */

  pthread_create(&_pthread_id[0], NULL, (void*(*)(void*))start_master_thread, data);
  /* pthread_create(&_pthread_id[1], NULL, start_slave_thread, NULL); */
  pthread_join(_pthread_id[0], NULL);
  /* pthread_join(_pthread_id[1], NULL); */

  gsoc_taskqueue_delete(_workers[0].taskq);
  /* gsoc_taskqueue_delete(_workers[1].taskq); */
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

  gsoc_run_workers(&data);

  printf("fib(%d) = %d\n", data.arg, *data.retval);

  return 0;
}
