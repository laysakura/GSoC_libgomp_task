/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_MISC_H_
#define MYTH_MISC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>
#include <time.h>
#include "myth_config.h"

//sanity check用関数
//myth_assertの中の式は実行されない可能性があるので、副作用のある式は呼ばないこと
#ifdef MYTH_SANITY_CHECK
#define myth_assert(expr) assert(expr)
#else
#define myth_assert(expr)
#endif

//絶対に到達しないコード
#ifdef USE_MYTH_UNREACHABLE
#define myth_unreachable() asm volatile("ud2\n")
#else
#define myth_unreachable() assert(0)
#endif

//restrictポインタの宣言
#define MYTH_RESTRICT restrict

//パフォーマンス計測用関数
static inline uint64_t get_rdtsc()
{
  uint32_t hi,lo;
  asm volatile("lfence\nrdtsc\n"
	       :"=a"(lo),"=d"(hi));
  return ((uint64_t)hi)<<32 | lo;
}

extern __thread unsigned int g_myth_random_temp;
static inline void myth_random_init(unsigned int seed)
{
	g_myth_random_temp=seed;
}
//[min,max)の範囲のランダムな整数値を返す
static inline int myth_random(int min,int max)
{
	int ret;
	if (!g_myth_random_temp){
		myth_random_init(((unsigned)time(NULL)));
	}
	ret=min+(int)(rand_r(&g_myth_random_temp)*((double)max-min)/(1.0+RAND_MAX));
	myth_assert(0<=ret && ret<max);
	return ret;
}

#ifdef MYTH_FLMALLOC_PROF
extern __thread uint64_t g_myth_flmalloc_cycles,g_myth_flmalloc_cnt;
extern __thread uint64_t g_myth_flfree_cycles,g_myth_flfree_cnt;
#endif

//フリーリストは1,2,4,8,...2^(FREE_LIST_NUM-1)バイトの分のみ用意し、
//メモリ確保/解放は必ずこの粒度で行う
#define FREE_LIST_NUM 31

#ifdef __i386__
//size_tは32bit
#define MYTH_MALLOC_SIZE_TO_INDEX(s) (32-__builtin_clzl((s)-1))
#elif __x86_64__
//size_tは64bit
#define MYTH_MALLOC_SIZE_TO_INDEX(s) (64-__builtin_clzl((s)-1))
#else
#error
#endif
#define MYTH_MALLOC_INDEX_TO_RSIZE(s) (1<<(s))
#define MYTH_MALLOC_SIZE_TO_RSIZE(s) (MYTH_MALLOC_INDEX_TO_RSIZE(MYTH_MALLOC_SIZE_TO_INDEX(s)))

#ifdef USE_MYTH_FLMALLOC

#ifdef MYTH_FLMALLOC_TLS
extern __thread void **g_myth_freelist;
#else
extern void ***g_myth_freelist;
#endif

static inline void myth_flmalloc_init(int nthreads)
{
#ifndef MYTH_FLMALLOC_TLS
	g_myth_freelist=malloc(sizeof(void**)*nthreads);
#endif
}

static inline void myth_flmalloc_init_worker(int rank)
{
	int i;
	//フリーリストを確保
#ifdef MYTH_FLMALLOC_TLS
	g_myth_freelist=malloc(sizeof(void*)*FREE_LIST_NUM);
	//初期化
	for (i=0;i<FREE_LIST_NUM;i++)g_myth_freelist[i]=NULL;
#else
	g_myth_freelist[rank]=malloc(sizeof(void*)*FREE_LIST_NUM);
	//初期化
	for (i=0;i<FREE_LIST_NUM;i++)g_myth_freelist[rank][i]=NULL;
#endif
}

static inline void myth_flmalloc_fini()
{
#ifndef MYTH_FLMALLOC_TLS
	free(g_myth_freelist);
#endif
}

static inline void myth_flmalloc_fini_worker(int rank)
{
	//フリーリストの中身を解放
	/*for (i=0;i<FREE_LIST_NUM;i++){
		void **ptr=g_myth_freelist[i];

	}*/
	//配列を解放
#ifndef MYTH_FLMALLOC_TLS
	free(g_myth_freelist[rank]);
#else
	free(g_myth_freelist);
#endif
#ifdef MYTH_FLMALLOC_PROF
	fprintf(stderr,"%lu mallocs : %lf cycles/malloc\n",(unsigned long)g_myth_flmalloc_cnt,g_myth_flmalloc_cycles/(double)g_myth_flmalloc_cnt);
	fprintf(stderr,"%lu frees : %lf cycles/free\n",(unsigned long)g_myth_flfree_cnt,g_myth_flfree_cycles/(double)g_myth_flfree_cnt);
#endif
}

