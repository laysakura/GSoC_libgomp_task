#ifndef MYTH_IF_INLINE_H_
#define MYTH_IF_INLINE_H_

//MassiveThreadsのinlineインターフェース

//RTLD_NEXT,pthread_setaffinity_npのために必要
#define _GNU_SOURCE

#include "myth_desc.h"
#include "myth_sync.h"

#include "myth_init.h"
#include "myth_sched.h"
#include "myth_worker.h"
#include "myth_io.h"

#include "myth_worker_func.h"
#include "myth_io_func.h"
#include "myth_sync_func.h"
#include "myth_sched_func.h"

static inline void myth_init(void)
{
	myth_init_body();
}
static inline void myth_fini(void)
{
	myth_fini_body();
}

//alternative init/fini
static inline int myth_init_ex(int worker_num)
{
	return myth_init_ex_body(worker_num);
}

static inline void myth_fini_ex(void)
{
	myth_fini_ex_body();
}

static inline void myth_exit_ex(void)
{
	myth_notify_workers_exit();
}

static inline void myth_ext_exit_ex(void)
{
	myth_exit_ex();
}

static inline void myth_worker_start_ex(int rank)
{
	myth_worker_start_ex_body(rank);
}

static inline void myth_startpoint_init_ex(int rank)
{
	myth_startpoint_init_ex_body(rank);
}

static inline void myth_startpoint_exit_ex(int rank)
{
	myth_startpoint_exit_ex_body(rank);
}

static inline int myth_get_worker_num(void)
{
	return myth_get_worker_num_body();
}
static inline int myth_get_num_workers(void)
{
	return myth_get_num_workers_body();
}

static inline myth_thread_t myth_create(myth_func_t func,void *arg)
{
	return myth_create_body(func,arg);
}
//制御をスケジューラに返す
static inline void myth_yield(void)
{
	myth_yield_body();
}
static inline void myth_yield2(void)
{
	myth_yield2_body();
}
//スレッド終了待ち
static inline void myth_join(myth_thread_t th,void **result)
{
	myth_join_body(th,result);
}

static inline void myth_log_start(void)
{
	myth_log_start_body();
}

static inline void myth_log_pause(void)
{
	myth_log_pause_body();
}
static inline void myth_sched_prof_start(void)
{
	myth_sched_prof_start_body();
}

static inline void myth_sched_prof_pause(void)
{
	myth_sched_prof_pause_body();
}

//バリア
static inline myth_barrier_t myth_barrier_create(int nthreads)
{
	return myth_barrier_create_body(nthreads);
}

static inline int myth_barrier_wait(myth_barrier_t bar)
{
	return myth_barrier_wait_body(bar);
}

static inline int myth_barrier_destroy(myth_barrier_t bar)
{
	return myth_barrier_destroy_body(bar);
}

//シリアライズ/デシリアライズ
//シリアライズを試みる。成功したら0以外、失敗したら0を返す
static inline void myth_serialize(myth_thread_t th,myth_pickle_t p)
{
	myth_serialize_body(th,p);
}

//デシリアライズを試みる。成功したらスレッドへのポインタ、失敗したらNULLを返す
static inline myth_thread_t myth_deserialize(myth_pickle_t p)
{
	return myth_deserialize_body(p);
}
static inline myth_thread_t myth_ext_deserialize(myth_pickle_t p)
{
	return myth_ext_deserialize_body(p);
}

//ランダムなスレッドをMassiveThreadsの管理下から奪う
static inline myth_thread_t myth_steal(void)
{
	return myth_steal_body();
}
#define myth_ext_steal() myth_steal()

//stealやdeserializeしたスレッドをMassiveThraedsの管理下に戻す
static inline void myth_import(myth_thread_t th)
{
	myth_import_body(th);
}

static inline void myth_ext_import(myth_thread_t th)
{
	myth_ext_import_body(th);
}

//stealしたスレッドのディスクリプタを解放する
static inline void myth_release_stack(myth_thread_t th)
{
	myth_release_stack_body(th);
}

//stealしたスレッドのスタックを解放する
static inline void myth_release_desc(myth_thread_t th)
{
	myth_release_desc_body(th);
}

myth_steal_func_t myth_set_steal_func(myth_steal_func_t fn);

//I/O

static inline int myth_socket (int __domain, int __type, int __protocol)
{
	return myth_socket_body(__domain,__type,__protocol);
}
static inline int myth_connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
{
	return myth_connect_body(__fd,__addr,__len);
}
static inline int myth_accept (int __fd, __SOCKADDR_ARG __addr,
		   socklen_t *__restrict __addr_len)
{
	return myth_accept_body(__fd,__addr,__addr_len);
}
static inline int myth_listen (int __fd, int __n)
{
	return myth_listen_body(__fd,__n);
}
static inline int myth_bind(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
{
	return myth_bind_body(__fd,__addr,__len);
}
static inline ssize_t myth_send (int __fd, __const void *__buf, size_t __n, int __flags)
{
	return myth_send_body(__fd,__buf,__n,__flags);
}
static inline ssize_t myth_recv (int __fd, void *__buf, size_t __n, int __flags)
{
	return myth_recv_body(__fd,__buf,__n,__flags);
}
static inline int myth_close (int __fd)
{
	return myth_close_body(__fd);
}
static inline int myth_fcntl (int __fd, int __cmd, ...)
{
	int ret;
	va_list vl;
	va_start(vl,__cmd);
	ret=myth_fcntl_body(__fd,__cmd,vl);
	va_end(vl);
	return ret;
}

#endif /* MYTH_IF_INLINE_H_ */
