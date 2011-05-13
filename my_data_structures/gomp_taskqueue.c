#include "gomp_taskqueue.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

gomp_taskqueue* gomp_taskqueue_new()
{
  gomp_taskqueue* this;

  this = malloc(sizeof(gomp_taskqueue));
  assert(this);

  this->_num_tasks = 0;
  this->_num_queue_cells = GOMP_TASKQUEUE_INIT_SIZE;
  this->_head = 0;
  this->_tail = 1;
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

  this->_taskqueue[this->_head] = task;
  this->_num_tasks += 1;

  /* Move the head of deque.
     Be careful about this situation:

     -*****************************--------------------        BEFORE
     head                          tail


     ******************************--------------------        AFTER
                                   tail               head
  */
  if (__builtin_expect(this->_head == 0, 0))
    this->_head = this->_num_queue_cells - 1;
  else
    this->_head -= 1;

  /* Expand the size of deque when taskqueue is full.
     Just consider this situation:

     ***-*************         *****************           ***-----------------**************
        head            ->       head             ->          tail            head
        tail           push       tail           expand


     Note that new head will be
        head = prev_head + prev_queue_size
     */
  if (__builtin_expect(this->_num_tasks == this->_num_queue_cells, 0))
    {
      size_t prev_size = this->_num_queue_cells;
      size_t prev_head = this->_head;
      this->_num_queue_cells *= 2;
      this->_head = prev_head + prev_size;

      this->_taskqueue = realloc(this->_taskqueue, sizeof(gomp_task*) * this->_num_queue_cells);
      assert(this->_taskqueue);

      memcpy(&this->_taskqueue[this->_head + 1], &this->_taskqueue[this->_tail],
             sizeof(gomp_task*) * (prev_size - this->_tail + 1));
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

  if (this->_num_tasks == 0)
    {
      pthread_mutex_unlock(&this->_lock);
      return NULL;
    }

  /* Pop the task at head + 1.
     Be careful about this situation:

     ************---------------------        BEFORE
                 tail                head


     -***********---------------------        AFTER
     head        tail
  */
  if (__builtin_expect(this->_head == this->_num_queue_cells -1, 0))
    this->_head = 0;
  else
    this->_head += 1;
  this->_num_tasks -= 1;

  res = this->_taskqueue[this->_head];

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

  if (this->_num_tasks == 0)
    {
      pthread_mutex_unlock(&this->_lock);
      return NULL;
    }

  /* Take the task at tail - 1.
     Be careful about this situation:

     -----------------------**********        BEFORE
     tail                  head


     -----------------------*********-        AFTER
                           head      tail
  */
  if (__builtin_expect(this->_tail == 0, 0))
    this->_tail = this->_num_queue_cells - 1;
  else
    this->_tail -= 1;
  this->_num_tasks -= 1;

  res = this->_taskqueue[this->_tail];

  pthread_mutex_unlock(&this->_lock);
  return res;
}