#if 0
#define myth_flmalloc(a,b) myth_flmalloc_(a,b,__FILE__,__LINE__)
static inline void *myth_flmalloc_(int rank,size_t size,char *f,int l)
#else
static inline void *myth_flmalloc(int rank,size_t size)
#endif
{
	//ちょっと大きめにサイズをとるmalloc
	size_t realsize;
	int idx;
	void **ptr;
#ifdef MYTH_FLMALLOC_PROF
	uint64_t t0,t1;
	t0=get_rdtsc();
#endif
	if (size==1)size=2;
	idx=MYTH_MALLOC_SIZE_TO_INDEX(size);
#ifdef MYTH_FLMALLOC_TLS
	ptr=g_myth_freelist[idx];
#else
	ptr=g_myth_freelist[rank][idx];
#endif
	if (!ptr){
		//フリーリストにない。新しく確保
		realsize=MYTH_MALLOC_INDEX_TO_RSIZE(idx);
		ptr=malloc(realsize);//fprintf(stderr,"M %lu %s:%d\n",(unsigned long)realsize,f,l);
		if (!ptr){
			fprintf(stderr,"malloc failed size:%lu\n",(unsigned long)realsize);
		}
		myth_assert(ptr);
	}
	else{
		//フリーリストにある。再利用
#ifdef MYTH_FLMALLOC_TLS
		g_myth_freelist[idx]=*ptr;
#else
		g_myth_freelist[rank][idx]=*ptr;
#endif
	}
#ifdef MYTH_FLMALLOC_PROF
	t1=get_rdtsc();
	g_myth_flmalloc_cycles+=t1-t0;g_myth_flmalloc_cnt++;
#endif
	return ptr;
}
static inline void myth_flfree(int rank,size_t size,void *ptr)
{
	//フリーリストに入れる
	int idx;
#ifdef MYTH_FLMALLOC_PROF
	uint64_t t0,t1;
	t0=get_rdtsc();
#endif
	void **p=ptr;
	if (size==1)size=2;
	idx=MYTH_MALLOC_SIZE_TO_INDEX(size);
#ifdef MYTH_FLMALLOC_TLS
	*p=g_myth_freelist[idx];
	g_myth_freelist[idx]=p;
#else
	*p=g_myth_freelist[rank][idx];
	g_myth_freelist[rank][idx]=p;
#endif
#ifdef MYTH_FLMALLOC_PROF
	t1=get_rdtsc();
	g_myth_flfree_cycles+=t1-t0;g_myth_flfree_cnt++;
#endif
}
static inline void *myth_flrealloc(int rank,size_t oldsize,void *ptr,size_t size)
{
	void *ret;
	size_t cp_size;
	ret=myth_flmalloc(rank,size);
	myth_assert(ret);
	cp_size=(size<oldsize)?size:oldsize;
	memcpy(ret,ptr,cp_size);
	myth_flfree(rank,oldsize,ptr);
	return ret;
}
#else
static inline void myth_flmalloc_init(int nthreads)
{
}

static inline void myth_flmalloc_init_worker(int rank)
{
}

static inline void myth_flmalloc_fini(void)
{
}

static inline void myth_flmalloc_fini_worker(int rank)
{
#ifdef MYTH_FLMALLOC_PROF
	fprintf(stderr,"%lu mallocs : %lf cycles/malloc\n",(unsigned long)g_myth_flmalloc_cnt,g_myth_flmalloc_cycles/(double)g_myth_flmalloc_cnt);
	fprintf(stderr,"%lu frees : %lf cycles/free\n",(unsigned long)g_myth_flfree_cnt,g_myth_flfree_cycles/(double)g_myth_flfree_cnt);
#endif
}
static inline void *myth_malloc(size_t size);
static inline void* myth_flmalloc(int rank,size_t s)
{
	void *ret;
#ifdef MYTH_FLMALLOC_PROF
	uint64_t t0,t1;
	t0=get_rdtsc();
#endif
	ret=myth_malloc(s);
#ifdef MYTH_FLMALLOC_PROF
	t1=get_rdtsc();
	g_myth_flmalloc_cycles+=t1-t0;g_myth_flmalloc_cnt++;
#endif
	return ret;
}
static inline void myth_flfree(int rank,size_t size,void *ptr)
{
	//フリーリストに入れる
#ifdef MYTH_FLMALLOC_PROF
	uint64_t t0,t1;
	t0=get_rdtsc();
#endif
	free(ptr);
#ifdef MYTH_FLMALLOC_PROF
	t1=get_rdtsc();
	g_myth_flfree_cycles+=t1-t0;g_myth_flfree_cnt++;
#endif
}
#define myth_flrealloc(rank,os,p,ns) myth_realloc(p,ns)
#endif

//エラーチェックつきmalloc
static inline void *myth_malloc(size_t size)
{
	void *ptr;
	ptr=malloc(size);
	myth_assert(ptr);
	return ptr;
}
static inline void myth_free(void *ptr)
{
	free(ptr);
}
static inline void *myth_realloc(void *ptr,size_t size)
{
	void *ret;
	ret=realloc(ptr,size);
	myth_assert(ret);
	return ret;
}

//一般化したfreelistの実装
//突っ込むデータはポインタの大きさより大きい必要あり

//freelistの実装
//flはvoid**
typedef void** myth_freelist_t;
#define myth_freelist_init(fl) \
{fl=NULL;}
#define myth_freelist_push(fl,data) \
{\
	void **tmp_ptr=(void**)data;\
	*tmp_ptr=(void*)fl;\
	fl=tmp_ptr;\
}
#define myth_freelist_pop(fl,ret) \
{\
	if (fl){\
		void **tmp;\
		tmp=fl;\
		ret=(void*)fl;\
		fl=*tmp;\
	}\
	else{ret=NULL;}\
}

#endif /* MYTH_MISC_H_ */
