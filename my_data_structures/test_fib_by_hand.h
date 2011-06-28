#ifndef _TEST_FIB_BY_HAND_H_
#define _TEST_FIB_BY_HAND_H_


#include "gsoc_taskqueue.h"


#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L

typedef struct {
  int* retval;
  int arg;
} omp_internal_data;


__thread unsigned int _thread_id;
unsigned int _num_detected_threads = 0;
pthread_t* _pthread_id;


<<<<<<< HEAD
unsigned int num_team_task;


gsoc_worker* _workers;



#define gsoc_cutoff_cond() (_workers[_thread_id].current_task->depth > GSOC_CUTOFF_DEPTH)

=======
>>>>>>> 8fda589c9d61bd6b27afa1065940d2d18b84cbb5
#endif /* _TEST_FIB_BY_HAND_H_ */
