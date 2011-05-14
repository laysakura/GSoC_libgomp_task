/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
//RTLD_NEXT,pthread_setaffinity_npのために必要
#define _GNU_SOURCE
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdarg.h>
//#include <assert.h>
//#include <errno.h>
//#include <unistd.h>
//#include <sys/syscall.h>
//#include <sys/types.h>
#include <signal.h>
////Since 2009/11 by Jun Nakashima under BSD License
//
#include "myth_config.h"

#include "myth_wsqueue.h"
#include "myth_sched.h"

#include "myth_wsqueue_func.h"
#include "myth_sched_func.h"

//本体で使われるグローバル変数の宣言
//インデックス
int g_thread_index=0;
myth_running_env_t g_envs;
//スレッド数
int g_worker_thread_num;
//Offset of worker threads
int g_worker_thread_offset;
//Step of worker threads
int g_worker_thread_step;
//バリア
pthread_barrier_t g_worker_barrier;

FILE *g_log_fp;

int g_sched_prof=0;
int g_log_worker_stat=0;

#ifdef TLS_BY_PTHREAD
//pthreadのTLSを用いた実装
pthread_key_t g_env_key;
#elif defined TLS_BY_ELF
//GCC拡張のTLSを利用した実装
__thread int g_worker_rank;
#elif defined TLS_NONE
//ただのグローバル変数。シングルCPUのみのとき利用可能。
#else
#error
#endif

void myth_alrm_sighandler(int signum,siginfo_t *sinfo,void* ctx)
{
	myth_running_env_t env;
	int errno_bk;
	errno_bk=errno;
	env=myth_get_current_env();
	int i;
	if (env->rank==0){
		//broadcast signal
		for (i=0;i<g_worker_thread_num;i++){
			if (i!=env->rank){
				pthread_kill(g_envs[i].worker,SIGVTALRM);
			}
		}
	}
#if 0
	int ret;
	char str[100];
	strcpy(str,"1 SIGALRM IO:X Q:X\n");
	//check for I/O
	if (!env->io_checking_flag){
		str[13]='O';
		//Do I/O checking
	}
	if (!myth_queue_is_operating(&env->runnable_q)){
		str[17]='O';
	}
	str[0]='0'+(char)env->rank;
	ret=write(1,str,strlen(str));
#endif
	if (!myth_queue_is_operating(&env->runnable_q))
	{
		myth_thread_t ret;
		ret=myth_io_polling_sig(env);
		if (ret)myth_queue_push(&env->runnable_q,ret);
	}
	errno=errno_bk;
}

int myth_textlog_entry_compare(const void *pa,const void *pb)
{
	myth_textlog_entry_t a,b;
	a=(myth_textlog_entry_t)pa;b=(myth_textlog_entry_t)pb;
	if (a->te > b->te)return 1;
	if (a->te < b->te)return -1;
	if (a->ts > b->ts)return 1;
	if (a->ts < b->ts)return -1;
	return 0;
}
