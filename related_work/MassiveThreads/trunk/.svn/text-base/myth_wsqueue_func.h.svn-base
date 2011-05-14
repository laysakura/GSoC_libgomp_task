/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_WSQUEUE_FUNC_H_
#define MYTH_WSQUEUE_FUNC_H_

#include "myth_config.h"
#include "myth_desc.h"
#include "myth_wsqueue.h"
#include "myth_wsqueue_proto.h"

//実体。インライン関数にしたいので、基本的にヘッダファイルに記述する。

//各スレッドがもつデータを初期化する
static inline void myth_queue_init_thread_data(myth_queue_data_t th){}
static inline void myth_queue_fini_thread_data(myth_queue_data_t th){}

//シグナル対策に、関数に入った時と脱出したときに状態変数をリセット
//全員が呼んで問題ない関数には付加しない。もともと解決できることがわかっているから。
static inline void myth_queue_enter_operation(myth_thread_queue_t q)
{
#ifdef USE_SIGNAL_CS
	assert(q->op_flag==0);
	q->op_flag=1;
	myth_wbarrier();
#endif
#ifdef USE_THREAD_CS
	real_pthread_mutex_lock(&q->mtx);
#endif
}

static inline void myth_queue_exit_operation(myth_thread_queue_t q)
{
#ifdef USE_SIGNAL_CS
	assert(q->op_flag==1);
	myth_wbarrier();
	q->op_flag=0;
#endif
#ifdef USE_THREAD_CS
	real_pthread_mutex_unlock(&q->mtx);
#endif
}

static inline int myth_queue_is_operating(myth_thread_queue_t q)
{
	int ret=0;
#ifdef USE_SIGNAL_CS
	ret=ret && q->op_flag;
#endif
	return ret;
}

