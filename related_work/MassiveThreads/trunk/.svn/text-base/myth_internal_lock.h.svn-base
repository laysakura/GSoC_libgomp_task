/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_INTERNAL_LOCK_H_
#define MYTH_INTERNAL_LOCK_H_

#include "myth_config.h"
#include "myth_mem_barrier.h"
#include "myth_original_lib.h"

//ロック関係
//キュー用のロック
#ifdef MYTH_QUEUE_LOCK_MUTEX
typedef pthread_mutex_t myth_queue_lock_t;
#define myth_queue_lock_init(ptr) real_pthread_mutex_init(ptr,NULL)
#define myth_queue_lock_destroy real_pthread_mutex_destroy
#define myth_queue_lock_lock real_pthread_mutex_lock
#define myth_queue_lock_unlock real_pthread_mutex_unlock
static inline int myth_queue_lock_trylock(myth_queue_lock_t *lock)
{
	return real_pthread_mutex_trylock(lock)==0;
}
#elif defined MYTH_QUEUE_LOCK_SPINLOCK1
typedef pthread_spinlock_t myth_queue_lock_t;
#define myth_queue_lock_init(ptr) real_pthread_spin_init(ptr,PTHREAD_PROCESS_PRIVATE)
#define myth_queue_lock_destroy real_pthread_spin_destroy
#define myth_queue_lock_lock real_pthread_spin_lock
#define myth_queue_lock_unlock real_pthread_spin_unlock
static inline int myth_queue_lock_trylock(myth_queue_lock_t *lock)
{
	return real_pthread_spin_trylock(lock)==0;
}
#elif defined MYTH_QUEUE_LOCK_SPINLOCK2
typedef int myth_queue_lock_t;
#define myth_queue_lock_init myth_mylock_init
#define myth_queue_lock_destroy myth_mylock_destroy
#define myth_queue_lock_lock myth_mylock_lock
#define myth_queue_lock_unlock myth_mylock_unlock
#define myth_queue_lock_trylock myth_mylock_trylock
#elif defined MYTH_QUEUE_LOCK_NONE
typedef int myth_queue_lock_t;
#define myth_queue_lock_init myth_dummylock_init
#define myth_queue_lock_destroy myth_dummylock_destroy
#define myth_queue_lock_lock myth_dummylock_lock
#define myth_queue_lock_unlock myth_dummylock_unlock
#define myth_queue_lock_trylock myth_dummylock_trylock
#else
#error
#endif

//スレッド用のロック

#ifdef MYTH_THREAD_LOCK_MUTEX
typedef pthread_mutex_t myth_thread_lock_t;
#define myth_thread_lock_init(ptr) real_pthread_mutex_init(ptr,NULL)
#define myth_thread_lock_destroy real_pthread_mutex_destroy
#define myth_thread_lock_lock real_pthread_mutex_lock
#define myth_thread_lock_unlock real_pthread_mutex_unlock
static inline int myth_thread_lock_trylock(myth_thread_lock_t *lock)
{
	return real_pthread_mutex_trylock(lock)==0;
}
#elif defined MYTH_THREAD_LOCK_SPINLOCK1
typedef pthread_spinlock_t myth_thread_lock_t;
#define myth_thread_lock_init(ptr) real_pthread_spin_init(ptr,PTHREAD_PROCESS_PRIVATE)
#define myth_thread_lock_destroy real_pthread_spin_destroy
#define myth_thread_lock_lock real_pthread_spin_lock
#define myth_thread_lock_unlock real_pthread_spin_unlock
static inline int myth_thread_lock_trylock(myth_thread_lock_t *lock)
{
	return real_pthread_spin_trylock(lock)==0;
}
#elif defined MYTH_THREAD_LOCK_SPINLOCK2
typedef int myth_thread_lock_t;
#define myth_thread_lock_init myth_mylock_init
#define myth_thread_lock_destroy myth_mylock_destroy
#define myth_thread_lock_lock myth_mylock_lock
#define myth_thread_lock_unlock myth_mylock_unlock
#define myth_thread_lock_trylock myth_mylock_trylock
#elif defined MYTH_THREAD_LOCK_NONE
typedef int myth_thread_lock_t;
#define myth_thread_lock_init myth_dummylock_init
#define myth_thread_lock_destroy myth_dummylock_destroy
#define myth_thread_lock_lock myth_dummylock_lock
#define myth_thread_lock_unlock myth_dummylock_unlock
#define myth_thread_lock_trylock myth_dummylock_trylock
#else
#error
#endif

