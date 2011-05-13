#ifndef NTH_ALLOC_H
#define NTH_ALLOC_H

typedef enum { GLOBAL_MEM, TEAM_MEM, THREAD_MEM, TASK_MEM } nth_affinity_t;

void * nth_alloc (int size, nth_affinity_t affinity );
void nth_free (void * ptr);

#define nth_malloc(size) nth_alloc((size),GLOBAL_MEM)

#endif

