#define _GNU_SOURCE

#include "myth_worker.h"
#include "myth_worker_proto.h"
#include "myth_worker_func.h"

myth_thread_t myth_default_steal_func(int rank);

myth_steal_func_t g_myth_steal_func=myth_default_steal_func;

myth_steal_func_t myth_set_steal_func(myth_steal_func_t fn)
{
	myth_steal_func_t prev=g_myth_steal_func;
	g_myth_steal_func=fn;
	return prev;
}

extern myth_running_env_t g_envs;

myth_thread_t myth_default_steal_func(int rank)
{
	myth_running_env_t env,busy_env;
	myth_thread_t next_run=NULL;
	int ws_victim;
#ifdef MYTH_WS_PROF_DETAIL
	t0=get_rdtsc();
#endif
	//Choose a worker thread that seems to be busy
	env=&g_envs[rank];
	busy_env=myth_env_get_first_busy(env);
	if (busy_env){
#if 0
#ifdef MYTH_SCHED_LOOP_DEBUG
		printf("env %p is trying to steal thread from %p...\n",env,busy_env);
#endif
#endif
		ws_victim=busy_env->rank;
		//Try to steal thread
		next_run=myth_queue_take(&busy_env->runnable_q);
		if (next_run){
#ifdef MYTH_SCHED_LOOP_DEBUG
			printf("env %p is stealing thread ? from %p...\n",env,/*steal_th,*/busy_env);
#endif
			myth_assert(next_run->status==MYTH_STATUS_READY);
			//Change worker thread descriptor
			next_run->env=env;
		}
	}
#ifdef MYTH_WS_PROF_DETAIL
	t1=get_rdtsc();
	if (g_sched_prof){
		env->prof_data.ws_attempt_count[busy_env->rank]++;
		if (next_run){
			env->prof_data.ws_hit_cycles+=t1-t0;
			env->prof_data.ws_hit_cnt++;
		}else{
			env->prof_data.ws_miss_cycles+=t1-t0;
			env->prof_data.ws_miss_cnt++;
		}
	}
#endif
	myth_log_add_ws(env,MYTH_LOG_USER,ws_victim);
	return next_run;
}
