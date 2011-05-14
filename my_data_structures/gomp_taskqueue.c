#include "gomp_taskqueue.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

gomp_taskqueue* gomp_taskqueue_new()
{
  gomp_taskqueue* this;

  this = malloc(sizeof(gomp_taskqueue));
  assert(this);

  this->_num_queue_cells = GOMP_TASKQUEUE_INIT_SIZE;
  this->_top = this->_base = 0;
  pthread_mutex_init(&this->_lock, NULL);

  this->_taskqueue = malloc(sizeof(gomp_task*) * this->_num_queue_cells);
  assert(this->_taskqueue);

  return this;
}
void gomp_taskqueue_delete(gomp_taskqueue* this)
{
  pthread_mutex_destroy(&this->_lock);
  free(this->_taskqueue);
  free(this);
}

/* Thread safe function.
   (Push doesn't need lock to taskqueue) */
void gomp_taskqueue_push(gomp_taskqueue* this, gomp_task* task)
{
  pthread_mutex_lock(&this->_lock);

  this->_taskqueue[this->_top] = task;
  ++this->_top;

  /* Extend the size of deque when `top' exceeds it. */
  if (__builtin_expect(this->_top >= this->_num_queue_cells, 0))
    {
      this->_num_queue_cells *= 2;
      this->_taskqueue = realloc(this->_taskqueue, sizeof(gomp_task*) * this->_num_queue_cells);
      assert(this->_taskqueue);

      memcpy(&this->_taskqueue[0], &this->_taskqueue[this->_base],
             sizeof(gomp_task*) * (this->_top - this->_base));

      this->_top = this->_top - this->_base;
      this->_base = 0;
    }

  pthread_mutex_unlock(&this->_lock);
}
/* Pop a task from the head of taskqueue.
   Returns NULL when no task exists in taskqueue.
   This is a thread safe function. */
gomp_task* gomp_taskqueue_pop(gomp_taskqueue* this)
{
  gomp_task* res;

  pthread_mutex_lock(&this->_lock);

  if (this->_top - this->_base == 0)
    {
      pthread_mutex_unlock(&this->_lock);
      return NULL;
    }

  --this->_top;
  res = this->_taskqueue[this->_top];

  pthread_mutex_unlock(&this->_lock);
  return res;
}
/* Take a task from the tail of taskqueue.
   Returns NULL when no task exists in taskqueue.
   This is a thread safe function. */
gomp_task* gomp_taskqueue_take(gomp_taskqueue* this)
{
  gomp_task* res;

  pthread_mutex_lock(&this->_lock);

  if (this->_top - this->_base == 0)
    {
      pthread_mutex_unlock(&this->_lock);
      return NULL;
    }

  res = this->_taskqueue[this->_base];
  ++this->_base;

  pthread_mutex_unlock(&this->_lock);
  return res;
}
