#define CO_USE_UCONEXT


#define _GNU_SOURCE
#include "test_fib_by_hand.h"
#include "gsoc_worker.h"
#include "gsoc_env.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


gsoc_worker* _workers;
long _num_workers;
unsigned int _num_team_tasks;
unsigned int _gsoc_cutoff_depth;


void gsoc_task_scheduler_loop()
{
  while (1)
    {
      /* Never return from this function.
         So the caller of this function (task scheduling point ABI)
         doesn't have to think about context switch from this funciton. */
      gsoc_task* next_task;

      next_task = gsoc_taskqueue_pop(_workers[_thread_id].taskq);
      if (__builtin_expect(next_task == NULL, 0))
        {
          next_task = gsoc_taskqueue_take(_workers[gsoc_worker_choose_victim(_thread_id, _num_workers)].taskq);
          if (!next_task)
            {
              if (_num_team_tasks == 0)
                return; /* to main */

              continue; /* try again */
            }
        }
      _workers[_thread_id].current_task = next_task;
      co_call(_workers[_thread_id].current_task);
    }
}

void
gsoc_encounter_task_directive(void(*func)(void*), void* data)
{
  if(_workers[_thread_id].current_task->depth > _gsoc_cutoff_depth)
    {
      _workers[_thread_id].current_task->cutoff = true;

      ++_workers[_thread_id].current_task->depth;
      func(data);
      --_workers[_thread_id].current_task->depth;
    }
  else
    {
      gsoc_task* child_task;

<<<<<<< HEAD
      child_task = gsoc_task_new(func, (omp_internal_data*)data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, _workers[_thread_id].current_task);
      __sync_add_and_fetch(&num_team_task, 1);
=======
      child_task = gsoc_task_create(func, (omp_internal_data*)data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, _workers[_thread_id].current_task);
>>>>>>> 8fda589c9d61bd6b27afa1065940d2d18b84cbb5
      child_task->cutoff = false;
      gsoc_taskqueue_push(_workers[_thread_id].taskq, child_task);
      __sync_add_and_fetch(&_num_team_tasks, 1);
    }
}

void
gsoc_encounter_taskwait_directive()
{
  if (_workers[_thread_id].current_task->num_children == 0
      || _workers[_thread_id].current_task->cutoff)
      return;

  /* This task sleeps until the last child wakes it up */
  co_call(_workers[_thread_id].scheduler_task);
}

void
gsoc_encounter_taskexit_directive()
{
  if (!_workers[_thread_id].current_task->cutoff)
    {
      __sync_sub_and_fetch(&_num_team_tasks, 1);

      if (_workers[_thread_id].current_task->parent)
        {
          __sync_sub_and_fetch(&_workers[_thread_id].current_task->parent->num_children, 1);
          if (_workers[_thread_id].current_task->parent->num_children == 0)
            /* Tell parent task that all of us children finished our work
               then parent resume its work using our result. */
            /* This is illegal for tied task since parent task might be executed on other worker */
            gsoc_taskqueue_push(_workers[_thread_id].taskq, _workers[_thread_id].current_task->parent);
        }
    }
  else if (_workers[_thread_id].current_task->cutoff
<<<<<<< HEAD
           && _workers[_thread_id].current_task->depth == GSOC_CUTOFF_DEPTH + 1)
    {
      __sync_sub_and_fetch(&num_team_task, 1);
=======
           && _workers[_thread_id].current_task->depth == _gsoc_cutoff_depth + 1)
    {
      /* When the root cutoff task exits */
      __sync_sub_and_fetch(&_num_team_tasks, 1);
>>>>>>> 8fda589c9d61bd6b27afa1065940d2d18b84cbb5
      _workers[_thread_id].current_task->cutoff = false;

      if (_workers[_thread_id].current_task->parent)
        {
          __sync_sub_and_fetch(&_workers[_thread_id].current_task->parent->num_children, 1);
          if (_workers[_thread_id].current_task->parent->num_children == 0)
            /* Tell parent task that all of us children finished our work
               then parent resume its work using our result. */
            gsoc_taskqueue_push(_workers[_thread_id].taskq, _workers[_thread_id].current_task->parent);
        }
    }
  /* Cutoff task does nothing here */
}

int fib(int N);

