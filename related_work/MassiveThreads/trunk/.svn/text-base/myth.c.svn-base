//RTLD_NEXT,pthread_setaffinity_npのために必要
#define _GNU_SOURCE

#include "myth.h"

#include "myth_init.h"
#include "myth_sched.h"
#include "myth_worker.h"
#include "myth_io.h"

#include "myth_worker_func.h"
#include "myth_io_func.h"
#include "myth_sync_func.h"
#include "myth_sched_func.h"

void myth_init(void)
{
	myth_init_body();
}
void myth_fini(void)
{
	myth_fini_body();
}

//alternative init/fini
int myth_init_ex(int worker_num)
{
	return myth_init_ex_body(worker_num);
}

void myth_fini_ex(void)
{
	myth_fini_ex_body();
}

void myth_exit_ex(void)
{
	myth_notify_workers_exit();
}

void myth_ext_exit_ex(void)
{
	myth_exit_ex();
}

void myth_worker_start_ex(int rank)
{
	myth_worker_start_ex_body(rank);
}

void myth_startpoint_init_ex(int rank)
{
	myth_startpoint_init_ex_body(rank);
}

void myth_startpoint_exit_ex(int rank)
{
	myth_startpoint_exit_ex_body(rank);
}

int myth_get_worker_num(void)
{
	return myth_get_worker_num_body();
}

int myth_get_num_workers(void)
{
	return myth_get_num_workers_body();
}

myth_thread_t myth_create(myth_func_t func,void *arg)
{
	return myth_create_body(func,arg);
}
//制御をスケジューラに返す
void myth_yield(void)
{
	myth_yield_body();
}
void myth_yield2(void)
{
	myth_yield2_body();
}
//スレッド終了待ち
void myth_join(myth_thread_t th,void **result)
{
	myth_join_body(th,result);
}

void myth_log_start(void)
{
	myth_log_start_body();
}

void myth_log_pause(void)
{
	myth_log_pause_body();
}
void myth_sched_prof_start(void)
{
	myth_sched_prof_start_body();
}

void myth_sched_prof_pause(void)
{
	myth_sched_prof_pause_body();
}

//デバッグ関数
/*void myth_dprintf_1(char *func,char *fmt,...)
{
#ifdef MYTH_DEBUG
	static pthread_mutex_t mtx=PTHREAD_MUTEX_INITIALIZER;
	myth_running_env_t env;
	char tmp[1000];
	va_list ap;
	env=myth_get_current_env();
	va_start(ap,fmt);
	vsprintf(tmp,fmt,ap);
	va_end(ap);
	pthread_mutex_lock(&mtx);
	fprintf(stderr,"%s(%d):%s",func,env->rank,tmp);
	fflush(stderr);
	pthread_mutex_unlock(&mtx);
#endif
}*/

//バリア
myth_barrier_t myth_barrier_create(int nthreads)
{
	return myth_barrier_create_body(nthreads);
}

int myth_barrier_wait(myth_barrier_t bar)
{
	return myth_barrier_wait_body(bar);
}

int myth_barrier_destroy(myth_barrier_t bar)
{
	return myth_barrier_destroy_body(bar);
}

//join counter:実装が不完全なため現段階ではヘッダファイルに入れていない
myth_jc_t myth_jc_create(int val)
{
	return myth_jc_create_body(val);
}

void myth_jc_wait(myth_jc_t jc)
{
	myth_jc_wait_body(jc);
}

void myth_jc_dec(myth_jc_t jc)
{
	myth_jc_dec_body(jc);
}

//シリアライズ/デシリアライズ
//シリアライズを試みる。成功したら0以外、失敗したら0を返す
void myth_serialize(myth_thread_t th,myth_pickle_t p)
{
	myth_serialize_body(th,p);
}

//デシリアライズを試みる。成功したらスレッドへのポインタ、失敗したらNULLを返す
myth_thread_t myth_deserialize(myth_pickle_t p)
{
	return myth_deserialize_body(p);
}
myth_thread_t myth_ext_deserialize(myth_pickle_t p)
{
	return myth_ext_deserialize_body(p);
}

//ランダムなスレッドをMassiveThreadsの管理下から奪う
myth_thread_t myth_steal(void)
{
	return myth_steal_body();
}

//stealやdeserializeしたスレッドをMassiveThraedsの管理下に戻す
void myth_import(myth_thread_t th)
{
	myth_import_body(th);
}

void myth_ext_import(myth_thread_t th)
{
	myth_ext_import_body(th);
}

//stealしたスレッドのディスクリプタを解放する
void myth_release_stack(myth_thread_t th)
{
	myth_release_stack_body(th);
}

//stealしたスレッドのスタックを解放する
void myth_release_desc(myth_thread_t th)
{
	myth_release_desc_body(th);
}

//I/O

int myth_socket (int __domain, int __type, int __protocol)
{
	return myth_socket_body(__domain,__type,__protocol);
}
int myth_connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
{
	return myth_connect_body(__fd,__addr,__len);
}
int myth_accept (int __fd, __SOCKADDR_ARG __addr,
		   socklen_t *__restrict __addr_len)
{
	return myth_accept_body(__fd,__addr,__addr_len);
}
int myth_listen (int __fd, int __n)
{
	return myth_listen_body(__fd,__n);
}
int myth_bind(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
{
	return myth_bind_body(__fd,__addr,__len);
}
ssize_t myth_send (int __fd, __const void *__buf, size_t __n, int __flags)
{
	return myth_send_body(__fd,__buf,__n,__flags);
}
ssize_t myth_recv (int __fd, void *__buf, size_t __n, int __flags)
{
	return myth_recv_body(__fd,__buf,__n,__flags);
}
int myth_close (int __fd)
{
	return myth_close_body(__fd);
}
int myth_fcntl (int __fd, int __cmd, ...)
{
	int ret;
	va_list vl;
	va_start(vl,__cmd);
	ret=myth_fcntl_body(__fd,__cmd,vl);
	va_end(vl);
	return ret;
}
