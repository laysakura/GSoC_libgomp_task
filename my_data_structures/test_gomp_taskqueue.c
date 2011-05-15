#define _GNU_SOURCE
#include "gomp_taskqueue.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <assert.h>
#include <utmpx.h>

#ifndef TESTVAL_EXTENDS  /* It may be defined by Makefile */
#define TESTVAL_EXTENDS 1
#endif

typedef struct _worker {
  int id;
  cpu_set_t cpu;
  gomp_taskqueue* my_taskq;
  gomp_taskqueue* victim_taskq;
  gomp_task* tasks;
} worker;


void* parallel_push_pop_take(void* s)
{
  worker* data = (worker*)s;
  gomp_task* task;
  int i;
  pthread_setaffinity_np(pthread_self(), sizeof(data->cpu), &data->cpu);

  /* Think about fib where two tasks are created by one task */
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * TESTVAL_EXTENDS / 2; ++i) {
    gomp_taskqueue_push(data->my_taskq, &data->tasks[2*i]);
    gomp_taskqueue_push(data->my_taskq, &data->tasks[2*i + 1]);
    task = gomp_taskqueue_pop(data->my_taskq);
    if (task && data->id == 0)
      printf("%d pop CPU%d\n", task->_num_children, sched_getcpu()); /* These values are evaluated by `make test' script */
  }

  /* All tasks are created, now just consume then (with other worker queue).
     If no task is in the queue, steal from others. */
  while (1) {
    task = gomp_taskqueue_pop(data->my_taskq);
    if (task && data->id == 0)
      printf("%d pop CPU%d\n", task->_num_children, sched_getcpu()); /* These values are evaluated by `make test' script */
    if (!task)
      {
        task = gomp_taskqueue_take(data->victim_taskq);
        if (task)
          printf("%d take CPU%d\n", task->_num_children, sched_getcpu()); /* These values are evaluated by `make test' script */
        else
          return NULL;
      }
  }
}

int main()
{
  int i;

  /* for sequential use */
  gomp_taskqueue* q;
  gomp_task *tasks;

  /* for parallel use */
  gomp_taskqueue *taskq0, *taskq1;
  cpu_set_t cpuset;
  pthread_t tid0, tid1;
  worker worker0, worker1;

  /* initializations for test */
  tasks = malloc(sizeof(gomp_task) * GOMP_TASKQUEUE_INIT_SIZE * 100);
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 100; ++i)
    tasks[i]._num_children = i;
  q = gomp_taskqueue_new();
  taskq0 = gomp_taskqueue_new();
  taskq1 = gomp_taskqueue_new();

  /* /\* push+pop *\/ */
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 100; ++i)
    gomp_taskqueue_push(q, &tasks[i]);
  for (i = GOMP_TASKQUEUE_INIT_SIZE * 100 - 1; i >= 0 ; --i)
    assert(gomp_taskqueue_pop(q)->_num_children == i);
  /* pop for empty deque */
  assert(gomp_taskqueue_pop(q) == NULL);

  /* push+take */
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 100; ++i)
    gomp_taskqueue_push(q, &tasks[i]);
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 100; ++i)
    assert(gomp_taskqueue_take(q)->_num_children == i);
  /* take for empty deque */
  assert(gomp_taskqueue_take(q) == NULL);


  /* Emulate 2 worker queues */
  CPU_ZERO(&cpuset);
  CPU_SET(0, &cpuset);
  worker0.cpu = cpuset;
  worker0.id = 0;
  worker0.my_taskq = taskq0;
  worker0.victim_taskq = taskq1;
  worker0.tasks = tasks;

  CPU_ZERO(&cpuset);
  CPU_SET(1, &cpuset);
  worker1.cpu = cpuset;
  worker1.id = 1;
  worker1.my_taskq = taskq1;
  worker1.victim_taskq = taskq0;
  worker1.tasks = tasks;

  pthread_create(&tid0, NULL, parallel_push_pop_take, &worker0);
  pthread_create(&tid1, NULL, parallel_push_pop_take, &worker1);

  pthread_join(tid0, NULL);
  pthread_join(tid1, NULL);

  /* finalization for test */
  gomp_taskqueue_delete(taskq0);
  gomp_taskqueue_delete(taskq1);
  gomp_taskqueue_delete(q);
  free(tasks);

  return 0;
}
