#ifndef _TEST_FIB_BY_HAND_H_
#define _TEST_FIB_BY_HAND_H_


#define OMP_TASK_STACK_SIZE_DEFAULT 0x010000L

typedef struct {
  int* retval;
  int arg;
} omp_internal_data;


__thread unsigned int _thread_id;
unsigned int _num_detected_threads = 0;
pthread_t* _pthread_id;


#endif /* _TEST_FIB_BY_HAND_H_ */
