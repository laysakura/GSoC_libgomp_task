#ifndef _TEST_FIB_BY_HAND_H_
#define _TEST_FIB_BY_HAND_H_


#include "gsoc_taskqueue.h"


#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L
#define GSOC_CUTOFF_DEPTH 4

typedef struct {
  int* retval;
  int arg;
} omp_internal_data;

typedef struct {
  pthread_t pthread_id;
  gsoc_taskqueue* taskq;
  gsoc_task* current_task;
  gsoc_task* scheduler_task;
} gsoc_worker;


__thread unsigned int _thread_id;
unsigned int _num_detected_threads = 0;
pthread_t* _pthread_id;


unsigned int num_team_task;


gsoc_worker* _workers;



#define gsoc_cutoff_cond() (_workers[_thread_id].current_task->depth > GSOC_CUTOFF_DEPTH)

#endif /* _TEST_FIB_BY_HAND_H_ */
