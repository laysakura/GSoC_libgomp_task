#define _GNU_SOURCE
#include "gomp_taskqueue.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <assert.h>
#include <utmpx.h>
#include <unistd.h>

#ifndef TESTVAL_EXTENDS  /* It may be defined by Makefile */
#define TESTVAL_EXTENDS 1
#endif

typedef struct _worker {
  int id;
  cpu_set_t cpu;
  gomp_taskqueue* my_taskq;
  gomp_task* tasks;
  struct _worker* workers;
  long num_workers;
  int logged_worker;
} worker;


void* parallel_push_pop_take(void* s)
{
  worker* data = (worker*)s;
  gomp_task* task;
  size_t victim;
  int i;
  pthread_setaffinity_np(pthread_self(), sizeof(data->cpu), &data->cpu);

  /* Think about fib where two tasks are created by one task */
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * TESTVAL_EXTENDS / 2; ++i) {
    gomp_taskqueue_push(data->my_taskq, &data->tasks[2*i]);
    gomp_taskqueue_push(data->my_taskq, &data->tasks[2*i + 1]);
    task = gomp_taskqueue_pop(data->my_taskq);
    if (task && data->id == data->logged_worker)
      printf("%d is popped by CPU%d\n", task->_num_children, sched_getcpu()); /* These values are evaluated by `make test' script */
  }

  /* All tasks are created, now just consume then (with other worker queue).
     If no task is in the queue, steal from others. */
  while (1) {
    task = gomp_taskqueue_pop(data->my_taskq);
    if (task && data->id == data->logged_worker)
      printf("%d is popped by CPU%d\n", task->_num_children, sched_getcpu()); /* These values are evaluated by `make test' script */
    if (!task)
      {
        do
          {
            victim = random() % data->num_workers;
          }
        while (victim == data->id);
        task = gomp_taskqueue_take(data->workers[victim].my_taskq);
        if (task && victim == data->logged_worker)
          printf("%d is taken by CPU%d from CPU%d\n", task->_num_children, sched_getcpu(), (int)victim); /* These values are evaluated by `make test' script */
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
  long num_cpu = sysconf(_SC_NPROCESSORS_CONF);
  gomp_taskqueue *taskqs[num_cpu];
  cpu_set_t cpuset;
  pthread_t tids[num_cpu];
  worker workers[num_cpu];
  int logged_worker = random() % num_cpu;

  /* initializations for test */
  tasks = malloc(sizeof(gomp_task) * GOMP_TASKQUEUE_INIT_SIZE * 100);
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 100; ++i)
    tasks[i]._num_children = i;
  q = gomp_taskqueue_new();
  for (i = 0; i < num_cpu; ++i)
    taskqs[i] = gomp_taskqueue_new();

  /* push+pop */
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


  /* Emulate workers */
  fprintf(stderr, "==========\nWith %d CPUs\n===========\n", (int)num_cpu);

  for (i = 0; i < num_cpu; ++i) {
    CPU_ZERO(&cpuset);
    CPU_SET(i, &cpuset);
    workers[i].cpu = cpuset;
    workers[i].id = i;
    workers[i].my_taskq = taskqs[i];
    workers[i].tasks = tasks;
    workers[i].workers = workers;
    workers[i].num_workers = num_cpu;
    workers[i].logged_worker = logged_worker;

    pthread_create(&tids[i], NULL, parallel_push_pop_take, &workers[i]);
  }
  for (i = 0; i < num_cpu; ++i)
    pthread_join(tids[i], NULL);


  /* finalization for test */
  for (i = 0; i < num_cpu; ++i)
    gomp_taskqueue_delete(taskqs[i]);
  gomp_taskqueue_delete(q);
  free(tasks);

  return 0;
}
