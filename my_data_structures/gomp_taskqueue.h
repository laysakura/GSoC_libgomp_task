#ifndef _GOMP_TASKQUEUE_H_
#define _GOMP_TASKQUEUE_H_


#include <pthread.h>            /* for locking taskqueue */
#include "gomp_task.h"

/* Constants */
#define GOMP_TASKQUEUE_INIT_SIZE 131072 /* just same as MassiveThreads */

typedef struct _gomp_taskqueue {
  gomp_task** _taskqueue;       /* array of gomp_task* */
  volatile size_t _num_tasks;
  pthread_mutex_t _lock;

  /* datas to make array look like deque */
  volatile size_t _head, _tail;
  volatile size_t _num_queue_cells;
} gomp_taskqueue;

/* Methods for gomp_taskqueue */
gomp_taskqueue* gomp_taskqueue_new();           /* constructor, initializer */
void gomp_taskqueue_delete(gomp_taskqueue* this); /* destructor */

void gomp_taskqueue_push(gomp_taskqueue* this, gomp_task* task);
gomp_task* gomp_taskqueue_pop(gomp_taskqueue* this);
gomp_task* gomp_taskqueue_take(gomp_taskqueue* this);


#endif /* _GOMP_TASKQUEUE_H_ */