//fd_map用のロック
#ifdef MYTH_FDMAP_LOCK_MUTEX
typedef pthread_mutex_t myth_fdmap_lock_t;
#define myth_fdmap_lock_init(ptr) real_pthread_mutex_init(ptr,NULL)
#define myth_fdmap_lock_destroy real_pthread_mutex_destroy
#define myth_fdmap_lock_lock real_pthread_mutex_lock
#define myth_fdmap_lock_unlock real_pthread_mutex_unlock
static inline int myth_fdmap_lock_trylock(myth_fdmap_lock_t *lock)
{
	return real_pthread_mutex_trylock(lock)==0;
}
#elif defined MYTH_FDMAP_LOCK_SPINLOCK1
typedef pthread_spinlock_t myth_fdmap_lock_t;
#define myth_fdmap_lock_init(ptr) real_pthread_spin_init(ptr,PTHREAD_PROCESS_PRIVATE)
#define myth_fdmap_lock_destroy real_pthread_spin_destroy
#define myth_fdmap_lock_lock real_pthread_spin_lock
#define myth_fdmap_lock_unlock real_pthread_spin_unlock
static inline int myth_fdmap_lock_trylock(myth_fdmap_lock_t *lock)
{
	return real_pthread_spin_trylock(lock)==0;
}
#elif defined MYTH_FDMAP_LOCK_SPINLOCK2
typedef int myth_fdmap_lock_t;
#define myth_fdmap_lock_init myth_mylock_init
#define myth_fdmap_lock_destroy myth_mylock_destroy
#define myth_fdmap_lock_lock myth_mylock_lock
#define myth_fdmap_lock_unlock myth_mylock_unlock
#define myth_fdmap_lock_trylock myth_mylock_trylock
#elif defined MYTH_FDMAP_LOCK_NONE
typedef int myth_fdmap_lock_t;
#define myth_fdmap_lock_init myth_dummylock_init
#define myth_fdmap_lock_destroy myth_dummylock_destroy
#define myth_fdmap_lock_lock myth_dummylock_lock
#define myth_fdmap_lock_unlock myth_dummylock_unlock
#define myth_fdmap_lock_trylock myth_dummylock_trylock
#else
#error
#endif

