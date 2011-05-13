#ifndef NTH_GV
#define NTH_GV

#include "nth_desc.h"

#ifdef NTH_PERFORMANCE

#define gv_task_create(parent,newtask)
#define gv_wf_schedule(parent,newtask)
#define gv_task_immediate(task)
#define gv_init()
#define gv_fini()

#else

void gv_task_create (nth_desc_t *parent, nth_desc_t *newtask);
int gv_wf_schedule (nth_desc_t *parent, nth_desc_t *newtask);
void gv_task_immediate (nth_desc_t *task);
void gv_init();
void gv_fini();

#endif



#endif
