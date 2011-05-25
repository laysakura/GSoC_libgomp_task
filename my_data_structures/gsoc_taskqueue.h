#ifndef _GSOC_TASKQUEUE_H_
#define _GSOC_TASKQUEUE_H_


#include <pthread.h>            /* for locking taskqueue */
#include "gsoc_task.h"

/* Constants */
#define GSOC_TASKQUEUE_INIT_SIZE 131072 /* just same as MassiveThreads */
#define GSOC_TASKQUEUE_NUM_TASKS_TOO_SMALL_TO_LOCKFREE 2  /* When the number of tasks
                                                             in a deque is smaller than
                                                             this value, it is dangerous
                                                             to pop a task without lock
                                                             because other worker thread
                                                             can steal the task to pop. */


/* Task queue specification:
 *
 *     0     1     2     3     4     5     6    ...
 *  +-----+-----+-----+-----+-----+-----+-----+--
 *  |     |  t  |  t  |  t  |  t  |     |     | ...  deq array
 *  +-----+-----+-----+-----+-----+-----+-----+--
 *           ^                       ^
 *          base                    top
 *   (incremented                     (incremented
 *       on take,)                        on push
 *                                    decremented
 *                                        on pop)
 *
 *
 * This is the same shape as the DEQ of FJTaskRunner.
 * When `top' exceeds the size of array, it is expanded
 * like this:
 *
 *     0     1     2     3
 *  +-----+-----+-----+-----+
 *  |     |  t0 |  t1 |  t2 |                            BEFORE
 *  +-----+-----+-----+-----+
 *           ^                 ^
 *          base              top
 *
 *
 *     0     1     2     3     4     5     6     7
 *  +-----+-----+-----+-----+-----+-----+-----+-----+
 *  |  t0 |  t1 |  t2 |     |     |     |     |     |    AFTER
 *  +-----+-----+-----+-----+-----+-----+-----+-----+
 *     ^                 ^
 *    base              top
 *
 *
 * It's sure that moving (actually copying) tasks is
 * highly time-consuming. But `top' would not exceed
 * the size of array many times.
 *
 * The number of tasks in the deque is always calculated by
 *    top - base.
 */

typedef struct _gsoc_taskqueue {
  gsoc_task** _taskqueue;       /* array of gsoc_task* */
  volatile size_t _top;         /* written only by its worker */
  volatile size_t _base;        /* written only by other workers with mutex lock */
  volatile size_t _num_queue_cells;     /* written only by its worker */
  pthread_mutex_t _lock;
} gsoc_taskqueue;

/* Methods for gsoc_taskqueue */
gsoc_taskqueue* gsoc_taskqueue_new();           /* constructor, initializer */
void gsoc_taskqueue_delete(gsoc_taskqueue* this); /* destructor */

void gsoc_taskqueue_push(gsoc_taskqueue* this, gsoc_task* task);
gsoc_task* gsoc_taskqueue_pop(gsoc_taskqueue* this);
gsoc_task* gsoc_taskqueue_take(gsoc_taskqueue* this);

#endif /* _GSOC_TASKQUEUE_H_ */
