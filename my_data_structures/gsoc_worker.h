#ifndef _GSOC_WORKER_H_
#define _GSOC_WORKER_H_


#include <pthread.h>
#include "gsoc_task.h"
#include "gsoc_taskqueue.h"

typedef struct s_gsoc_worker {
  pthread_t pthread_id;
  gsoc_taskqueue* taskq;
  gsoc_task* current_task;
  gsoc_task* scheduler_task;
} gsoc_worker;

unsigned int
gsoc_worker_choose_victim(unsigned int criminal, unsigned int num_cpu);

#endif /* _GSOC_WORKER_H_ */
