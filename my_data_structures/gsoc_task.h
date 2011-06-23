#ifndef _GSOC_TASK_H_
#define _GSOC_TASK_H_


#include "pcl_private.h"
#include <stdbool.h>


typedef coroutine gsoc_task;


/* gsoc_task_delete is not there
   because object created by co_create() is automatically deleted. */
static inline gsoc_task *
gsoc_task_new(void (*func)(void*), void *data, void *stack, int stack_size, gsoc_task* parent_task)
{
  gsoc_task* ret;
  ret = co_create(func, data, stack, stack_size);
  ret->num_children = 0;
  ret->parent = parent_task;
  if (parent_task)
    {
      __sync_add_and_fetch(&parent_task->num_children, 1);
      ret->depth = parent_task->depth + 1;
    }
  else
    ret->depth = 0;
  return ret;
}

#endif /* _GSOC_TASK_H_ */
