#include "gomp_taskqueue.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>






#include <stdio.h>






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
  this->_taskqueue[this->_top] = task;
  ++this->_top;
  __sync_synchronize();         /* Ensure writing to _taskqueue and _top.
                                   TODO: Use atomic_write_barrier() in libgomp instead. */

  fprintf(stderr, "Push:%d lock:no top:%d base:%d cpu:%d\n", this->_taskqueue[this->_top - 1]->_num_children, this->_top - 1, this->_base, sched_getcpu());

  /* Extend the size of deque when `top' exceeds it. */
  if (__builtin_expect(this->_top >= this->_num_queue_cells, 0))
    {
      size_t base;

      pthread_mutex_lock(&this->_lock);

      __sync_synchronize();    /* Ensure visibility of _base written from other worker thread.
                                  TODO: Use atomic_write_barrier() in libgomp instead. */
      base = this->_base;

      this->_num_queue_cells *= 2;
      this->_taskqueue = realloc(this->_taskqueue, sizeof(gomp_task*) * this->_num_queue_cells);
      assert(this->_taskqueue);

      /* memmove(&this->_taskqueue[0], &this->_taskqueue[base], */
      /*         sizeof(gomp_task*) * (this->_top - base)); */

      /* this->_top = this->_top - base; */
      /* this->_base = 0; */
      /* __sync_synchronize();         /\* Ensure writing to _top and _base. */
      /*                                  TODO: Use atomic_write_barrier() in libgomp instead. *\/ */

      pthread_mutex_unlock(&this->_lock);
    }
}
/* Pop a task from the head of taskqueue.
   Returns NULL when no task exists in taskqueue.
   This is a thread safe function. */
gomp_task* gomp_taskqueue_pop(gomp_taskqueue* this)
{
  gomp_task* res;
  size_t base;

  __sync_synchronize();    /* Ensure visibility of _base written from other worker thread.
                              TODO: Use atomic_write_barrier() in libgomp instead. */
  base = this->_base;

  if (this->_top - base == 0)
    return NULL;

  if (this->_top - base > GOMP_TASKQUEUE_NUM_TASKS_TOO_SMALL_TO_LOCKFREE)
    {
      /* Pop without lock */
      --this->_top;
      res = this->_taskqueue[this->_top];
      __sync_synchronize();         /* Ensure writing to _top.
                                       TODO: Use atomic_write_barrier() in libgomp instead. */
      fprintf(stderr, "Pop:%d lock:no top:%d base:%d cpu:%d\n", res->_num_children, this->_top, base, sched_getcpu());
      return res;
    }

  /* Need lock because other worker thread can steal the task to pop. */
  pthread_mutex_lock(&this->_lock);

  __sync_synchronize();    /* Ensure visibility of _base written from other worker thread.
                              TODO: Use atomic_write_barrier() in libgomp instead. */
  base = this->_base;

  if (this->_top - base == 0)
    {
      pthread_mutex_unlock(&this->_lock);
      return NULL;
    }
  else if (__builtin_expect(this->_top - base < 0, 0))
    {
      /* move _top and _base to the initial position
         when `take' occurs too much. */
      this->_top = this->_base = 0;
      pthread_mutex_unlock(&this->_lock);
      return NULL;
    }
  else
    {
      --this->_top;
      res = this->_taskqueue[this->_top];
      __sync_synchronize();         /* Ensure writing to _top.
                                       TODO: Use atomic_write_barrier() in libgomp instead. */
      fprintf(stderr, "Pop:%d lock:yes top:%d base:%d cpu:%d\n", res->_num_children, this->_top, base, sched_getcpu());
      pthread_mutex_unlock(&this->_lock);
      return res;
    }
}
/* Take a task from the `base' of taskqueue.
   Returns NULL when no task exists in taskqueue.
   This function is invoked only by other worker threads than `this',
   possibly by more than one threads at the same time. */
gomp_task* gomp_taskqueue_take(gomp_taskqueue* this)
{
  gomp_task* res;
  size_t top;

  __sync_synchronize();    /* Ensure visibility of _top written from victim worker thread.
                              TODO: Use atomic_write_barrier() in libgomp instead. */
  top = this->_top;

  if (top - this->_base == 0)
    return NULL;

  /* Lock _taskqueue and _base */
  pthread_mutex_lock(&this->_lock);

  /* Although it has already checked whether there is a task in
     `this' queue, _base could be changed by
     other worker threads (stealer) just before acquiring lock. */
  __sync_synchronize();    /* Ensure visibility of _top written from victim worker thread.
                              TODO: Use atomic_write_barrier() in libgomp instead. */
  top = this->_top;
  if (__builtin_expect(top - this->_base == 0, 0))
    {
      pthread_mutex_unlock(&this->_lock);
      return NULL;
    }

  res = this->_taskqueue[this->_base];
  ++this->_base;
  __sync_synchronize();         /* Ensure writing to _base.
                                   TODO: Use atomic_write_barrier() in libgomp instead. */

  fprintf(stderr, "Take:%d lock:yes top:%d base:%d cpu:%d\n", res->_num_children, top, this->_base - 1, sched_getcpu());
  pthread_mutex_unlock(&this->_lock);
  return res;
}
