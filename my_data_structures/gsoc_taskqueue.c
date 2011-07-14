#include "gsoc_taskqueue.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

gsoc_taskqueue* gsoc_taskqueue_new()
{
  gsoc_taskqueue* this;

  this = malloc(sizeof(gsoc_taskqueue));
  assert(this);

  this->_num_queue_cells = GSOC_TASKQUEUE_INIT_SIZE;
  this->_top = this->_base = 0;
  pthread_mutex_init(&this->_lock, NULL);

  this->_taskqueue = malloc(sizeof(gsoc_task*) * this->_num_queue_cells);
  assert(this->_taskqueue);

  return this;
}
void gsoc_taskqueue_delete(gsoc_taskqueue* this)
{
  pthread_mutex_destroy(&this->_lock);
  free(this->_taskqueue);
  free(this);
}

/* Thread safe function.
   (Push doesn't need lock to taskqueue) */
void gsoc_taskqueue_push(gsoc_taskqueue* this, gsoc_task* task)
{
  /* fprintf(stderr, "gsoc_taskqueue_push: CPU%d pushed %p\n", sched_getcpu(), task); */

  this->_taskqueue[this->_top] = task;
  ++this->_top;
  __sync_synchronize();  /* write to _top and taskqueue */

  /* Extend the size of deque when `top' exceeds it. */
  if (__builtin_expect(this->_top >= this->_num_queue_cells, 0))
    {
      size_t base;

      pthread_mutex_lock(&this->_lock);

      __sync_synchronize();  /* read _base */
      base = this->_base;

      this->_num_queue_cells *= 2;
      this->_taskqueue = realloc(this->_taskqueue, sizeof(gsoc_task*) * this->_num_queue_cells);
      assert(this->_taskqueue);

      memmove(&this->_taskqueue[0], &this->_taskqueue[base],
              sizeof(gsoc_task*) * (this->_top - base));

      this->_top = this->_top - base;
      this->_base = 0;
      __sync_synchronize();         /* Ensure writing to _top and _base. */

      pthread_mutex_unlock(&this->_lock);
    }
}
/* Pop a task from the head of taskqueue.
   Returns NULL when no task exists in taskqueue.
   This is a thread safe function. */
gsoc_task* gsoc_taskqueue_pop(gsoc_taskqueue* this)
{
  gsoc_task* res;
  size_t base;

  __sync_synchronize();  /* read _base */
  base = this->_base;

  if (this->_top - base == 0)
    {
      /* fprintf(stderr, "gsoc_taskqueue_pop: CPU%d popped NULL\n", sched_getcpu()); */
      return NULL;
    }

  if (__builtin_expect(this->_top - base > GSOC_TASKQUEUE_NUM_TASKS_TOO_SMALL_TO_LOCKFREE, 1))
    {
      /* Pop without lock */
      --this->_top;
      res = this->_taskqueue[this->_top];
      __sync_synchronize();  /* write to _top and taskqueue */

      /* fprintf(stderr, "gsoc_taskqueue_pop: CPU%d popped %p\n", sched_getcpu(), res); */
      return res;
    }

  /* Need lock because other worker thread can steal the task to pop. */
  pthread_mutex_lock(&this->_lock);

  __sync_synchronize();  /* read _base */
  base = this->_base;

  if (this->_top - base == 0)
    {
      pthread_mutex_unlock(&this->_lock);
      /* fprintf(stderr, "gsoc_taskqueue_pop: CPU%d popped NULL\n", sched_getcpu()); */
      return NULL;
    }
  else
    {
      --this->_top;
      res = this->_taskqueue[this->_top];
      __sync_synchronize();  /* write to _top and taskqueue */

      pthread_mutex_unlock(&this->_lock);
      /* fprintf(stderr, "gsoc_taskqueue_pop: CPU%d popped %p\n", sched_getcpu(), res); */
      return res;
    }
}
/* Take a task from the `base' of taskqueue.
   Returns NULL when no task exists in taskqueue.
   This function is invoked only by other worker threads than `this',
   possibly by more than one threads at the same time. */
gsoc_task* gsoc_taskqueue_take(gsoc_taskqueue* this)
{
  gsoc_task* res;
  size_t top;

  __sync_synchronize();    /* Ensure visibility of _top written from victim worker thread. */
  top = this->_top;

  if (top - this->_base == 0)
    {
      /* fprintf(stderr, "gsoc_taskqueue_take: CPU%d took NULL\n", sched_getcpu()); */
      return NULL;
    }

  pthread_mutex_lock(&this->_lock);

  /* Although it has already checked whether there is a task in
     `this' queue, _base could be changed by
     other worker threads (stealer) just before acquiring lock. */
  __sync_synchronize();    /* Ensure visibility of _top written from victim worker thread. */
  top = this->_top;
  if (__builtin_expect(top - this->_base == 0, 0))
    {
      pthread_mutex_unlock(&this->_lock);
      /* fprintf(stderr, "gsoc_taskqueue_take: CPU%d took NULL\n", sched_getcpu()); */
      return NULL;
    }

  res = this->_taskqueue[this->_base];
  ++this->_base;
  __sync_synchronize();         /* Ensure writing to _base. */

  pthread_mutex_unlock(&this->_lock);
  /* fprintf(stderr, "gsoc_taskqueue_take: CPU%d took %p\n", sched_getcpu(), res); */
  return res;
}
