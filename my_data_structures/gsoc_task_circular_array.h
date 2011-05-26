/* Circular array implemented after Chapter 16 of "The Art of Multiprocessor Programming"
   Always use from push/pop/take of taskqueue. task_circular_array itself is not thread safe. */

#ifndef _GSOC_TASK_CIRCULAR_ARRAY_H_
#define _GSOC_TASK_CIRCULAR_ARRAY_H_

#include "gsoc_task.h"
#include <stdlib.h>

typedef struct _gsoc_task_circular_array {
  gsoc_task** _array;
  unsigned long long _size;
} gsoc_task_circular_array;

gsoc_task_circular_array*
gsoc_task_circular_array_new(unsigned long long capacity);

void
gsoc_task_circular_array_delete(gsoc_task_circular_array* this);

gsoc_task*
gsoc_task_circular_array_get(gsoc_task_circular_array* this, unsigned long long index);

void
gsoc_task_circular_array_set(gsoc_task_circular_array* this, unsigned long long index, gsoc_task* task);

gsoc_task_circular_array*
gsoc_task_circular_array_get_double_sized_copy(gsoc_task_circular_array* old);

static inline unsigned long long
gsoc_task_circular_array_size(gsoc_task_circular_array* this)
{
  return this->_size;
}


#endif /* _GSOC_TASK_CIRCULAR_ARRAY_H_ */
