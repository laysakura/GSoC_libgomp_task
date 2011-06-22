#ifndef _TEST_FIB_BY_HAND_H_
#define _TEST_FIB_BY_HAND_H_


#include "pcl_callgraph.h"
#include "gsoc_taskqueue.h"
#include <stdio.h>


#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L
#define GSOC_CUTOFF_DEPTH 8


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
pthread_t* _pthread_id;


unsigned int num_team_task;


gsoc_worker* _workers;


unsigned long long _callgraph_num_tasks = 0;


static inline gsoc_task*
gsoc_task_create(void (*func)(void*), void *data, void *stack, int stacksize, gsoc_task* parent_task)
{
  gsoc_task* ret;
  ret = co_create(func, data, stack, stacksize);
  ret->num_children = 0;
  ret->creator = parent_task;
  __sync_add_and_fetch(&num_team_task, 1);
  if (__builtin_expect(parent_task != NULL, 1)) /* Fauls only if the task to be created is root task */
    {
      __sync_add_and_fetch(&parent_task->num_children, 1);
      ret->depth = parent_task->depth + 1;
    }
  else
    ret->depth = 0;

  /* Call graph */
  ret->callgraph_task_id = __sync_add_and_fetch(&_callgraph_num_tasks, 1);
  ret->callgraph_num_all_children = 0;
  ret->callgraph_N_for_fib = ((omp_internal_data*)data)->arg;
  if (__builtin_expect(parent_task != NULL, 1))
    {
      ret->callgraph_parent_task_id = parent_task->callgraph_task_id;
      ret->callgraph_nth_child =
        __sync_add_and_fetch(&parent_task->callgraph_num_all_children, 1);
    }
  else
    {
      ret->callgraph_parent_task_id = -1;
      ret->callgraph_nth_child = 0;
    }
  printf("my_id:%lld,parent:%lld,i_am_nth_child:%d,cpuid:%d,extra_id:%d\n", ret->callgraph_task_id, ret->callgraph_parent_task_id, ret->callgraph_nth_child, sched_getcpu(), ret->callgraph_N_for_fib);

  return ret;
}

#define gsoc_cutoff_cond() (_workers[_thread_id].current_task->depth > GSOC_CUTOFF_DEPTH)


#endif /* _TEST_FIB_BY_HAND_H_ */