//fd_map entry用のロック
#ifdef MYTH_FDMAP_ENTRY_LOCK_MUTEX
typedef pthread_mutex_t myth_fdmap_entry_lock_t;
#define myth_fdmap_entry_lock_init(ptr) real_pthread_mutex_init(ptr,NULL)
#define myth_fdmap_entry_lock_destroy real_pthread_mutex_destroy
#define myth_fdmap_entry_lock_lock real_pthread_mutex_lock
#define myth_fdmap_entry_lock_unlock real_pthread_mutex_unlock
static inline int myth_fdmap_entry_lock_trylock(myth_fdmap_entry_lock_t *lock)
{
	return real_pthread_mutex_trylock(lock)==0;
}
#elif defined MYTH_FDMAP_ENTRY_LOCK_SPINLOCK1
typedef pthread_spinlock_t myth_fdmap_entry_lock_t;
#define myth_fdmap_entry_lock_init(ptr) real_pthread_spin_init(ptr,PTHREAD_PROCESS_PRIVATE)
#define myth_fdmap_entry_lock_destroy real_pthread_spin_destroy
#define myth_fdmap_entry_lock_lock real_pthread_spin_lock
#define myth_fdmap_entry_lock_unlock real_pthread_spin_unlock
static inline int myth_fdmap_entry_lock_trylock(myth_fdmap_entry_lock_t *lock)
{
	return real_pthread_spin_trylock(lock)==0;
}
#elif defined MYTH_FDMAP_ENTRY_LOCK_SPINLOCK2
typedef int myth_fdmap_entry_lock_t;
#define myth_fdmap_entry_lock_init myth_mylock_init
#define myth_fdmap_entry_lock_destroy myth_mylock_destroy
#define myth_fdmap_entry_lock_lock myth_mylock_lock
#define myth_fdmap_entry_lock_unlock myth_mylock_unlock
#define myth_fdmap_entry_lock_trylock myth_mylock_trylock
#elif defined MYTH_FDMAP_ENTRY_LOCK_NONE
typedef int myth_fdmap_entry_lock_t;
#define myth_fdmap_entry_lock_init myth_dummylock_init
#define myth_fdmap_entry_lock_destroy myth_dummylock_destroy
#define myth_fdmap_entry_lock_lock myth_dummylock_lock
#define myth_fdmap_entry_lock_unlock myth_dummylock_unlock
#define myth_fdmap_entry_lock_trylock myth_dummylock_trylock
#else
#error
#endif

static inline void myth_mylock_init(int *ptr)
{
	*ptr=0;
}
static inline void myth_mylock_destroy(int *ptr){}
static inline void myth_mylock_lock(int *ptr)
{
#if 1
	//error check
	if (*ptr!=0 && *ptr!=1){
		fprintf(stderr,"*ptr=%d\n",*ptr);
		assert(*ptr==0 || *ptr==1);
	}
#endif
#ifndef LOCK_BY_CMPXCHG
	asm volatile(
			"1:cmp $0,%0\n"//もしロックが解除されているなら
			"je 2f\n"//ロックを取りにいく
			"rep; nop\n"//pause
			"jmp 1b\n"//もう一回
			"2:mov $1,%2\n"//値を設定
			"xchg %2,%0\n"//アトミックに交換
			"cmp $0,%2\n"//うまくいっていたら抜ける
			"jne 1b\n"//さもなくば最初からやりなおし
			:"=m"(*ptr):"m"(*ptr),"r"(1):"cc");
#else
	asm volatile(
			//".p2align 4,0x90\n"
			"1:cmp $0,%0\n"
			"je 2f\n"
			"rep;nop\n"
			"jmp 1b\n"
			"2:xor %%eax,%%eax\n"//eax=0
			"lock cmpxchg %2,%0\n"//if (*ptr==0)*ptr=1
			"jne 1b\n"
			:"=m"(*ptr):"m"(*ptr),"r"(1):"%eax","cc","memory");
#endif
}
static inline void myth_mylock_unlock(int *ptr)
{
	//メモリを順序化する
	myth_wbarrier();
	//ポインタを元に戻す
	*ptr=0;
}
static inline int myth_mylock_trylock(int *ptr)
{
#ifndef LOCK_BY_CMPXCHG
	int ret;
	asm volatile(
			"lock xchg %3,%0\n"//アトミックに交換
			:"=m"(*ptr),"=r"(ret):"m"(*ptr),"1"(1):"cc","memory");
	return ret==0;
#else
	int ret;
	asm volatile(
			"lock cmpxchg %4,%0\n"//if (*ptr==0)*ptr=1
			:"=m"(*ptr),"=a"(ret):"1"(0),"m"(*ptr),"r"(1):"cc","memory");
	return ret==0;
#endif
}

static inline void myth_dummylock_init(int *ptr){}
static inline void myth_dummylock_destroy(int *ptr){}
static inline void myth_dummylock_lock(int *ptr){}
static inline void myth_dummylock_unlock(int *ptr){}
static inline int myth_dummylock_trylock(int *ptr){return 1;}
#endif /* MYTH_LOCK_H_ */
