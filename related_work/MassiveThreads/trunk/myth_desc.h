/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_DESC_H_
#define MYTH_DESC_H_

#include <stdio.h>
#include <sys/mman.h>

#include "myth_context.h"
#include "myth_wsqueue.h"
#include "myth_internal_lock.h"

#include "myth_worker.h"

//A thread function
typedef void*(*myth_func_t)(void*);

//Thread status constants
typedef enum
{
	MYTH_STATUS_READY=0,//Executable
	MYTH_STATUS_BLOCKED=1,//Blocked
	MYTH_STATUS_FREE_READY=2,//Execution finished. But you have to obtain lock before release
	MYTH_STATUS_FREE_READY2=3,//Execution finished. Feel free to release
}myth_status_t;

//Thread descriptor
typedef struct myth_thread
{
	struct myth_thread* join_thread;//A thread which is waiting for this
#ifndef SWITCH_AFTER_CREATE
	myth_func_t entry_func;
#endif
	void *result;//Return value
	myth_context context;//Context
	void *stack;//Pointer to stack
	struct myth_running_env* env;//Pointer to worker thread
	//struct myth_pickle *pickle_ptr;
	myth_thread_lock_t lock;//Lock
	myth_queue_data queue_data;//Data for runqueue
	volatile myth_status_t status;//Status
	int detached;
}__attribute__((aligned(CACHE_LINE_SIZE))) myth_thread,*myth_thread_t;

static inline void myth_desc_join_set(myth_thread_t thread,myth_thread_t wait_thread)
{
	thread->join_thread=wait_thread;
}

static inline void myth_desc_set_not_runnable(myth_thread_t thread)
{
	thread->status=MYTH_STATUS_BLOCKED;
}

static inline int myth_desc_is_runnable(myth_thread_t thread)
{
	return thread->status==MYTH_STATUS_READY;
}

static inline int myth_desc_is_finished(myth_thread_t thread)
{
	return thread->status>=MYTH_STATUS_FREE_READY;
}

static inline void myth_desc_set_detached(myth_thread_t th)
{
	th->detached=1;
}

#define REAL_STACK_SIZE ((((STACK_SIZE)+(PAGE_SIZE)-1)/(PAGE_SIZE))*PAGE_SIZE)

typedef struct myth_pickle
{
	struct myth_thread desc;
	char stack[REAL_STACK_SIZE];
}myth_pickle,*myth_pickle_t;

#endif /* MYTH_DESC_H_ */
