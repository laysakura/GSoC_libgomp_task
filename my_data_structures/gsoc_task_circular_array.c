#include "gsoc_task_circular_array.h"
#include <string.h>
#include <assert.h>

gsoc_task_circular_array*
gsoc_task_circular_array_new(size_t capacity)
{
  gsoc_task_circular_array* this;

  this = malloc(sizeof(gsoc_task_circular_array));
  assert(this);

  this->_array = malloc(sizeof(gsoc_task*) * capacity);
  assert(this->_array);

  this->_size = capacity;

  return this;
}

void
gsoc_task_circular_array_delete(gsoc_task_circular_array* this)
{
  free(this->_array);
  free(this);
}

gsoc_task*
gsoc_task_circular_array_get(gsoc_task_circular_array* this, size_t index)
{
  return this->_array[index % this->_size];
}

void
gsoc_task_circular_array_set(gsoc_task_circular_array* this, size_t index, gsoc_task* task)
{
  this->_array[index % this->_size] = task;
}

/* `old' must be freed by caller of this function */
gsoc_task_circular_array*
gsoc_task_circular_array_get_double_sized_copy(gsoc_task_circular_array* old)
{
  gsoc_task_circular_array* new_arr;
  new_arr = gsoc_task_circular_array_new(old->_size * 2);
  memcpy(&new_arr->_array[0], &old->_array[0],
         sizeof(gsoc_task*) * old->_size);
  return new_arr;
}

