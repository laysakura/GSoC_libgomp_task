/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_SCHED_FUNC_H_
#define MYTH_SCHED_FUNC_H_
#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <sched.h>

//Body of basic functions

#include "myth_config.h"
#include "myth_sched.h"
#include "myth_mem_barrier.h"
#include "myth_misc.h"
#include "myth_original_lib.h"

#include "myth_wsqueue.h"
#include "myth_wsqueue_func.h"

#include "myth_worker.h"
#include "myth_worker_func.h"

#include "myth_io.h"
#include "myth_io_proto.h"

#define myth_dprintf(...) myth_dprintf_1((char*)__func__,__VA_ARGS__)
void myth_dprintf_1(char *func,char *fmt,...);

static inline void myth_entry_point_cleanup(myth_thread_t this_thread);

static inline void myth_init_body(void);
static inline void myth_fini_body(void);

static inline myth_thread_t myth_create_body(myth_func_t func,void *arg);
static inline void myth_yield_body(void);
static inline void myth_join_body(myth_thread_t th,void **result);

//Return a new thread descriptor
static inline myth_thread_t get_new_myth_thread_struct_desc(myth_running_env_t env)
{
	/*if (env!=myth_get_current_env()){
		fprintf(stderr,"Rank error %d->%d\n",myth_get_current_env()->rank,env->rank);
		assert(0);
	}*/
#ifdef MYTH_SPLIT_STACK_DESC
	myth_thread_t ret;
#ifdef MYTH_ALLOC_PROF
	env->prof_data.dalloc_cnt++;
#endif
	void *v_ret;
	myth_freelist_pop(env->freelist_desc,v_ret);
	if (v_ret){
		return v_ret;
	}
	else{
		//Allocate
		int i;
		size_t th_size;
		size_t alloc_size;
		char *th_ptr;
		th_size=sizeof(myth_thread);
		alloc_size=th_size*STACK_ALLOC_UNIT;
#ifdef MYTH_ALLOC_PROF
		uint64_t t0,t1,t2,t3;
		env->prof_data.dmalloc_cnt++;
		t0=get_rdtsc();
#endif
#ifdef ALLOCATE_STACK_BY_MALLOC
		th_ptr=myth_flmalloc(env->rank,alloc_size);
#else
		alloc_size+=4095;
		alloc_size&=~(0xFFF);
#ifdef MAP_STACK
		th_ptr=mmap(NULL,alloc_size,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS|MAP_STACK,-1,0);
#else
		th_ptr=mmap(NULL,alloc_size,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
#endif
#endif
#ifdef MYTH_ALLOC_PROF
		t1=get_rdtsc();
		env->prof_data.dmalloc_cycles+=t1-t0;
		t2=get_rdtsc();
#endif
		for (i=0;i<STACK_ALLOC_UNIT;i++){
			ret=(myth_thread_t)th_ptr;
			if (i<STACK_ALLOC_UNIT-1){
				myth_freelist_push(env->freelist_desc,ret);
				th_ptr+=th_size;
			}
		}
#ifdef MYTH_ALLOC_PROF
		t3=get_rdtsc();
		env->prof_data.daddlist_cycles+=t3-t2;
#endif
	}
	return ret;
#else
	myth_thread_t ret;
	//th=NULL;
	//Search freelist index
#ifdef MYTH_ALLOC_PROF
	env->prof_data.alloc_cnt++;
#endif
	void *v_ret;
	myth_freelist_pop(env->freelist_ds,v_ret);
	if (v_ret){
		return v_ret;
	}
	else{
		//Allocate
		int i;
		size_t th_size;
		size_t st_size;
		size_t alloc_size;
		char *th_ptr;
		st_size=MYTH_MALLOC_SIZE_TO_RSIZE(REAL_STACK_SIZE);
		th_size=st_size+sizeof(myth_thread);
		alloc_size=th_size*STACK_ALLOC_UNIT;
#ifdef MYTH_ALLOC_PROF
		uint64_t t0,t1,t2,t3;
		env->prof_data.malloc_cnt++;
		t0=get_rdtsc();
#endif
#ifdef ALLOCATE_STACK_BY_MALLOC
		th_ptr=myth_flmalloc(env->rank,alloc_size);
#else
		alloc_size+=4095;
		alloc_size&=~(0xFFF);
#ifdef MAP_STACK
		th_ptr=mmap(NULL,alloc_size,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS|MAP_STACK,-1,0);
#else
		th_ptr=mmap(NULL,alloc_size,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
#endif
#endif
#ifdef MYTH_ALLOC_PROF
		t1=get_rdtsc();
		env->prof_data.malloc_cycles+=t1-t0;
		t2=get_rdtsc();
#endif
		for (i=0;i<STACK_ALLOC_UNIT;i++){
			ret=(myth_thread_t)(th_ptr+st_size);
			ret->stack=(th_ptr+st_size-sizeof(void*));
			myth_thread_lock_init(&ret->lock);
			if (i<STACK_ALLOC_UNIT-1){
				myth_freelist_push(env->freelist_ds,ret);
				th_ptr+=th_size;
			}
		}
#ifdef MYTH_ALLOC_PROF
		t3=get_rdtsc();
		env->prof_data.addlist_cycles+=t3-t2;
#endif
	}
	return ret;
#endif
}

//Return a new thread descriptor
static inline void *get_new_myth_thread_struct_stack(myth_running_env_t env)
{
	//TODO:スタックが4KB境界に合わされることを保証する
	//TODO:ランダムにオフセットをつける
	/*if (env!=myth_get_current_env()){
		fprintf(stderr,"Rank error %d->%d\n",myth_get_current_env()->rank,env->rank);
		assert(0);
	}*/
#ifdef MYTH_SPLIT_STACK_DESC
	void** ret;
	//th=NULL;
#ifdef MYTH_ALLOC_PROF
	env->prof_data.salloc_cnt++;
#endif
	myth_freelist_pop(env->freelist_stack,ret);
	if (ret){
		return ret;
	}
	else{
		//Allocate
		int i;
		size_t th_size;
		size_t alloc_size;
		char *th_ptr;
		th_size=MYTH_MALLOC_SIZE_TO_RSIZE(REAL_STACK_SIZE);
		alloc_size=th_size*STACK_ALLOC_UNIT;
#ifdef MYTH_ALLOC_PROF
		uint64_t t0,t1,t2,t3;
		env->prof_data.smalloc_cnt++;
		t0=get_rdtsc();
#endif
#ifdef ALLOCATE_STACK_BY_MALLOC
		th_ptr=myth_flmalloc(env->rank,alloc_size);
#else
		alloc_size+=4095;
		alloc_size&=~(0xFFF);
#ifdef MAP_STACK
		th_ptr=mmap(NULL,alloc_size,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS|MAP_STACK,-1,0);
#else
		th_ptr=mmap(NULL,alloc_size,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
#endif
#endif
#ifdef MYTH_ALLOC_PROF
		t1=get_rdtsc();
		env->prof_data.smalloc_cycles+=t1-t0;
		t2=get_rdtsc();
#endif
		th_ptr+=th_size-sizeof(void*);
		for (i=0;i<STACK_ALLOC_UNIT;i++){
			ret=(void**)th_ptr;
			if (i<STACK_ALLOC_UNIT-1){
				myth_freelist_push(env->freelist_stack,ret);
				th_ptr+=th_size;
			}
		}
#ifdef MYTH_ALLOC_PROF
		t3=get_rdtsc();
		env->prof_data.saddlist_cycles+=t3-t2;
#endif
	}
	return (void*)ret;
#else
	return NULL;
#endif
}

static inline void init_myth_thread_struct(myth_running_env_t env,myth_thread_t th)
{
	th->status=MYTH_STATUS_READY;
	th->join_thread=NULL;
	th->detached=0;
	//th->pickle_ptr=NULL;
	th->env=env;
	myth_queue_init_thread_data(&th->queue_data);
}

//Release thread descriptor
static inline void free_myth_thread_struct_desc(myth_running_env_t e,myth_thread_t th)
{
	/*if (e!=myth_get_current_env()){
		fprintf(stderr,"Rank error %d->%d\n",myth_get_current_env()->rank,e->rank);
		assert(0);
	}*/
#ifdef MYTH_SPLIT_STACK_DESC
	myth_assert(th);
	myth_queue_fini_thread_data(&th->queue_data);
#ifdef FREE_MYTH_THREAD_STRUCT_DEBUG
	myth_dprintf("thread descriptor %p is freed\n",th);
#endif
	//Add to a freelist
	myth_freelist_push(e->freelist_desc,(void*)th);
#else
	myth_assert(th);
#ifdef FREE_MYTH_THREAD_STRUCT_DEBUG
	myth_dprintf("thread stack %p is freed\n",th);
#endif
	//Add to a freelist
	myth_freelist_push(e->freelist_ds,(void*)th);
#endif
}

//Release thread descriptor
static inline void free_myth_thread_struct_stack(myth_running_env_t e,myth_thread_t th)
{
	/*if (e!=myth_get_current_env()){
		fprintf(stderr,"Rank error %d->%d\n",myth_get_current_env()->rank,e->rank);
		assert(0);
	}*/
#ifdef MYTH_SPLIT_STACK_DESC
	void **ptr;
	myth_assert(th);
#ifdef FREE_MYTH_THREAD_STRUCT_DEBUG
	myth_dprintf("thread stack %p is freed\n",th);
#endif
	if (th->stack){
		//Add to a freelist
		ptr=(void**)th->stack;
		myth_freelist_push(e->freelist_stack,ptr);
	}
#endif
}

//Return a new thread descriptor from external
static inline myth_thread_t get_new_myth_thread_struct_desc_ext(void)
{
	return malloc(sizeof(myth_thread));
}

//Release thread descriptor
static inline void free_myth_thread_struct_desc_ext(myth_thread_t th)
{
	free(th);
}

MYTH_CTX_CALLBACK void myth_create_1(void *arg1,void *arg2,void *arg3)
{
	uint64_t t0,t1;
	myth_running_env_t env=arg1;
	myth_thread_t new_thread=arg3;
	myth_thread_t this_thread=env->this_thread;
	myth_func_t fn=(myth_func_t)arg2;
	t0=0;t1=0;
#ifdef MYTH_CREATE_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.create_switch+=t1-env->prof_data.create_d_tmp;
	t0=get_rdtsc();
#endif
	//Push current thread to runqueue
#ifndef MYTH_NO_QUEUEOP
	myth_queue_push(&env->runnable_q,this_thread);
#endif
#ifdef MYTH_CREATE_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.create_push+=t1-t0;
	env->prof_data.create_d_cnt++;
#endif
	env->this_thread=new_thread;
#ifdef MYTH_CREATE_PROF
	uint64_t t1=get_rdtsc();
	env->prof_data.create_cycles+=t1-env->prof_data.create_cycles_tmp;
	env->prof_data.create_cnt++;
#endif
	//myth_log_add(env,MYTH_LOG_USER);
	//Call thread function
#ifdef MYTH_ENTRY_POINT_DEBUG
	myth_dprintf("Running thread %p(arg:%p)\n",new_thread,new_thread->arg);
#endif
	new_thread->result=(*fn)(new_thread->result);
	//myth_log_add(new_thread->env,MYTH_LOG_INT);
	myth_entry_point_cleanup(new_thread);
}

//Create a thread
static inline myth_thread_t myth_create_body(myth_func_t func,void *arg)
{
	uint64_t t0,t1;
	myth_thread_t new_thread;
	myth_running_env_t env;
	void *stk;
	size_t stk_size;
	t0=0;
	t1=0;
#ifdef MYTH_CREATE_PROF
	t0=get_rdtsc();
#endif
#ifdef MYTH_CREATE_PROF_DETAIL
	t0=get_rdtsc();
#endif
	env=myth_get_current_env();
	//myth_log_add(env,MYTH_LOG_INT);
#ifdef MYTH_ONE_STACK
	char l_stack[REAL_STACK_SIZE];
	new_thread=get_new_myth_thread_struct(REAL_STACK_SIZE,env);
	stk=(void*)l_stack;
	stk_size=REAL_STACK_SIZE;
#else
	//Allocate new thread descriptor
	new_thread=get_new_myth_thread_struct_desc(env);
#ifdef MYTH_SPLIT_STACK_DESC
	//スタックの末尾が格納される
	stk=get_new_myth_thread_struct_stack(env);
	new_thread->stack=stk;
#else
	stk=new_thread->stack;
#endif
	stk_size=REAL_STACK_SIZE;
#endif
	//Initialize thread descriptor
	init_myth_thread_struct(env,new_thread);
	new_thread->result=arg;
#ifdef SWITCH_AFTER_CREATE
	myth_make_context_empty(&new_thread->context,stk);
#else
	new_thread->entry_func=func;
	//Create context
	myth_make_context_voidcall(&new_thread->context,myth_entry_point,stk,stk_size);
#endif
#ifdef MYTH_CREATE_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.create_alloc+=t1-t0;
#endif
#ifdef MYTH_CREATE_PROF
	env->prof_data.create_cycles_tmp=t0;
#endif
#ifdef SWITCH_AFTER_CREATE
	myth_thread_t this_thread;
	//Push current thread to runqueue and switch context to new thread
	this_thread=env->this_thread;
#ifdef MYTH_CREATE_PROF_DETAIL
	env->prof_data.create_d_tmp=get_rdtsc();
#endif
#if defined MYTH_NO_SWITCH
	myth_create_1((void*)env,(void*)func,(void*)new_thread);
#else
	myth_swap_context_withcall(&this_thread->context,&new_thread->context,myth_create_1,(void*)env,(void*)func,(void*)new_thread);
#ifdef MYTH_SWITCH_PROF
	t1=get_rdtsc();
	env->prof_data.sw_cycles+=t1-env->prof_data.sw_tmp;
	env->prof_data.sw_cnt++;
#endif
#endif
#else
	//Push a new thread to runqueue
	myth_queue_push(&env->runnable_q,new_thread);
#ifdef MYTH_CREATE_PROF
	t1=get_rdtsc();
	env->prof_data.create_cycles+=t1-t0;env->prof_data.create_cnt++;
#endif
#endif
#ifdef MYTH_NO_JOIN
	void *ret;
	ret=new_thread->result;
	free_myth_thread_struct(env,new_thread);
	return (myth_thread_t)ret;
#else
	//myth_log_add(this_thread->env,MYTH_LOG_USER);
	return new_thread;
#endif
}

MYTH_CTX_CALLBACK void myth_yield_1(void *arg1,void *arg2,void *arg3)
{
	myth_running_env_t env=arg1;
	myth_thread_t this_thread=arg2,next_thread=arg3;
	{
		//Push current thread to the tail of runqueue
		myth_queue_put(&env->runnable_q,this_thread);
		env->this_thread=next_thread;
	}
}

//Yield execution to next runnable thread
static inline void myth_yield_body(void)
{
	myth_running_env_t env;
	myth_thread_t th,next;
	env=myth_get_current_env();
	th=env->this_thread;
	myth_assert(th);
#ifdef MYTH_YIELD_DEBUG
	myth_dprintf("myth_yield:thread %p yields execution to scheduler\n",th);
#endif
	//Get next runnable thread
	next=myth_queue_pop(&env->runnable_q);
	if (next){
		//Switch context and push current thread to runqueue
		myth_swap_context_withcall(&th->context,&next->context,myth_yield_1,(void*)env,(void*)th,(void*)next);
	}
#ifdef MYTH_YIELD_DEBUG
	myth_dprintf("myth_yield:thread %p continues execution\n",th);
#endif
}

MYTH_CTX_CALLBACK void myth_yield2_1(void *arg1,void *arg2,void *arg3)
{
	myth_running_env_t env=arg1;
	myth_thread_t this_thread=arg2,next_thread=arg3;
	{
		//Push current thread to the tail of runqueue
		myth_queue_push(&env->runnable_q,this_thread);
		env->this_thread=next_thread;
	}
}

//Yield execution to next runnable thread
static inline void myth_yield2_body(void)
{
	myth_running_env_t env;
	myth_thread_t th,next;
	env=myth_get_current_env();
	th=env->this_thread;
	myth_assert(th);
	//Get next runnable thread
	next=myth_queue_pop(&env->runnable_q);
	if (next){
		//Switch context and push current thread to runqueue
		myth_swap_context_withcall(&th->context,&next->context,myth_yield2_1,(void*)env,(void*)th,(void*)next);
	}
}

static inline void myth_join_1(myth_running_env_t e,myth_thread_t th,void **result)
{
	if (result!=NULL){
		*result=th->result;
	}
	free_myth_thread_struct_desc(e,th);
}

MYTH_CTX_CALLBACK void myth_join_2(void *arg1,void *arg2,void *arg3)
{
	myth_running_env_t env=arg1;
	myth_thread_t th=arg2,next_thread=arg3;
	//Set join target
	myth_desc_join_set(th,env->this_thread);
	myth_thread_lock_unlock(&th->lock);
	//Change current running thread
	env->this_thread=next_thread;
	//myth_log_add(env,MYTH_LOG_USER);
}

MYTH_CTX_CALLBACK void myth_join_3(void *arg1,void *arg2,void *arg3)
{
	myth_thread_t this_thread=arg1,th=arg2;
	//Set join target
	myth_desc_join_set(th,this_thread);
	//Change current running thread
	myth_thread_lock_unlock(&th->lock);
}

//Wait until the finish of a thread
static inline void myth_join_body(myth_thread_t th,void **result)
{
	//TODO:joinの後もstatusメンバがblockedのままなのを修正
	uint64_t t0,t1;
	myth_running_env_t env;
	myth_thread_t this_thread;
	t0=0;t1=0;
#ifdef MYTH_NO_JOIN
	{
		if (result)*result=th;
		return;
	}
#endif
#ifdef MYTH_JOIN_PROF
	uint64_t t0,t1,t2,t3;
	t0=get_rdtsc();
#endif
#ifdef MYTH_JOIN_PROF_DETAIL
	t0=get_rdtsc();
#endif
	env=myth_get_current_env();
	//myth_log_add(env,MYTH_LOG_INT);
	this_thread=env->this_thread;
#ifdef MYTH_JOIN_DEBUG
	myth_dprintf("myth_join:join started\n");
#endif
	//If target is finished, return immediately
	if (th->status==MYTH_STATUS_FREE_READY2){
#ifdef MYTH_JOIN_DEBUG
		myth_dprintf("myth_join:join thread (%p) is already finished. Return immediately\n",th);
#endif
		//guarantee that successive read starts after this line
		myth_rbarrier();
#ifdef MYTH_JOIN_PROF_DETAIL
		if (result!=NULL)*result=th->result;
		t1=get_rdtsc();
		env->prof_data.join_join+=t1-t0;
		t0=get_rdtsc();
		free_myth_thread_struct_desc(env,th);
		t1=get_rdtsc();
		env->prof_data.join_release+=t1-t0;
		env->prof_data.join_d_cnt++;
#else
		myth_join_1(env,th,result);
#endif
#ifdef MYTH_JOIN_PROF
		t1=get_rdtsc();
		env->prof_data.join_cycles+=t1-t0;
		env->prof_data.join_cnt++;
#endif
		//myth_log_add(env,MYTH_LOG_USER);
		return;
	}
	//Obtain lock and check again
	myth_thread_lock_lock(&th->lock);
	//If target is finished, return
	if (myth_desc_is_finished(th)){
#ifdef MYTH_JOIN_DEBUG
		myth_dprintf("myth_join:join thread (%p) is already finished. Return immediately\n",th);
#endif
		myth_thread_lock_unlock(&th->lock);
		myth_join_1(env,th,result);
#ifdef MYTH_JOIN_PROF
		t1=get_rdtsc();
		env->prof_data.join_cycles+=t1-t0;
		env->prof_data.join_cnt++;
#endif
		//myth_log_add(env,MYTH_LOG_USER);
		return;
	}
	//Set current thread as blocked
	myth_desc_set_not_runnable(this_thread);
#ifdef MYTH_JOIN_DEBUG
	myth_dprintf("myth_join:%p is added to %p's waiting list\n",this_thread,th);
#endif
	//Get next runnable thread
	myth_thread_t next;
	next=myth_queue_pop(&env->runnable_q);
#ifdef MYTH_JOIN_PROF
	t1=get_rdtsc();
#endif
	if (next){
		//Switch to next runnable thread
		myth_swap_context_withcall(&this_thread->context,&next->context,myth_join_2,(void*)env,(void*)th,(void*)next);
	}
	else{
		//myth_log_add(this_thread->env,MYTH_LOG_WS);
		//Since there is no runnable thread, switch to scheduler and do work-steaing
		myth_swap_context_withcall(&this_thread->context,&env->sched.context,myth_join_3,(void*)this_thread,(void*)th,NULL);
	}
#ifdef MYTH_JOIN_PROF
	t2=get_rdtsc();
#endif
	//myth_log_add(this_thread->env,MYTH_LOG_INT);
#ifdef MYTH_JOIN_DEBUG
	myth_dprintf("myth_join:%p is resumed\n",this_thread);
#endif
	myth_thread_lock_lock(&th->lock);
	//In this position, target is guaranteed to be finished
	myth_assert(myth_desc_is_runnable(this_thread));
	myth_assert(myth_desc_is_finished(th));
	//Get return value
	myth_thread_lock_unlock(&th->lock);
	myth_join_1(myth_get_current_env(),th,result);
#ifdef MYTH_JOIN_PROF
	t3=get_rdtsc();
	env->prof_data.join_cycles+=(t1-t0)+(t3-t2);
	env->prof_data.join_cnt++;
#endif
	//myth_log_add(this_thread->env,MYTH_LOG_USER);
}

//Detach a thread. The resource of detached thread is freed immediately after it finishes.
static inline void myth_detach_body(myth_thread_t th)
{
	if (th->status==MYTH_STATUS_FREE_READY2){
		//If a thread is finished, just release resource
		free_myth_thread_struct_desc(myth_get_current_env(),th);
		return;
	}
	//Obtain lock
	myth_thread_lock_lock(&th->lock);
	if (myth_desc_is_finished(th)){//If a thread is finished, release resource
		myth_thread_lock_unlock(&th->lock);
		free_myth_thread_struct_desc(myth_get_current_env(),th);
	}
	else{//Set a thread as detached
		myth_desc_set_detached(th);
		myth_thread_lock_unlock(&th->lock);
	}
}

static inline void myth_log_start_body(void)
{
	g_log_worker_stat=1;
}

static inline void myth_log_pause_body(void)
{
	g_log_worker_stat=0;
}

#ifndef SWITCH_AFTER_CREATE
//Entry point of threads
static void myth_entry_point(void)
{
	myth_thread_t this_thread;
	myth_running_env_t env;
#ifdef MYTH_ENTRY_POINT_PROF
	uint64_t t0,t1;
	t0=get_rdtsc();
#endif
	env=myth_get_current_env();
	this_thread=env->this_thread;
#ifdef MYTH_ENTRY_POINT_PROF
	t1=get_rdtsc();
	env->prof_data.ep_cyclesA+=t1-t0;
#endif
#ifdef MYTH_ENTRY_POINT_DEBUG
	myth_dprintf("Running thread %p(arg:%p)\n",this_thread,this_thread->arg);
#endif
	//Execute a thread function
	this_thread->result=(*(this_thread->entry_func))(this_thread->result);
	myth_entry_point_cleanup(this_thread);
}
#endif

//Switch to next_thread
MYTH_CTX_CALLBACK void myth_entry_point_1(void *arg1,void *arg2,void *arg3)
{
	uint64_t t0,t1;
	myth_running_env_t env=arg1;
	myth_thread_t this_thread=arg2,next_thread=arg3;
	t0=0;t1=0;
#ifdef MYTH_EP_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.ep_switch+=t1-env->prof_data.ep_d_tmp;
	t0=get_rdtsc();
#endif
	free_myth_thread_struct_stack(env,this_thread);
	if (this_thread->detached){
		//The thread is detached. Release resource
#ifdef MYTH_ENTRY_POINT_DEBUG
		myth_dprintf("Thread %p is detached.Freed resource\n",this_thread);
#endif
		myth_thread_lock_unlock(&this_thread->lock);
		free_myth_thread_struct_desc(env,this_thread);
	}
	else{
		this_thread->status=MYTH_STATUS_FREE_READY;
		myth_thread_lock_unlock(&this_thread->lock);
		this_thread->status=MYTH_STATUS_FREE_READY2;
	}
	env->this_thread=next_thread;
#ifdef MYTH_EP_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.ep_join+=t1-t0;
	env->prof_data.ep_d_cnt++;
#endif
#ifdef MYTH_ENTRY_POINT_PROF
	uint64_t t3;
	t3=get_rdtsc();
	env->prof_data.ep_cnt++;
	env->prof_data.ep_cyclesB+=t3-env->prof_data.ep_cycles_tmp;
#endif
#ifdef MYTH_SWITCH_PROF
	env->prof_data.sw_tmp=get_rdtsc();
#endif
}

//Switch to the scheduler
MYTH_CTX_CALLBACK void myth_entry_point_2(void *arg1,void *arg2,void *arg3)
{
	uint64_t t0,t1;
	myth_running_env_t env=arg1;
	myth_thread_t this_thread=arg2;
	t0=0;t1=0;
#ifdef MYTH_EP_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.ep_switch+=t1-env->prof_data.ep_d_tmp;
	t0=get_rdtsc();
#endif
	free_myth_thread_struct_stack(env,this_thread);
	if (this_thread->detached){
		//The thread is detached. Release resource
#ifdef MYTH_ENTRY_POINT_DEBUG
		myth_dprintf("Thread %p is detached.Freed resource\n",this_thread);
#endif
		myth_thread_lock_unlock(&this_thread->lock);
		free_myth_thread_struct_desc(env,this_thread);
	}
	else{
		this_thread->status=MYTH_STATUS_FREE_READY;
		myth_thread_lock_unlock(&this_thread->lock);
		this_thread->status=MYTH_STATUS_FREE_READY2;
	}
#ifdef MYTH_EP_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.ep_join+=t1-t0;
	env->prof_data.ep_d_cnt++;
#endif
#ifdef MYTH_ENTRY_POINT_PROF
	uint64_t t3;
	t3=get_rdtsc();
	env->prof_data.ep_cnt++;
	env->prof_data.ep_cyclesB+=t3-env->prof_data.ep_cycles_tmp;
#endif
}

static inline void myth_entry_point_cleanup(myth_thread_t this_thread)
{
#ifdef MYTH_NO_JOIN
#ifndef MYTH_NO_QUEUEOP
	next=myth_queue_pop(&env->runnable_q);
#endif
	this_thread->status=MYTH_STATUS_FREE_READY2;
	return;
#endif
	myth_running_env_t env;
	myth_thread_t this_thread_v;
	uint64_t t0,t1;
	t0=0;t1=0;
#ifdef MYTH_ENTRY_POINT_DEBUG
	myth_dprintf("Finished thread %p\n",this_thread);
#endif
#ifdef MYTH_ENTRY_POINT_PROF
	uint64_t t2;
	t2=get_rdtsc();
#endif
#ifdef MYTH_EP_PROF_DETAIL
	t0=get_rdtsc();
#endif
	//Get worker thread descriptor
	env=this_thread->env;
	myth_assert(this_thread->env==env);
	myth_assert(this_thread==env->this_thread);
#ifdef MYTH_ENTRY_POINT_PROF
	env->prof_data.ep_cycles_tmp=t2;
#endif
	this_thread_v=this_thread;
	myth_thread_lock_lock(&this_thread->lock);
	myth_thread_t wait_thread=this_thread_v->join_thread;
	//Execute a thread waiting for current thread
	if (wait_thread){
		//sanity check
		myth_assert(wait_thread->status==MYTH_STATUS_BLOCKED);
		wait_thread->env=env;
		wait_thread->status=MYTH_STATUS_READY;
#ifdef MYTH_ENTRY_POINT_DEBUG
		myth_dprintf("Join process completed %p\n",this_thread);
#endif
#ifdef SWITCH_AFTER_EXIT
#ifdef MYTH_EP_PROF_DETAIL
		t1=get_rdtsc();
		env->prof_data.ep_join+=t1-t0;
		env->prof_data.ep_d_tmp=get_rdtsc();
#endif
		//Execute
		myth_set_context_withcall(&wait_thread->context,myth_entry_point_1,(void*)env,this_thread,wait_thread);
#else
		//Push to the runqueue
		myth_queue_push(&env->runnable_q,wait_thread);
#endif
	}
#ifdef MYTH_EP_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.ep_join+=t1-t0;
	t0=get_rdtsc();
#endif
	myth_thread_t next;
	//Get next runnable thread
#ifndef MYTH_NO_QUEUEOP
	next=myth_queue_pop(&env->runnable_q);
#else
	next=NULL;
#endif
#ifdef MYTH_EP_PROF_DETAIL
	t1=get_rdtsc();
	env->prof_data.ep_pop+=t1-t0;
#endif
#ifndef MYTH_NO_SWITCH
	if (next){
#ifdef MYTH_EP_PROF_DETAIL
		env->prof_data.ep_d_tmp=get_rdtsc();
#endif
		//Switch to the next thread
		myth_set_context_withcall(&next->context,myth_entry_point_1,(void*)env,this_thread,next);
	}
	else{
#ifdef MYTH_EP_PROF_DETAIL
		env->prof_data.ep_d_tmp=get_rdtsc();
#endif
		//Switch to the scheduler
		myth_set_context_withcall(&env->sched.context,myth_entry_point_2,(void*)env,this_thread,NULL);
	}
#endif
	if (next){
		myth_entry_point_1((void*)env,this_thread,next);
	}
	else{
		myth_entry_point_2((void*)env,this_thread,NULL);
	}
}

static inline void myth_sched_prof_start_body(void)
{
	g_sched_prof=1;
}

static inline void myth_sched_prof_pause_body(void)
{
	g_sched_prof=0;
}
/*
MYTH_CTX_CALLBACK void myth_serialize_1(void *arg1,void *arg2,void *arg34_)
{
	myth_running_env_t env=arg1;
	void **arg34=(void**)arg34_;
	void *arg3=arg34[0],*arg4=arg34[1];
	myth_thread_t th=arg2,next_thread=arg3;
	myth_pickle_t pickle=arg4;
	//Set join target
	myth_desc_join_set(th,env->this_thread);
	th->pickle_ptr=pickle;
	myth_thread_lock_unlock(&th->lock);
	//Change current running thread
	env->this_thread=next_thread;
	//myth_log_add(env,MYTH_LOG_USER);
}

MYTH_CTX_CALLBACK void myth_serialize_2(void *arg1,void *arg2,void *arg3)
{
	myth_thread_t this_thread=arg1,th=arg2;
	myth_pickle_t pickle=arg3;
	//Set join target
	myth_desc_join_set(th,this_thread);
	th->pickle_ptr=pickle;
	//Change current running thread
	myth_thread_lock_unlock(&th->lock);
}

//シリアライズを試みる。成功したら0以外、失敗したら0を返す
static inline int myth_serialize_body(myth_thread_t th,myth_pickle_t p)
{
	//TODO:スレッドに対してmyth_pickle_tを渡し、マイグレート要求を出してコンテキストを切り替える。
	//joinとほぼ同じ操作。
	//制御が帰って来たらpのresultメンバを見る。NULLだったら失敗。
	uint64_t t0,t1;
	myth_running_env_t env;
	myth_thread_t this_thread;
	t0=0;t1=0;
	env=myth_get_current_env();
	this_thread=env->this_thread;
	//Obtain lock and check again
	myth_thread_lock_lock(&th->lock);
	//ターゲットがすでに終了していたらエラー
	if (myth_desc_is_finished(th)){
		return 0;
	}
	//スレッドをブロックし、対象スレッドがmyth_yieldを呼ぶのを待つ
	myth_desc_set_not_runnable(this_thread);
	myth_thread_t next;
	next=myth_queue_pop(&env->runnable_q);
	if (next){
		//Switch to next runnable thread
		void *arg34[2]={next,p};
		myth_swap_context_withcall(&this_thread->context,&next->context,myth_serialize_1,(void*)env,(void*)th,(void*)arg34);
	}
	else{
		//myth_log_add(this_thread->env,MYTH_LOG_WS);
		//Since there is no runnable thread, switch to scheduler and do work-steaing
		myth_swap_context_withcall(&this_thread->context,&env->sched.context,myth_serialize_2,(void*)this_thread,(void*)th,p);
	}
	//myth_log_add(this_thread->env,MYTH_LOG_INT);
	myth_thread_lock_lock(&th->lock);
	//In this position, target is guaranteed to be finished
	myth_assert(myth_desc_is_runnable(this_thread));
	//Get return value
	myth_thread_lock_unlock(&th->lock);
	return 1;
}*/

//stealしたディスクリプタのスタック領域を解放
static inline void myth_release_stack_body(myth_thread_t th)
{
	myth_running_env_t e=myth_get_current_env();
	free_myth_thread_struct_stack(e,th);
}

static inline void myth_release_desc_body(myth_thread_t th)
{
	myth_running_env_t e=myth_get_current_env();
	free_myth_thread_struct_desc(e,th);
}

//stealしたスレッドのディスクリプタを解放

//シリアライズを行う。
static inline void myth_serialize_body(myth_thread_t th,myth_pickle_t p)
{
	//ディスクリプタをコピー
	memcpy(&p->desc,th,sizeof(myth_thread));
	//スタックをコピー
	memcpy(&p->stack,(void*)(((char*)th->stack)-(REAL_STACK_SIZE-sizeof(void*))),REAL_STACK_SIZE);
}

//デシリアライズを試みる。成功したらスレッドへのポインタ、失敗したらNULLを返す
static inline myth_thread_t myth_deserialize_body(myth_pickle_t p)
{
	void *stack_ptr;
	myth_running_env_t e;
	e=myth_get_current_env();
	myth_thread_t ret;
	//スタックのアドレス範囲に対してmmapをこころみる
	void *stack_start_addr;
	stack_start_addr=(void*)( ((char*)p->desc.stack)-(REAL_STACK_SIZE-sizeof(void*)) );
#ifdef MAP_STACK
	stack_ptr=mmap(stack_start_addr,REAL_STACK_SIZE,PROT_READ|PROT_WRITE,MAP_FIXED|MAP_PRIVATE|MAP_ANONYMOUS|MAP_STACK,-1,0);
#else
	stack_ptr=mmap(stack_start_addr,REAL_STACK_SIZE,PROT_READ|PROT_WRITE,MAP_FIXED|MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
#endif
	//確保に失敗したらエラーを返す
	if (stack_ptr==MAP_FAILED)return NULL;
	myth_assert(stack_ptr!=p->desc.stack);
	//ディスクリプタを確保
	ret=get_new_myth_thread_struct_desc(e);
	//ディスクリプタをコピー
	memcpy(ret,&p->desc,sizeof(myth_thread));
	//スタックをコピー
	memcpy(stack_ptr,p->stack,REAL_STACK_SIZE);
	return ret;
}

static inline myth_thread_t myth_ext_deserialize_body(myth_pickle_t p)
{
	void *stack_ptr;
	myth_running_env_t e;
	e=myth_get_current_env();
	myth_thread_t ret;
	//スタックのアドレス範囲に対してmmapをこころみる
	void *stack_start_addr;
	stack_start_addr=(void*)( ((char*)p->desc.stack)-(REAL_STACK_SIZE-sizeof(void*)) );
#ifdef MAP_STACK
	stack_ptr=mmap(stack_start_addr,REAL_STACK_SIZE,PROT_READ|PROT_WRITE,MAP_FIXED|MAP_PRIVATE|MAP_ANONYMOUS|MAP_STACK,-1,0);
#else
	stack_ptr=mmap(stack_start_addr,REAL_STACK_SIZE,PROT_READ|PROT_WRITE,MAP_FIXED|MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
#endif
	//確保に失敗したらエラーを返す
	if (stack_ptr==MAP_FAILED)return NULL;
	myth_assert(stack_ptr!=p->desc.stack);
	//ディスクリプタを確保
	ret=get_new_myth_thread_struct_desc_ext();
	//ディスクリプタをコピー
	memcpy(ret,&p->desc,sizeof(myth_thread));
	//スタックをコピー
	memcpy(stack_ptr,p->stack,REAL_STACK_SIZE);
	return ret;
}

#include "myth_io_func.h"

#endif /* MYTH_FUNC_H_ */
