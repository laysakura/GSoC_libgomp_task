/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_WSQUEUE_H_
#define MYTH_WSQUEUE_H_

#include "myth_config.h"
#include "myth_internal_lock.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "myth_mem_barrier.h"
#include "myth_original_lib.h"
#include "myth_config.h"
#include "myth_misc.h"

#include <pthread.h>
#include <errno.h>
#include <sys/syscall.h>
#include <sys/types.h>

//全メソッドのロックを有効にする
//#define USE_LOCK

//1つでもロックを有功にするならこれを定義する。
//#define USE_LOCK_ANY
//各メソッドのロックの有効/無効を定める。
//#define USE_LOCK_CLEAR
//#define USE_LOCK_PUSH
//#define USE_LOCK_POP
//#define USE_LOCK_TAKE
//#define USE_LOCK_TRYPASS

#if defined MYTH_USE_ITIMER || defined MYTH_USE_SIGIO
//シグナルを使うなら有効にしなければならない
#define USE_SIGNAL_CS
#endif

#if defined MYTH_USE_IO_THREAD
#define USE_THREAD_CS
#endif

//スレッドのキュー
typedef struct myth_thread_queue
{
	volatile int top;
	volatile int base;
	struct myth_thread** ptr;
	int size;
	myth_queue_lock_t lock;
#if defined USE_LOCK || defined USE_LOCK_ANY
	myth_queue_lock_t m_lock;
#endif
#ifdef USE_SIGNAL_CS
	volatile int8_t op_flag;
#endif
#ifdef USE_THREAD_CS
	pthread_mutex_t mtx;
#endif
}myth_thread_queue,*myth_thread_queue_t;

//各スレッドがもつ構造体
typedef struct myth_queue_data
{
}myth_queue_data,*myth_queue_data_t;

#endif /* MYTH_QUEUE_H_ */
