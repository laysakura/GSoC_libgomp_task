#ifndef _GSOC_TASK_H_
#define _GSOC_TASK_H_


typedef struct gsoc_task {
  void* result;
  

  struct gsoc_task* parent;
  struct gsoc_task** children;

#ifdef TEST_GSOC_TASKQUEUE_C
  unsigned int _num_children;
#endif
} gsoc_task;


#endif /* _GSOC_TASK_H_ */
