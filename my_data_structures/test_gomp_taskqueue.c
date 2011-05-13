#include "gomp_taskqueue.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <assert.h>

#define NUM_THREADS 4

typedef struct _for_parallel_access_to_q {
  gomp_taskqueue* q;
  gomp_task* tasks;
  int* retreived_values;
  size_t retreived_values_index;
} for_parallel_access_to_q;


void* parallel_push(void* s)
{
  for_parallel_access_to_q* data = (for_parallel_access_to_q*)s;
  int i;
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 2; ++i) {
    gomp_taskqueue_push(data->q, &data->tasks[i]);
  }
  return NULL;
}
void* parallel_pop(void* s)
{
  for_parallel_access_to_q* data = (for_parallel_access_to_q*)s;
  gomp_task* task;
  int i;
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 2; ++i) {
    task = gomp_taskqueue_pop(data->q);
    if (task)
      printf("%d\n", task->_num_children); /* These values are evaluated by `make test' script */
  }
  return NULL;
}
void* parallel_take(void* s)
{
  for_parallel_access_to_q* data = (for_parallel_access_to_q*)s;
  gomp_task* task;
  int i;
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 2; ++i) {
    task = gomp_taskqueue_take(data->q);
    if (task)
      printf("%d\n", task->_num_children);  /* These values are evaluated by `make test' script */
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
  gomp_taskqueue* pq;
  pthread_t tid[NUM_THREADS];
  for_parallel_access_to_q data;

  /* initializations for test */
  tasks = malloc(sizeof(gomp_task) * GOMP_TASKQUEUE_INIT_SIZE * 100);
  for (i = 0; i < GOMP_TASKQUEUE_INIT_SIZE * 100; ++i)
    tasks[i]._num_children = i;
  q = gomp_taskqueue_new();
  pq = gomp_taskqueue_new();

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
  data.q = pq;
  data.tasks = tasks;

  pthread_create(&tid[0], NULL, parallel_push, &data);
  pthread_create(&tid[1], NULL, parallel_pop, &data);
  /* pthread_create(&tid[2], NULL, parallel_push, &data); */
  pthread_create(&tid[3], NULL, parallel_take, &data);

  pthread_join(tid[0], NULL);
  pthread_join(tid[1], NULL);
  /* pthread_join(tid[2], NULL); */
  pthread_join(tid[3], NULL);


  /* 現状，CPUは200%に達していなさそうだが，これはlockを取っているためと考えられる．
     次は，中島さん譲りの緻密なlock戦略の実装・テストに移る */


  /* finalization for test */
  gomp_taskqueue_delete(pq);
  gomp_taskqueue_delete(q);
  free(tasks);

  return 0;
}
