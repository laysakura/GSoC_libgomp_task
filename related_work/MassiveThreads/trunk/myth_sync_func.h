/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_SYNC_FUNC_H_
#define MYTH_SYNC_FUNC_H_

#include "myth_sync.h"

static inline myth_barrier_t myth_barrier_create_body(int nthreads)
{
	myth_running_env_t env;
	myth_barrier_t ret;
	env=myth_get_current_env();
	ret=myth_flmalloc(env->rank,sizeof(myth_barrier));
	ret->nthreads=nthreads;
	ret->rest=nthreads;
	myth_thread_lock_init(&ret->lock);
	if (nthreads>1){
		ret->th=myth_flmalloc(env->rank,sizeof(myth_thread_t)*(nthreads-1));
	}
	myth_wbarrier();
	return ret;
}

MYTH_CTX_CALLBACK void myth_barrier_wait_1(void *arg1,void *arg2,void *arg3)
{
	myth_running_env_t env;
	myth_thread_t next;
	myth_thread_lock_t *plock;
	env=(myth_running_env_t)arg1;
	next=(myth_thread_t)arg2;
	plock=(myth_thread_lock_t*)arg3;
	myth_assert(next);
	env->this_thread=next;
	myth_thread_lock_unlock(plock);
}

MYTH_CTX_CALLBACK void myth_barrier_wait_2(void *arg1,void *arg2,void *arg3)
{
	myth_running_env_t env;
	myth_thread_lock_t *plock;
	env=(myth_running_env_t)arg1;
	plock=(myth_thread_lock_t*)arg2;
	env->this_thread=NULL;
	myth_thread_lock_unlock(plock);
}

static inline int myth_barrier_wait_body(myth_barrier_t bar)
{
	if (bar->nthreads<2)return MYTH_BARRIER_SERIAL_THREAD;
	myth_barrier_t b;
	b=bar;
	int newval;
	myth_running_env_t env;
	myth_thread_t this_thread;
	env=myth_get_current_env();
	this_thread=env->this_thread;
	myth_thread_lock_lock(&bar->lock);
	newval=b->rest;
	newval--;
	b->rest=newval;
	//fprintf(stderr,"B%d\n",newval);
	if (newval!=0){
		//まだ残っている。このスレッドを止める
		b->th[newval-1]=this_thread;
		//キューからスレッドを取り出す
		myth_thread_t next;
		next=myth_queue_pop(&env->runnable_q);
		if (next){
			next->env=env;
			env->this_thread=next;
			//コンテキストを入れ替える
			myth_swap_context_withcall(&this_thread->context,&next->context,myth_barrier_wait_1,(void*)env,(void*)next,(void*)&bar->lock);
		}
		else{
			//スレッドがないので、スケジューラに移動し、ワークスチールをやる
			myth_swap_context_withcall(&this_thread->context,&env->sched.context,myth_barrier_wait_2,(void*)env,(void*)&bar->lock,NULL);
		}
		return 0;
	}
	else{
		//全員がバリアを通過した
		//バリアを元に戻す
		b->rest=b->nthreads;
		//存在する全部のスレッドをキューに突っ込む
		int i;
		for (i=0;i<b->nthreads-1;i++){
			//envを書き換えておく
			b->th[i]->env=env;
			myth_queue_push(&env->runnable_q,b->th[i]);
		}
		myth_thread_lock_unlock(&bar->lock);
		return MYTH_BARRIER_SERIAL_THREAD;
	}
	myth_unreachable();
	return 0;
}

static inline int myth_barrier_destroy_body(myth_barrier_t bar)
{
	myth_running_env_t env;
	env=myth_get_current_env();
	myth_flfree(env->rank,sizeof(myth_thread_t)*((bar)->nthreads-1),(bar)->th);
	myth_flfree(env->rank,sizeof(myth_barrier),bar);
	return 0;
}

static inline myth_jc_t myth_jc_create_body(int val)
{
	//初期値がvalであるjoin counterを作成
	//valは必ず正の値。
	assert(val>0);
	myth_jc_t ret;
	myth_running_env_t env;
	env=myth_get_current_env();
	ret=myth_flmalloc(env->rank,sizeof(myth_jc));
	ret->initial=val;
	ret->count=val;
	ret->th=NULL;
	myth_thread_lock_init(&ret->lock);
	return ret;
}

MYTH_CTX_CALLBACK void myth_jc_wait_1(void *arg1,void *arg2,void *arg3)
{
	myth_running_env_t env;
	myth_thread_t next;
	myth_thread_lock_t *plock;
	env=(myth_running_env_t)arg1;
	next=(myth_thread_t)arg2;
	plock=(myth_thread_lock_t*)arg3;
	myth_assert(next);
	env->this_thread=next;
	myth_thread_lock_unlock(plock);
}

MYTH_CTX_CALLBACK void myth_jc_wait_2(void *arg1,void *arg2,void *arg3)
{
	myth_running_env_t env;
	myth_thread_lock_t *plock;
	env=(myth_running_env_t)arg1;
	plock=(myth_thread_lock_t*)arg2;
	env->this_thread=NULL;
	myth_thread_lock_unlock(plock);
}