//キューを初期化
static inline void myth_queue_init(myth_thread_queue_t q){
	//mutexを初期化
	myth_queue_lock_init(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_ANY
	myth_queue_lock_init(&q->m_lock);
#endif
#ifdef USE_SIGNAL_CS
	q->op_flag=0;
#endif
#ifdef USE_THREAD_CS
	pthread_mutexattr_t attr;
	pthread_mutexattr_init(&attr);
	pthread_mutexattr_settype(&attr,PTHREAD_MUTEX_ERRORCHECK);
	real_pthread_mutex_init(&q->mtx,&attr);
	pthread_mutexattr_destroy(&attr);
#endif
	q->size=INITIAL_QUEUE_SIZE;
	q->ptr=myth_malloc(sizeof(myth_thread_t)*q->size);
	memset(q->ptr,0,sizeof(myth_thread_t)*q->size);
	q->base=q->size/2;
	q->top=q->base;
}
//キューを解放
static inline void myth_queue_fini(myth_thread_queue_t q){
	myth_queue_clear(q);
	myth_queue_lock_destroy(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_ANY
	myth_queue_lock_destroy(&q->m_lock);
#endif
	myth_free(q->ptr);
}

static inline void myth_queue_clear(myth_thread_queue_t q)
{
	myth_queue_enter_operation(q);
#if defined USE_LOCK || defined USE_LOCK_CLEAR
	myth_queue_lock_lock(&q->m_lock);
#endif
	//ロックを取得
	myth_queue_lock_lock(&q->lock);
	//スレッドは存在しないはず
	myth_assert(q->top==q->base);
	//ポインタを真ん中にシフトする
	q->base=q->size/2;
	q->top=q->base;
	//解放
	myth_queue_lock_unlock(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_CLEAR
	myth_queue_lock_unlock(&q->m_lock);
#endif
	myth_queue_exit_operation(q);
}

//push/pop/peek:オーナースレッドがキューを操作する関数
static inline void __attribute__((always_inline)) myth_queue_push(myth_thread_queue_t q,myth_thread_t th)
{
	myth_queue_enter_operation(q);
#if defined USE_LOCK || defined USE_LOCK_PUSH
	myth_queue_lock_lock(&q->m_lock);
#endif
	//配列を拡張する必要があるかチェック
	int t=q->top;
	//読み取りの完了を保証
	myth_rbarrier();
	if (t==q->size){
		//ロックを取る
		myth_queue_lock_lock(&q->lock);
		//サイズに余裕がない?
		if (q->base==0){
			myth_assert(0);
			fprintf(stderr,"Fatal error:Runqueue overflow\n");
			abort();
			/*myth_thread_t *newptr;
			int newsize;
			//配列を確保しなおし、拡張する。これにはロックが必要。
			//サイズを増やす
			newsize=q->size*2;
			//新しく確保
			newptr=myth_malloc(sizeof(myth_thread_t)*newsize);
			//コピー
			memcpy(newptr+,q->ptr+base,sizeof(myth_thread_t)*(q->top-q->base+1));
			//インデックスをずらす
			q->top=;q->base=;
			//古い配列を解放し、新しいものに入れ替える
			myth_free(q->ptr);q->ptr=newptr;q->size=newsize;*/
		}
		else{//サイズにはまだ余裕がある
			//ポインタをずらし、ちょうどいいところに移動する
			int offset,offset_x2;
			offset_x2=q->size-(q->base+q->top);
			offset=offset_x2/2;if (offset_x2%2)offset--;
			myth_assert(offset<0);
			//fprintf(stderr,"base=%d top=%d len=%d\n",q->base,q->top,q->top-q->base);
			//fprintf(stderr,"offset=%d offset_x2=%d\n",offset,offset_x2);
			if (q->top-q->base){
			  //fprintf(stderr,"%d,%p->%p,%d\n",q->base+offset,&q->ptr[q->base+offset],&q->ptr[q->base],(int)((q->top-q->base)));
			  memmove(&q->ptr[q->base+offset],&q->ptr[q->base],sizeof(myth_thread_t)*(q->top-q->base));
			}
			q->top+=offset;q->base+=offset;
			//fprintf(stderr,"base=%d top=%d\n",q->base,q->top);
		}
		t=q->top;
		myth_queue_lock_unlock(&q->lock);
	}
	//拡張の必要なし。そのままlock-freeに行う
	q->ptr[t]=th;
	myth_wbarrier();//上の書き込みが終わったことを保証する
	q->top=t+1;
#if defined USE_LOCK || defined USE_LOCK_PUSH
	myth_queue_lock_unlock(&q->m_lock);
#endif
	myth_queue_exit_operation(q);
}

#ifndef MYTH_QUEUE_FIFO
static inline myth_thread_t __attribute__((always_inline)) myth_queue_pop(myth_thread_queue_t q)
{
	myth_queue_enter_operation(q);
#if defined USE_LOCK || defined USE_LOCK_POP
	myth_queue_lock_lock(&q->m_lock);
#endif
	myth_thread_t ret;
	int top,base;
	top=q->top;
	top--;
	q->top=top;
	//topがずれたことを保証する
	myth_rwbarrier();
	base=q->base;
	if (base+1<top){//取って問題ないか?
		//問題ない。このまま終了する。
		ret=q->ptr[top];
		//q->ptr[top]=NULL;
#if defined USE_LOCK || defined USE_LOCK_POP
		myth_queue_lock_unlock(&q->m_lock);
#endif
		myth_queue_exit_operation(q);
		return ret;
	}
	else{
		//ロックを取る
		myth_queue_lock_lock(&q->lock);
		//取れた。状態をチェックする
		if (q->base<=top){//OK
			ret=q->ptr[top];
			q->ptr[top]=NULL;
			myth_queue_lock_unlock(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_POP
			myth_queue_lock_unlock(&q->m_lock);
#endif
			myth_queue_exit_operation(q);
			return ret;
		}
		else{//失敗
			//真ん中に戻す
			q->top=q->size/2;
			q->base=q->size/2;
			myth_queue_lock_unlock(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_POP
			myth_queue_lock_unlock(&q->m_lock);
#endif
			myth_queue_exit_operation(q);
			return NULL;
		}
		myth_unreachable();
	}
	myth_unreachable();
}
#else
static inline myth_thread_t myth_queue_take(myth_thread_queue_t q);
static inline myth_thread_t myth_queue_pop(myth_thread_queue_t q){
	return myth_queue_take(q);
}
#endif

//take/pass:他のスレッドが操作する関数。
static inline myth_thread_t myth_queue_take(myth_thread_queue_t q)
{
#if defined USE_LOCK || defined USE_LOCK_TAKE
	myth_queue_lock_lock(&q->m_lock);
#endif
	myth_thread_t ret;
	int b,top;
#ifdef CHECK_NUM_BEFORE_STEAL
	//もしなさそうだったら諦める
	if (q->top-q->base<0){
		return NULL;
	}
#endif
	//1スレッドしかtakeはできない。
	//失敗したら潔く諦める
#ifdef TRY_LOCK_BEFORE_STEAL
	if (!myth_queue_lock_trylock(&q->lock)){
		myth_queue_exit_operation();
		return NULL;
	}
#else
	myth_queue_lock_lock(&q->lock);
#endif
	//baseを操作
	b=q->base;
	q->base=b+1;
	//baseがずれたことを保証する
	myth_rwbarrier();
	top=q->top;
	if (b<top){//大丈夫だった?
		//大丈夫だったので終了する
		ret=q->ptr[b];
		//q->ptr[b]=NULL;
		myth_queue_lock_unlock(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_TAKE
		myth_queue_lock_unlock(&q->m_lock);
#endif
		return ret;
	}else{
		//だめだった。諦める
		q->base=b;
		myth_queue_lock_unlock(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_TAKE
		myth_queue_lock_unlock(&q->m_lock);
#endif
		return NULL;
	}
	myth_unreachable();
}

static inline int myth_queue_trypass(myth_thread_queue_t q,myth_thread_t th)
{
#if defined USE_LOCK || defined USE_LOCK_TRYPASS
	myth_queue_lock_lock(&q->m_lock);
#endif
	int ret=1;
	//1スレッドしかpassはできない。
	if (!myth_queue_lock_trylock(&q->lock))return 0;
	//baseを減少させる。0なら失敗。
	if (q->base==0){
		ret=0;
	}
	else{
		int b;
		b=q->base;
		q->ptr[b-1]=th;
		myth_wbarrier();//上の書き込みが終わったことを保証する
		q->base--;
	}
	myth_queue_lock_unlock(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_TRYPASS
	myth_queue_lock_unlock(&q->m_lock);
#endif
	return ret;
}

static inline void myth_queue_pass(myth_thread_queue_t q,myth_thread_t th)
{
	//成功するまで繰り返す
	int ret;
	do{
		ret=myth_queue_trypass(q,th);
	}while(ret==0);
}


//put:ランキュー末尾にスレッドを入れる。オーナーのみ使用可能
static inline void myth_queue_put(myth_thread_queue_t q,myth_thread_t th)
{
	myth_queue_enter_operation(q);
#if defined USE_LOCK || defined USE_LOCK_PUSH
	myth_queue_lock_lock(&q->m_lock);
#endif
	//baseの操作権を取得
	myth_queue_lock_lock(&q->lock);
	//キューがあふれている?
	if (q->base==0){
		//あふれている。キューの配置をずらす
		if (q->top==q->size){
			myth_assert(0);
			fprintf(stderr,"Fatal error:Runqueue overflow\n");
			abort();
			/*myth_thread_t *newptr;
			int newsize;
			//配列を確保しなおし、拡張する。これにはロックが必要。
			//サイズを増やす
			newsize=q->size*2;
			//新しく確保
			newptr=myth_malloc(sizeof(myth_thread_t)*newsize);
			//コピー
			memcpy(newptr+,q->ptr+base,sizeof(myth_thread_t)*(q->top-q->base+1));
			//インデックスをずらす
			q->top=;q->base=;
			//古い配列を解放し、新しいものに入れ替える
			myth_free(q->ptr);q->ptr=newptr;q->size=newsize;*/
		}
		else{//サイズにはまだ余裕がある
			//ポインタをずらし、ちょうどいいところに移動する
			int offset,offset_x2;
			offset_x2=q->size-(q->base+q->top);
			offset=offset_x2/2;if (offset_x2%2)offset--;
			myth_assert(offset<0);
			//fprintf(stderr,"base=%d top=%d len=%d\n",q->base,q->top,q->top-q->base);
			//fprintf(stderr,"offset=%d offset_x2=%d\n",offset,offset_x2);
			if (q->top-q->base){
			  //fprintf(stderr,"%d,%p->%p,%d\n",q->base+offset,&q->ptr[q->base+offset],&q->ptr[q->base],(int)((q->top-q->base)));
			  memmove(&q->ptr[q->base+offset],&q->ptr[q->base],sizeof(myth_thread_t)*(q->top-q->base));
			}
			q->top+=offset;q->base+=offset;
			//fprintf(stderr,"base=%d top=%d\n",q->base,q->top);
		}
	}
	int b=q->base;
	//ここでランキューがあふれていることはありえない
	if (b==0){myth_unreachable();}
	//キューにデータを格納
	b--;
	q->ptr[b]=th;
	//ポインタをデクリメント
	q->base=b;
	myth_queue_lock_unlock(&q->lock);
#if defined USE_LOCK || defined USE_LOCK_PUSH
	myth_queue_lock_unlock(&q->m_lock);
#endif
	myth_queue_exit_operation(q);
}


#endif /* MYTH_QUEUE_FUNC_H_ */
