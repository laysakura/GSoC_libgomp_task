#ifndef _GSOC_TASK_H_
#define _GSOC_TASK_H_


#include "pcl.h"

typedef coroutine gsoc_task;

static inline gsoc_task*
gsoc_task_create(void (*func)(void*), void *data, void *stack, int stacksize, gsoc_task* parent_task)
{
  gsoc_task* ret;
  ret = co_create(func, data, stack, stacksize);
  pthread_mutex_init(&ret->lock, NULL);
  ret->num_children = 0;
  ret->waiting = false;
  ret->creator = parent_task;
  if (parent_task)
    {
      ret->depth = parent_task->depth + 1;
      __sync_add_and_fetch(&parent_task->num_children, 1);
    }
  else
    ret->depth = 0;
  return ret;
}


#endif /* _GSOC_TASK_H_ */
