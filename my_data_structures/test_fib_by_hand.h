#ifndef _TEST_FIB_BY_HAND_H_
#define _TEST_FIB_BY_HAND_H_


#include "pcl.h"
#include "gsoc_taskqueue.h"


#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L
#define NUM_THREADS 2

typedef struct {
  int* retval;
  int arg;
} omp_internal_data;

typedef struct {
  pthread_t pthread_id;
  gsoc_taskqueue* taskq;
  gsoc_task* current_task;
  gsoc_task* scheduler_task;
} gsoc_worker;


__thread unsigned int _thread_id;
unsigned int _num_detected_threads = 0;
pthread_t _pthread_id[NUM_THREADS];


unsigned int num_team_task;


gsoc_worker _workers[NUM_THREADS];


static inline gsoc_task*
gsoc_task_create(void (*func)(void*), void *data, void *stack, int stacksize, gsoc_task* parent_task)
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


#endif /* _TEST_FIB_BY_HAND_H_ */