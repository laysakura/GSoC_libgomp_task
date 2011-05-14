/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_CONFIG_H_
#define MYTH_CONFIG_H_

//Enable debug
//#define MYTH_DEBUG

//Cache line size
#define CACHE_LINE_SIZE 64

//Page size
#define PAGE_SIZE 4096

//Stack size
#define STACK_SIZE (16*1024)
//#define SCHED_STACK_SIZE 1024
//If you want to use fprintf and so on, large stack is needed.
//#define STACK_SIZE (1024*1024)
#define SCHED_STACK_SIZE (1024*1024)

//How many stack blocks allocated at stack allocation
#define STACK_ALLOC_UNIT 128
#define INITIAL_STACK_ALLOC_UNIT 0

//Use malloc+freelist instead of mmap+freelist
//#define ALLOCATE_STACK_BY_MALLOC

//Split desc and stack allocation
#define MYTH_SPLIT_STACK_DESC

//Runqueue length
#define INITIAL_QUEUE_SIZE (65536*2)

//Replace myth_assert() with assert()
//#define MYTH_SANITY_CHECK

//Insert special instruction into unreachable code
#define USE_MYTH_UNREACHABLE

#define MYTH_EPOLL_SIZE 256

//Decide a fd's worker thread at random
#define MYTH_RANDOM_IO_WORKER
//Make all fds belong to worker thread 0
//#define MYTH_ONE_IO_WORKER

//Use interval timer for I/O checking and preemption
//#define MYTH_USE_ITIMER
//Use SIGIO for I/O checking
//#define MYTH_USE_SIGIO

//Use signal handler
//#define MYTH_USE_SIGHANDLER
//Use another thread
//#define MYTH_USE_IO_THREAD
//#define MYTH_IO_THREAD_PERIOD 1

//Debug log setting
//#define FREE_MYTH_THREAD_STRUCT_DEBUG
//#define MYTH_INIT_DEBUG
//#define MYTH_WORKER_INIT_DEBUG
//#define MYTH_FINI_DEBUG
//#define MYTH_YIELD_DEBUG
//#define MYTH_JOIN_DEBUG
//#define MYTH_SCHED_ADD_DEBUG
//#define MYTH_SCHED_LOOP_DEBUG
//#define MYTH_ENTRY_POINT_DEBUG

//Profiling option
//#define MYTH_CREATE_PROF
//#define MYTH_CREATE_PROF_DETAIL
//#define MYTH_ENTRY_POINT_PROF
//#define MYTH_EP_PROF_DETAIL
//#define MYTH_JOIN_PROF
//#define MYTH_JOIN_PROF_DETAIL
//#define MYTH_WS_PROF_DETAIL
//#define MYTH_ALLOC_PROF
//#define MYTH_SWITCH_PROF
//#define MYTH_IO_PROF_DETAIL
//#define MYTH_FL_PROF
//Display result as CSV
//#define MYTH_PROF_COUNT_CSV
//Display result of each worker thread
//#define MYTH_PROF_SHOW_WORKER

//Profile myth_flmalloc
//#define MYTH_FLMALLOC_PROF

//Collect log
//#define MYTH_COLLECT_LOG
//Log buffer size
#define MYTH_LOG_INITIAL_BUFFER_SIZE 1024

//#define MYTH_LOG_EMIT_TEXTLOG
#define MYTH_LOG_EMIT_STAT_ALL
//#define MYTH_LOG_EMIT_STAT_WORKER

//Lock implementation for runqueue
//#define MYTH_QUEUE_LOCK_MUTEX
//#define MYTH_QUEUE_LOCK_SPINLOCK1
#define MYTH_QUEUE_LOCK_SPINLOCK2
//#define MYTH_QUEUE_LOCK_NONE

//Lock implementation for thread decriptor
//#define MYTH_THREAD_LOCK_MUTEX
//#define MYTH_THREAD_LOCK_SPINLOCK1
#define MYTH_THREAD_LOCK_SPINLOCK2
//#define MYTH_THREAD_LOCK_NONE

//Lock implementation for fd map
#define MYTH_FDMAP_LOCK_NONE

//Lock implementation for a entry of fd map
#define MYTH_FDMAP_ENTRY_LOCK_SPINLOCK2

//Use "lock cmpxchg" in spinlok2. Otherwise "lock xchg" instruction is used.
#define LOCK_BY_CMPXCHG

//Barrier implementations
//#define MYTH_BARRIER_FENCES
//#define MYTH_BARRIER_CILK
#define MYTH_BARRIER_CILK_WEAK
//#define MYTH_BARRIER_NONE

//Error check at mutex
//#define MUTEX_ERROR_CHECK
//Disable mutex
//#define MUTEX_DISABLE

//Select TLS implementation
//#define TLS_BY_PTHREAD
#define TLS_BY_ELF
//#define TLS_NONE

//Choose work stealing target at random
#define WS_TARGET_RANDOM

//Bind each worker thread to each CPU
#define WORKER_SET_AFFINITY

//Switch to new thread immediately after it is created
#define SWITCH_AFTER_CREATE
//When a thread is finished, switch to the thread that waits for it.
#define SWITCH_AFTER_EXIT

//Scheduling policy of runqueue
//FIFO
//#define MYTH_QUEUE_FIFO

//Check the number of threads in runqueue before work stealing
#define CHECK_NUM_BEFORE_STEAL

//Do trylock before work stealing
//#define TRY_LOCK_BEFORE_STEAL

//Use malloc with recycle by freelist
#define USE_MYTH_FLMALLOC
//Use TLS on malloc with freelist
//#define MYTH_FLMALLOC_TLS

#define MYTH_INLINE_CONTEXT
#define MYTH_INLINE_PUSH_CALLEE_SAVED

//Option for overhead evaluation
//#define MYTH_NO_JOIN
//#define MYTH_NO_SWITCH
//#define MYTH_ONE_STACK
//#define MYTH_NO_QUEUEOP

#define USE_JUMP_INSN_A
#define USE_JUMP_INSN_B

#endif /* MYTH_CONFIG_H_ */
