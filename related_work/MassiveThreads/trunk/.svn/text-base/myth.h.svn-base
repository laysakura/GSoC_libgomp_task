#ifndef MYTH_H_
#define MYTH_H_

#ifdef MYTH_USE_INLINE
//インライン版
#include "myth_if_inline.h"

#else
//ライブラリ版
#include "myth_desc.h"
#include "myth_sync.h"
#include "myth_init.h"
#include "myth_sched.h"
#include "myth_worker.h"
#include "myth_io.h"

void myth_init(void);//初期化
void myth_fini(void);//終了

int myth_init_ex(int worker_num);
void myth_fini_ex(void);
void myth_exit_ex(void);
void myth_ext_exit_ex(void);
void myth_worker_start_ex(int rank);
void myth_startpoint_init_ex(int rank);
void myth_startpoint_exit_ex(int rank);

//スレッド作成
myth_thread_t myth_create(myth_func_t func,void *arg);
//制御をスケジューラに返す
void myth_yield(void);
void myth_yield2(void);
//スレッド終了待ち
void myth_join(myth_thread_t th,void **result);

//バリア
myth_barrier_t myth_barrier_create(int nthreads);
int myth_barrier_wait(myth_barrier_t bar);
int myth_barrier_destroy(myth_barrier_t bar);

//join counter(実装が不完全)
/*
myth_jc_t myth_jc_create(int val);
void myth_jc_wait(myth_jc_t jc);
void myth_jc_dec(myth_jc_t jc);
*/

//シリアライズ/デシリアライズ
//シリアライズを行う
void myth_serialize(myth_thread_t th,myth_pickle_t p);
//MassiveThreads管理外のスレッドからシリアライズを行う。
#define myth_ext_serialize(th,p) myth_serialize(th,p)
//デシリアライズを試みる。成功したらスレッドへのポインタ、失敗したらNULLを返す
myth_thread_t myth_deserialize(myth_pickle_t p);
myth_thread_t myth_ext_deserialize(myth_pickle_t p);

//スチール関連API
//あるスレッドをMassiveThreadsの管理下から奪う。
myth_thread_t myth_steal(void);
#define myth_ext_steal() myth_steal()
//スレッドをMassiveThreadsの管理下に戻す
void myth_import(myth_thread_t th);
void myth_ext_import(myth_thread_t th);

//スチールやデシリアライズしたスレッドのメモリ領域を解放するAPI。
//順番を誤った場合やどちらかを行わなかった場合の動作は未定義なので、
//かならずスタック->ディスクリプタの順番で解放を行うこと。
//stealしたスレッドのディスクリプタを解放する
void myth_release_stack(myth_thread_t th);
//stealしたスレッドのスタックを解放する
void myth_release_desc(myth_thread_t th);

myth_steal_func_t myth_set_steal_func(myth_steal_func_t fn);

//ソケットI/Oのラッパー
int myth_socket (int __domain, int __type, int __protocol);
int myth_connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);
int myth_accept (int __fd, __SOCKADDR_ARG __addr,
		   socklen_t *__restrict __addr_len);
int myth_listen (int __fd, int __n);
int myth_bind(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);
ssize_t myth_send (int __fd, __const void *__buf, size_t __n, int __flags);
ssize_t myth_recv (int __fd, void *__buf, size_t __n, int __flags);
int myth_close (int __fd);
int myth_fcntl (int __fd, int __cmd, ...);

//プロファイル開始/終了
void myth_log_start(void);
void myth_log_pause(void);
void myth_sched_prof_start(void);
void myth_sched_prof_pause(void);

//ワーカー情報取得
int myth_get_worker_num(void);
int myth_get_num_workers(void);

#endif

#endif /* MYTH_H_ */
