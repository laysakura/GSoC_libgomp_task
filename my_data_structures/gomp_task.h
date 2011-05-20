#ifndef _GOMP_TASK_H_
#define _GOMP_TASK_H_


typedef struct gomp_task {
  void* result;
  

  struct gomp_task* parent;
  struct gomp_task** children;
} gomp_task;


#endif /* _GOMP_TASK_H_ */
