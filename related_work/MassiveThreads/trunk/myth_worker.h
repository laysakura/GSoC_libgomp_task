#ifndef MYTH_WORKER_H_
#define MYTH_WORKER_H_

#include <pthread.h>
#include <time.h>

#include "myth_sched.h"
#include "myth_io.h"
#include "myth_log.h"
#include "myth_wsqueue.h"

//スレッド実行環境(スケジューラ+スレッドキュー)。各ワーカースレッドが持つ

typedef struct myth_running_env
{
	//読み書きするのは所有するワーカースレッドのみ
	struct myth_thread *this_thread;//現在実行中のスレッド
#ifdef MYTH_SPLIT_STACK_DESC
	myth_freelist_t freelist_desc;//ディスクリプタのみのfreelist
	myth_freelist_t freelist_stack;//スタックのみのfreelist
#else
	myth_freelist_t freelist_ds;//スタックとディスクリプタがセットになった部分のfreelist
#endif
	int log_buf_size;
	int log_count;
	struct myth_log_entry *log_data;
	struct myth_prof_data prof_data;
	pid_t tid;//スレッドID
	struct myth_sched sched;	//スケジューラ構造体
	//他のワーカースレッドから読み込まれる
	pthread_t worker;
	int rank;
	//他のワーカースレッドから書き込まれる
	myth_thread_queue runnable_q;//実行可能スレッドのキュー
#ifdef MYTH_SPLIT_STACK_DESC
	myth_freelist_t freelist_stack_g;//スタックのglobal free list
	myth_freelist_t freelist_desc_g;//ディスクリプタのglobal free list
#endif
	struct myth_io_struct_perenv io_struct;//IO関係の情報を入れる構造体
	int exit_flag;//メインスレッドをもつ:-1、実行中:0、実行完了:1
}__attribute__((aligned(CACHE_LINE_SIZE))) myth_running_env,*myth_running_env_t;

typedef struct myth_thread* (*myth_steal_func_t)(int);

//Thread index
extern int g_thread_index;
extern myth_running_env_t g_envs;
//Number of worker threads
extern int g_worker_thread_num;
//Offset of worker threads
extern int g_worker_thread_offset;
//Step of worker threads
extern int g_worker_thread_step;
//Barrier for worker threads
extern pthread_barrier_t g_worker_barrier;

#endif /* MYTH_WORKER_H_ */
