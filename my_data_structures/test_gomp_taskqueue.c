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
  cpu_set_t cpu;
  gomp_taskqueue* my_taskq;
  gomp_taskqueue* victim_taskq;
  gomp_task* tasks;
} worker;


void* parallel_push(void* s)
{
  worker* data = (worker*)s;
  int i;
  pthread_setaffinity_np(pthread_self(), sizeof(data->cpu), &data->cpu);

  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * TESTVAL_EXTENDS; ++i) {
    gomp_taskqueue_push(data->my_taskq, &data->tasks[i]);
  }
  return NULL;
}
void* parallel_pop(void* s)
{
  worker* data = (worker*)s;
  gomp_task* task;
  int i;
  pthread_setaffinity_np(pthread_self(), sizeof(data->cpu), &data->cpu);

  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * TESTVAL_EXTENDS; ++i) {
    task = gomp_taskqueue_pop(data->my_taskq);
    if (task)
      printf("%d pop CPU%d\n", task->_num_children, sched_getcpu()); /* These values are evaluated by `make test' script */
  }
  return NULL;
}
void* parallel_take(void* s)
{
  worker* data = (worker*)s;
  gomp_task* task;
  int i;
  pthread_setaffinity_np(pthread_self(), sizeof(data->cpu), &data->cpu);

  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * TESTVAL_EXTENDS; ++i) {
    task = gomp_taskqueue_take(data->victim_taskq);
    if (task)
      printf("%d take CPU%d\n", task->_num_children, sched_getcpu());  /* These values are evaluated by `make test' script */
  }
  return NULL;
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
  pthread_t tid_pop, tid_push, tid_take;
  worker worker0, worker1;

  /* initializations for test */
  tasks = malloc(sizeof(gomp_task) * GOMP_TASKQUEUE_INIT_SIZE * 100);
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 100; ++i)
    tasks[i]._num_children = i;
  q = gomp_taskqueue_new();
  taskq0 = gomp_taskqueue_new();
  taskq1 = gomp_taskqueue_new();

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


  /* push/pop/take (parallel) */
  CPU_ZERO(&cpuset);
  CPU_SET(0, &cpuset);
  worker0.cpu = cpuset;
  worker0.my_taskq = taskq0;
  worker0.tasks = tasks;

  CPU_ZERO(&cpuset);
  CPU_SET(1, &cpuset);
  worker1.cpu = cpuset;
  worker1.my_taskq = taskq1;
  worker1.victim_taskq = taskq0;

  pthread_create(&tid_push, NULL, parallel_push, &worker0);
  pthread_create(&tid_pop, NULL, parallel_pop, &worker0);
  pthread_create(&tid_take, NULL, parallel_take, &worker1);

  pthread_join(tid_push, NULL);
  pthread_join(tid_pop, NULL);
  pthread_join(tid_take, NULL);


  /* 現状，CPUは200%に達していなさそうだが，これはlockを取っているためと考えられる．
     次は，中島さん譲りの緻密なlock戦略の実装・テストに移る */


  /* finalization for test */
  gomp_taskqueue_delete(taskq0);
  gomp_taskqueue_delete(taskq1);
  gomp_taskqueue_delete(q);
  free(tasks);

  return 0;
}