static inline void myth_jc_wait_body(myth_jc_t jc)
{
	if (jc->count<=0){
		//もしjoin counterが0ならばreset
		myth_thread_lock_lock(&jc->lock);
		assert(jc->th==NULL);
		jc->count+=jc->initial;
		myth_thread_lock_unlock(&jc->lock);
		return;
	}
	else{
		assert(jc->th==NULL);
		//待つ。とりあえずこのコンテキストでは行わない
		myth_running_env_t env;
		env=myth_get_current_env();
		myth_thread_t this_thread;
		this_thread=env->this_thread;
		//スレッド構造体を設定
		//ret->th=this_thread;
#if 0
		//デクリメント直後に入れられるとやばいので、DCASを使う
		while (1){
			intptr_t cnt=jc->count;
			intptr_t ok;
#ifdef __x86_64__
			asm volatile(
					"xor %1,%1\n"//ok=0
					"cmpxchg16b %6\n"//compare and swap
					"jne 1f:\n"//if failure goto 1
					"mov $1,%1\n"//ok=1
					"1:\n"
					:"=d"(cnt),"=r"(ok)
					:"a"(NULL),"0"(cnt),"b"(this_thread),"c"(cnt-1),"m"(jc->th):"cc");
#else
#error
#endif
			//設定に成功したら抜ける
			if (ok)break;
			//もし紆余曲折の果てにカウンタが0になったなら抜ける
			if (!cnt){
				jc->th=NULL;
				jc->count=jc->initial;
				myth_wbarrier();
				return;
			}
		}
#else
		myth_thread_lock_lock(&jc->lock);
		jc->th=this_thread;
#endif
		//退避レジスタを復帰
		//asm volatile("pop %rbx\n");
		//キューからスレッドを取り出す
		myth_thread_t next;
		next=myth_queue_pop(&env->runnable_q);
		if (next){
			next->env=env;
			env->this_thread=next;
			//コンテキストを入れ替える
			myth_swap_context_withcall(&this_thread->context,&next->context,myth_jc_wait_1,(void*)env,(void*)next,(void*)&jc->lock);
		}
		else{
			//スレッドがないので、スケジューラに移動し、ワークスチールをやる
			myth_swap_context_withcall(&this_thread->context,&env->sched.context,myth_jc_wait_2,(void*)env,(void*)&jc->lock,NULL);
		}
		assert(jc->th==NULL);
		myth_thread_lock_lock(&jc->lock);
		jc->count+=jc->initial;
		myth_thread_lock_unlock(&jc->lock);
	}
}

static inline void myth_jc_dec_body(myth_jc_t jc)
{
	int dec_ret;
	myth_thread_lock_lock(&jc->lock);
	dec_ret=jc->count;
	if (1 || dec_ret>0){
		//join counterの値をデクリメントする
		dec_ret=--jc->count;
		//assert(dec_ret>=0);
		if (dec_ret<=0){
			//join counterが0になった
			//待機中のスレッドが存在するならばそれを実行可能にする
			if (jc->th){
				myth_thread_t th=jc->th;
				jc->th=NULL;
				myth_running_env_t env=myth_get_current_env();
				th->env=env;
				myth_queue_push(&env->runnable_q,th);
			}
		}
		myth_thread_lock_unlock(&jc->lock);
	}
	else{
		//join counterがfullなのでまだ進めない。
		//コンテキストを切り替え、resetされた段階で再開する
	}
}

//mutex
static inline myth_mutex_t myth_mutex_create_body()
{
	myth_mutex_t ret;
	myth_running_env_t env;
	env=myth_get_current_env();
	ret=myth_flmalloc(env->rank,sizeof(myth_mutex));
	myth_thread_lock_init(&ret->lock);
	return NULL;
}

static inline int myth_mutex_destroy_body(myth_mutex_t mtx)
{
	myth_running_env_t env;
	env=myth_get_current_env();
	myth_thread_lock_destroy(&mtx->lock);
	myth_flfree(env->rank,sizeof(myth_mutex),mtx);
	return 0;
}

static inline int myth_mutex_lock_body(myth_mutex_t mtx)
{
	//ロックを取得する
	myth_thread_lock_lock(&mtx->lock);
	/*if (myth_thread_lock_trylock(&mtx->lock)){
		//内部ロックの取得をこころみ、失敗したら待ちリストに追加
	}*/
	return 0;
}

static inline int myth_mutex_trylock_body(myth_mutex_t mtx)
{
	//ロックの取得をこころみる
	myth_thread_lock_trylock(&mtx->lock);
	return 0;
}

static inline int myth_mutex_unlock_body(myth_mutex_t mtx)
{
	//ロックを解除する
	myth_thread_lock_unlock(&mtx->lock);
	return 0;
}

//条件変数
static inline myth_cond_t myth_cond_init_body()
{
	myth_cond_t ret;
	myth_running_env_t env;
	env=myth_get_current_env();
	ret=myth_flmalloc(env->rank,sizeof(myth_cond));
	return ret;
}

static inline int myth_cond_destroy_body(myth_cond_t cond)
{
	myth_running_env_t env;
	env=myth_get_current_env();
	myth_flfree(env->rank,sizeof(myth_cond),cond);
	return 0;
}

static inline int myth_cond_signal_body(myth_cond_t cond)
{
	//条件変数を待っているスレッドのうちどれか一つを再開させる
	//待ちリストに入っている先頭のスレッドを自分のランキューに入れる
	return 0;
}

static inline int myth_cond_broadcast_body(myth_cond_t cond)
{
	//条件変数を待っているすべてのスレッドを再開させる
	//待ちリストに入っている全部のスレッドを全部自分のランキューに入れる
	return 0;
}

static inline int myth_cond_wait_body(myth_cond_t cond,myth_mutex_t mtx)
{
	//条件変数を待つ
	//待ちリストに自身を入れる
	//排他制御が行われているので、キューは1対1で扱える
	myth_mutex_unlock_body(mtx);
	//またmutexにロックをかける
	myth_mutex_lock_body(mtx);
	return 0;
}

#endif /* MYTH_SYNC_FUNC_H_ */
