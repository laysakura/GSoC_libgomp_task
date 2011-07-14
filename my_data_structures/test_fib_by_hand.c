#define CO_USE_UCONEXT


#define _GNU_SOURCE
#include "pcl.h"
#include "test_fib_by_hand.h"
#include "gsoc_taskqueue.h"
#include "gsoc_worker.h"
#include "gsoc_env.h"
#include "gsoc_time.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <time.h>

static inline void
laysakura_log(char* s)
{
  struct timespec tp;
  clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tp);
  fprintf(stderr, "%d.%09ld CPU:%d %s\n", (int)tp.tv_sec, (long int)tp.tv_nsec, sched_getcpu(), s);
}


gsoc_worker* _workers;
long _num_workers;
unsigned int _num_team_tasks;
unsigned int _gsoc_cutoff_depth;


void gsoc_task_scheduler_loop()
{
  int i = 0;

  while (1)
    {
      /* Never return from this function.
         So the caller of this function (task scheduling point ABI)
         doesn't have to think about context switch from this funciton. */
      gsoc_task* next_task;
      int victim;

      ++i;

      next_task = gsoc_taskqueue_pop(_workers[_thread_id].taskq);
      if (__builtin_expect(next_task == NULL, 0))
        {
          victim = gsoc_worker_choose_victim(_thread_id, _num_workers);
          next_task = gsoc_taskqueue_take(_workers[victim].taskq);

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

      child_task = gsoc_task_create(func, (omp_internal_data*)data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, _workers[_thread_id].current_task);
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
  _workers[_thread_id].current_task->waiting = true;
  co_call(_workers[_thread_id].scheduler_task);
}

void
gsoc_finish_current_task()
{
  if (!_workers[_thread_id].current_task->cutoff)
    {
      __sync_sub_and_fetch(&_num_team_tasks, 1);

      if (_workers[_thread_id].current_task->creator)
        {
          if (_workers[_thread_id].current_task->creator->num_children <= 2)
            {
              /* If there are only two children, it is possible that
                 both of them finishes almost at the same time.
                 If it happens, parent of them would be waken up by both of them.
                 So in order to save consistensy, creator->num_children should be locked
                 when there are only two children. */
              pthread_mutex_lock(&_workers[_thread_id].current_task->creator->lock);
              --_workers[_thread_id].current_task->creator->num_children;
              if (_workers[_thread_id].current_task->creator->num_children == 0
                  && _workers[_thread_id].current_task->creator->waiting)
                {
                  /* Tell parent task that all of us children finished our work
                     then parent resume its work using our result. */
                  _workers[_thread_id].current_task->creator->waiting = false;
                  pthread_mutex_unlock(&_workers[_thread_id].current_task->creator->lock);
                  gsoc_taskqueue_push(_workers[_thread_id].taskq, _workers[_thread_id].current_task->creator);
                }
              else
                pthread_mutex_unlock(&_workers[_thread_id].current_task->creator->lock);
            }
          else
            {
              __sync_sub_and_fetch(&_workers[_thread_id].current_task->creator->num_children, 1);
              if (_workers[_thread_id].current_task->creator->num_children == 0
                  && _workers[_thread_id].current_task->creator->waiting)
                {
                  /* Tell parent task that all of us children finished our work
                     then parent resume its work using our result. */
                  _workers[_thread_id].current_task->creator->waiting = false;
                  gsoc_taskqueue_push(_workers[_thread_id].taskq, _workers[_thread_id].current_task->creator);
                }
            }
        }
      /* ここをco_call(scheduler)にすると，current_taskの実行は今後ない．
         つまり，co_runnerを最後まで実行できないので，メモリリークになる */
      /* co_exit_to(scheduler)だと，確かにメモリリークは観測されない． */
      co_exit_to(_workers[_thread_id].scheduler_task, _thread_id);
    }
  else if (_workers[_thread_id].current_task->cutoff
           && _workers[_thread_id].current_task->depth == _gsoc_cutoff_depth + 1)
    {
      /* When the root cutoff task exits */
      __sync_sub_and_fetch(&_num_team_tasks, 1);
      _workers[_thread_id].current_task->cutoff = false;

      if (_workers[_thread_id].current_task->creator)
        {
          if (_workers[_thread_id].current_task->creator->num_children <= 2)
            {
              /* If there are only two children, it is possible that
                 both of them finishes almost at the same time.
                 If it happens, parent of them would be waken up by both of them.
                 So in order to save consistensy, creator->num_children should be locked
                 when there are only two children. */
              pthread_mutex_lock(&_workers[_thread_id].current_task->creator->lock);
              --_workers[_thread_id].current_task->creator->num_children;
              if (_workers[_thread_id].current_task->creator->num_children == 0
                  && _workers[_thread_id].current_task->creator->waiting)
                {
                  /* Tell parent task that all of us children finished our work
                     then parent resume its work using our result. */
                  _workers[_thread_id].current_task->creator->waiting = false;
                  pthread_mutex_unlock(&_workers[_thread_id].current_task->creator->lock);
                  gsoc_taskqueue_push(_workers[_thread_id].taskq, _workers[_thread_id].current_task->creator);
                }
              else
                pthread_mutex_unlock(&_workers[_thread_id].current_task->creator->lock);
            }
          else
            {
              __sync_sub_and_fetch(&_workers[_thread_id].current_task->creator->num_children, 1);
              if (_workers[_thread_id].current_task->creator->num_children == 0
                  && _workers[_thread_id].current_task->creator->waiting)
                {
                  /* Tell parent task that all of us children finished our work
                     then parent resume its work using our result. */
                  _workers[_thread_id].current_task->creator->waiting = false;
                  gsoc_taskqueue_push(_workers[_thread_id].taskq, _workers[_thread_id].current_task->creator);
                }
            }
        }
    }
  /* Cutoff task does nothing here */
}

int fib(int N);

void fib_outlined(omp_internal_data* data)
{
  *data->retval = fib(data->arg);
  gsoc_finish_current_task();
}

int fib(int N)
{
  int f1, f2;
  omp_internal_data omp_data1, omp_data2;

  if (N <= 1)
    return N;


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

  return f1 + f2;
}

void gsoc_setaffinity(int thread_id)
{
  cpu_set_t cpuset;
  CPU_ZERO(&cpuset);
  CPU_SET(thread_id, &cpuset);
  if (pthread_setaffinity_np(pthread_self(), sizeof(cpuset), &cpuset) != 0)
    {
      fprintf(stderr, "gsoc_setaffinity: Error on setting CPU affinity.\n");
      exit(1);
    }
}

/* Called by pthread_create() */
void* start_thread(int* rank)
{
  _thread_id = *rank;

  gsoc_setaffinity(*rank);
  co_vp_init(); /* Necessary to set initial value for "co_curr__" in pcl.c.
                   Without this, SEGV would happen because
                   swapcontext(co_curr__->context, co_next->context)
                   is called in pcl.c internally. */
  if (*rank == 0)
    fprintf(stderr, "Starting Master Thread on CPU%d. Scheduler is %p\n", sched_getcpu(), _workers[_thread_id].scheduler_task);
  else
    fprintf(stderr, "Starting Slave Thread on CPU%d. Scheduler is %p\n", sched_getcpu(), _workers[_thread_id].scheduler_task);

  co_call(_workers[_thread_id].scheduler_task);

  return NULL;
}

void setup_master_thread(omp_internal_data* data, int rank)
{
  gsoc_task* root_task;

  _workers[rank].scheduler_task = co_create(gsoc_task_scheduler_loop, NULL, NULL, OMP_TASK_STACK_SIZE_DEFAULT);

  root_task = gsoc_task_create((void(*)(void*))fib_outlined, data, NULL, OMP_TASK_STACK_SIZE_DEFAULT, NULL);
  fprintf(stderr, "Root task is %p\n", root_task);
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


void
gsoc_get_env(long int* num_workers, unsigned int* cutoff_depth)
{
  *num_workers = gsoc_get_num_workers();
  *cutoff_depth = gsoc_get_cutoff_depth();
}


int main(int argc, char** argv)
{
  omp_internal_data data;
  int retval;
  double t1, t2;
  data.retval = &retval;

  if (argc != 2)
    {
      fprintf(stderr, "ARGS: <N for fib(N)>\n");
      exit(1);
    }
  data.arg = atoi(argv[1]);

  gsoc_get_env(&_num_workers, &_gsoc_cutoff_depth);

  t1 = gettimeofday_sec();
  gsoc_run_workers(&data);
  t2 = gettimeofday_sec();

  fprintf(stdout, "fib(%d):%d\n", data.arg, *data.retval);
  fprintf(stdout, "exectime:%f\n", t2 - t1);

  return 0;
}