void fib_outlined(omp_internal_data* data)
{
  *data->retval = fib(data->arg);
  if (_workers[_thread_id].current_task->depth <= _gsoc_cutoff_depth)
    co_exit_to(_workers[_thread_id].scheduler_task);  /* TODO: make wrap for this conditional exit */
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

void gsoc_setaffinity()
{
  cpu_set_t cpuset;
  CPU_ZERO(&cpuset);
  CPU_SET(_thread_id, &cpuset);
  pthread_setaffinity_np(pthread_self(), sizeof(cpuset), &cpuset);
}

/* Called by pthread_create() */
void* start_thread(int* rank)
{
  _thread_id = *rank;

  gsoc_setaffinity();
<<<<<<< HEAD
  fprintf(stderr, "Starting thread on CPU %d\n", sched_getcpu());

  co_thread_init(); /* Necessary to set initial value for "co_curr__" in pcl.c.
=======
  co_vp_init(); /* Necessary to set initial value for "co_curr__" in pcl.c.
>>>>>>> 8fda589c9d61bd6b27afa1065940d2d18b84cbb5
                   Without this, SEGV would happen because
                   swapcontext(co_curr__->context, co_next->context)
                   is called in pcl.c internally. */
  if (*rank == 0)
    fprintf(stderr, "start_threadStarting Master Thread on CPU %d. Scheduler is %p\n", sched_getcpu(), _workers[_thread_id].scheduler_task);
  else
    fprintf(stderr, "Starting Slave Thread on CPU %d. Scheduler is %p\n", sched_getcpu(), _workers[_thread_id].scheduler_task);

  co_call(_workers[_thread_id].scheduler_task);

  return NULL;
}

void setup_master_thread(omp_internal_data* data, int rank)
{
  gsoc_task* root_task;

  _workers[rank].scheduler_task = co_create(gsoc_task_scheduler_loop, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);

<<<<<<< HEAD
  root_task = gsoc_task_new((void(*)(void*))fib_outlined, data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, NULL);
  __sync_add_and_fetch(&num_team_task, 1);
=======
  root_task = gsoc_task_create((void(*)(void*))fib_outlined, data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, NULL);
  fprintf(stderr, "Root task is %p\n", root_task);
>>>>>>> 8fda589c9d61bd6b27afa1065940d2d18b84cbb5
  gsoc_taskqueue_push(_workers[rank].taskq, root_task);
  __sync_add_and_fetch(&_num_team_tasks, 1);
}

void setup_slave_thread(int rank)
{
  _workers[rank].scheduler_task = co_create(gsoc_task_scheduler_loop, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);
}

void gsoc_run_workers(omp_internal_data* data)
{
  long i;
  int ranks[_num_workers];

  _num_workers = gsoc_get_num_workers();
  _gsoc_cutoff_depth = gsoc_get_cutoff_depth();

  for (i = 0; i < _num_workers; ++i)
    ranks[i] = i;

  _workers = malloc(sizeof(gsoc_worker) * _num_workers);
  _pthread_id = malloc(sizeof(pthread_t) * _num_workers);
  assert(_workers);
  assert(_pthread_id);

  /* Master thread */
  _workers[0].taskq = gsoc_taskqueue_new();
  setup_master_thread(data, 0);

  /* Slave threads */
  for (i = 1; i < _num_workers; ++i)
    {
      _workers[i].taskq = gsoc_taskqueue_new();
      setup_slave_thread(i);
    }

  pthread_create(&_pthread_id[0], NULL, (void*(*)(void*))start_thread, &ranks[0]);
  for (i = 1; i < _num_workers; ++i)
    pthread_create(&_pthread_id[i], NULL, (void*(*)(void*))start_thread, &ranks[i]);

  pthread_join(_pthread_id[0], NULL);
  for (i = 1; i < _num_workers; ++i)
    pthread_join(_pthread_id[i], NULL);

  gsoc_taskqueue_delete(_workers[0].taskq);
  for (i = 1; i < _num_workers; ++i)
    gsoc_taskqueue_delete(_workers[i].taskq);

  free(_workers);
  free(_pthread_id);
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

  fprintf(stderr, "fib(%d) = %d\n", data.arg, *data.retval);

  return 0;
}
