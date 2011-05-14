/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_SYNC_H_
#define MYTH_SYNC_H_

#include "myth_desc.h"

typedef struct myth_barrier
{
	int rest;
	int nthreads;
	struct myth_thread **th;
	myth_thread_lock_t lock;
}myth_barrier,*myth_barrier_t;

#define MYTH_BARRIER_SERIAL_THREAD PTHREAD_BARRIER_SERIAL_THREAD

typedef struct myth_jc
{
	//この2つは同時に操作できる必要がある
	struct myth_thread *th;
	intptr_t count;
	myth_thread_lock_t lock;
	int initial;
}myth_jc,*myth_jc_t;

typedef struct myth_mutex
{
	myth_thread_lock_t lock;
}myth_mutex,*myth_mutex_t;

typedef struct myth_cond
{
}myth_cond,*myth_cond_t;

#endif /* MYTH_SYNC_H_ */
