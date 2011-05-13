#ifndef _GOMP_TASK_H_
#define _GOMP_TASK_H_


typedef struct _gomp_task {
  volatile unsigned int _num_children;
} gomp_task;


#endif /* _GOMP_TASK_H_ */
