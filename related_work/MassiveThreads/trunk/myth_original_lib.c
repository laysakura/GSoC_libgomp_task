/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#define _GNU_SOURCE
#include <assert.h>
#include <dlfcn.h>
#include "myth_config.h"
#include "myth_misc.h"
#include "myth_original_lib.h"

//pthread関数群
int (*real_pthread_key_create) (pthread_key_t *__key,void (*__destr_function) (void *));
int (*real_pthread_key_delete) (pthread_key_t __key);
void *(*real_pthread_getspecific)(pthread_key_t __key);
int (*real_pthread_setspecific) (pthread_key_t __key,__const void *__pointer);
int (*real_pthread_create) (pthread_t *__restrict __newthread,__const pthread_attr_t *__restrict __attr,void *(*__start_routine) (void *),void *__restrict __arg);
int (*real_pthread_join) (pthread_t __th, void **__thread_return);
int (*real_pthread_barrier_init) (pthread_barrier_t *__restrict __barrier,__const pthread_barrierattr_t *__restrict __attr, unsigned int __count);
int (*real_pthread_barrier_destroy) (pthread_barrier_t *__barrier);
int (*real_pthread_barrier_wait) (pthread_barrier_t *__barrier);
int (*real_pthread_mutexattr_init)(pthread_mutexattr_t *__attr);
int (*real_pthread_mutexattr_destroy)(pthread_mutexattr_t *__attr);
int (*real_pthread_mutexattr_settype)(pthread_mutexattr_t *__attr, int __kind);
#ifdef MUTEX_ERROR_CHECK
int (*real_pthread_mutex_init_org) (pthread_mutex_t *__mutex,__const pthread_mutexattr_t *__mutexattr);
int (*real_pthread_mutex_destroy_org) (pthread_mutex_t *__mutex);
int (*real_pthread_mutex_lock_org) (pthread_mutex_t *__mutex);
int (*real_pthread_mutex_trylock_org) (pthread_mutex_t *__mutex);
int (*real_pthread_mutex_unlock_org) (pthread_mutex_t *__mutex);
#elif defined MUTEX_DISABLE
#else
int (*real_pthread_mutex_init) (pthread_mutex_t *__mutex,__const pthread_mutexattr_t *__mutexattr);
int (*real_pthread_mutex_destroy) (pthread_mutex_t *__mutex);
int (*real_pthread_mutex_lock) (pthread_mutex_t *__mutex);
int (*real_pthread_mutex_trylock) (pthread_mutex_t *__mutex);
int (*real_pthread_mutex_unlock) (pthread_mutex_t *__mutex);
#endif
int (*real_pthread_setaffinity_np) (pthread_t __th, size_t __cpusetsize,__const cpu_set_t *__cpuset);
pthread_t (*real_pthread_self) (void);
int (*real_pthread_spin_init) (pthread_spinlock_t *__lock, int __pshared);
int (*real_pthread_spin_destroy) (pthread_spinlock_t *__lock);
int (*real_pthread_spin_lock) (pthread_spinlock_t *__lock);
int (*real_pthread_spin_trylock) (pthread_spinlock_t *__lock);
int (*real_pthread_spin_unlock) (pthread_spinlock_t *__lock);

static void* s_pthread_handle;

//#define LIBPTHREAD_PATH "libpthread.so"
#define LIBPTHREAD_PATH "/lib/libpthread.so.0"

//pthread関数を得る
static void myth_get_pthread_funcs(void)
{
	//pthread_createでテストする。もしロードに失敗したならdlopenで自分でロードする
	if (dlsym(RTLD_NEXT,"pthread_create")){
		s_pthread_handle=RTLD_NEXT;
	}
	else{
		s_pthread_handle=dlopen(LIBPTHREAD_PATH,RTLD_LAZY);
		myth_assert(s_pthread_handle);
	}
	real_pthread_key_create=dlsym(s_pthread_handle,"pthread_key_create");myth_assert(real_pthread_key_create);
	real_pthread_key_delete=dlsym(s_pthread_handle,"pthread_key_delete");myth_assert(real_pthread_key_delete);
	real_pthread_getspecific=dlsym(s_pthread_handle,"pthread_getspecific");myth_assert(real_pthread_getspecific);
	real_pthread_setspecific=dlsym(s_pthread_handle,"pthread_setspecific");myth_assert(real_pthread_setspecific);
	real_pthread_create=dlsym(s_pthread_handle,"pthread_create");myth_assert(real_pthread_create);
	real_pthread_join=dlsym(s_pthread_handle,"pthread_join");myth_assert(real_pthread_join);
#ifdef MUTEX_ERROR_CHECK
	real_pthread_mutex_init_org=dlsym(s_pthread_handle,"pthread_mutex_init");myth_assert(real_pthread_mutex_init_org);
	real_pthread_mutex_destroy_org=dlsym(s_pthread_handle,"pthread_mutex_destroy");myth_assert(real_pthread_mutex_destroy_org);
	real_pthread_mutex_lock_org=dlsym(s_pthread_handle,"pthread_mutex_lock");myth_assert(real_pthread_mutex_lock_org);
	real_pthread_mutex_trylock_org=dlsym(s_pthread_handle,"pthread_mutex_trylock");myth_assert(real_pthread_mutex_trylock_org);
	real_pthread_mutex_unlock_org=dlsym(s_pthread_handle,"pthread_mutex_unlock");myth_assert(real_pthread_mutex_unlock_org);
#elif defined MUTEX_DISABLE
#else
	real_pthread_mutex_init=dlsym(s_pthread_handle,"pthread_mutex_init");myth_assert(real_pthread_mutex_init);
	real_pthread_mutex_destroy=dlsym(s_pthread_handle,"pthread_mutex_destroy");myth_assert(real_pthread_mutex_destroy);
	real_pthread_mutex_lock=dlsym(s_pthread_handle,"pthread_mutex_lock");myth_assert(real_pthread_mutex_lock);
	real_pthread_mutex_trylock=dlsym(s_pthread_handle,"pthread_mutex_trylock");myth_assert(real_pthread_mutex_trylock);
	real_pthread_mutex_unlock=dlsym(s_pthread_handle,"pthread_mutex_unlock");myth_assert(real_pthread_mutex_unlock);
#endif
	real_pthread_barrier_init=dlsym(s_pthread_handle,"pthread_barrier_init");myth_assert(real_pthread_barrier_init);
	real_pthread_barrier_destroy=dlsym(s_pthread_handle,"pthread_barrier_destroy");myth_assert(real_pthread_barrier_destroy);
	real_pthread_barrier_wait=dlsym(s_pthread_handle,"pthread_barrier_wait");myth_assert(real_pthread_barrier_wait);
	real_pthread_mutexattr_init=dlsym(s_pthread_handle,"pthread_mutexattr_init");myth_assert(real_pthread_mutexattr_init);
	real_pthread_mutexattr_destroy=dlsym(s_pthread_handle,"pthread_mutexattr_destroy");myth_assert(real_pthread_mutexattr_destroy);
	real_pthread_mutexattr_settype=dlsym(s_pthread_handle,"pthread_mutexattr_settype");myth_assert(real_pthread_mutexattr_settype);
	real_pthread_setaffinity_np=dlsym(s_pthread_handle,"pthread_setaffinity_np");myth_assert(real_pthread_setaffinity_np);
	real_pthread_self=dlsym(s_pthread_handle,"pthread_self");myth_assert(real_pthread_self);
	real_pthread_spin_init=dlsym(s_pthread_handle,"pthread_spin_init");myth_assert(real_pthread_spin_init);
	real_pthread_spin_destroy=dlsym(s_pthread_handle,"pthread_spin_destroy");myth_assert(real_pthread_spin_destroy);
	real_pthread_spin_lock=dlsym(s_pthread_handle,"pthread_spin_lock");myth_assert(real_pthread_spin_lock);
	real_pthread_spin_unlock=dlsym(s_pthread_handle,"pthread_spin_unlock");myth_assert(real_pthread_spin_unlock);
	real_pthread_spin_trylock=dlsym(s_pthread_handle,"pthread_spin_trylock");myth_assert(real_pthread_spin_trylock);
}

static void myth_free_pthread_funcs(void)
{
	if (s_pthread_handle!=RTLD_NEXT){
		//自前でDLLをロードしたならば、アンロードする必要がある
		dlclose(s_pthread_handle);
	}
}

#ifdef MUTEX_ERROR_CHECK

int real_pthread_mutex_init_1(char *file,int line,pthread_mutex_t *mutex,pthread_mutexattr_t *attr)
{
	int ret;
	if (attr!=NULL){
		ret=real_pthread_mutex_init_org(mutex,attr);
	}
	else
	{
		pthread_mutexattr_t a;
		real_pthread_mutexattr_init(&a);
		real_pthread_mutexattr_settype(&a,PTHREAD_MUTEX_ERRORCHECK_NP);
		ret=real_pthread_mutex_init_org(mutex,&a);
		real_pthread_mutexattr_destroy(&a);
	}
	return ret;
}

int real_pthread_mutex_destroy_1(char *file,int line,pthread_mutex_t *mutex)
{
	int ret;
	//fprintf(stderr,"Mutex %p is locked @%s:%d\n",mutex,file,line);
	ret=real_pthread_mutex_destroy_org(mutex);
	return ret;
}

int real_pthread_mutex_lock_1(char *file,int line,pthread_mutex_t *mutex)
{
	int ret;
	//fprintf(stderr,"Mutex %p is locked @%s:%d\n",mutex,file,line);
	ret=real_pthread_mutex_lock_org(mutex);
	switch (ret){
	case 0:break;
	case EINVAL:
		fprintf(stderr,"Mutex %p EINVAL @%s:%d\n",mutex,file,line);
		break;
	case EDEADLK:
		fprintf(stderr,"Mutex %p EDEADLK @%s:%d\n",mutex,file,line);
		break;
	default:
		fprintf(stderr,"Mutex %p ??? @%s:%d\n",mutex,file,line);
		myth_assert(0);
		break;
	}
	myth_assert(ret==0);
	return ret;
}
int real_pthread_mutex_trylock_1(char *file,int line,pthread_mutex_t *mutex)
{
	int ret;
	//fprintf(stderr,"Mutex %p is locked @%s:%d\n",mutex,file,line);
	ret=real_pthread_mutex_trylock_org(mutex);
	switch (ret){
	case 0:
	case EBUSY:
		break;
	case EINVAL:
		fprintf(stderr,"Mutex %p EINVAL @%s:%d\n",mutex,file,line);
		break;
	default:
		fprintf(stderr,"Mutex %p ??? @%s:%d\n",mutex,file,line);
		myth_assert(0);
		break;
	}
	myth_assert(ret==0 || ret==EBUSY);
	return ret;
}
int real_pthread_mutex_unlock_1(char *file,int line,pthread_mutex_t *mutex)
{
	int ret;
	//fprintf(stderr,"Mutex %p is unlocked @%s:%d\n",mutex,file,line);
	ret=real_pthread_mutex_unlock_org(mutex);
	switch (ret){
	case 0:break;
	case EINVAL:
		fprintf(stderr,"Mutex %p EINVAL @%s:%d\n",mutex,file,line);
		break;
	case EPERM:
		fprintf(stderr,"Mutex %p EPERM @%s:%d\n",mutex,file,line);
		break;
	default:
		fprintf(stderr,"Mutex %p ??? @%s:%d\n",mutex,file,line);
		myth_assert(0);
		break;
	}
	myth_assert(ret==0);
	return ret;
}
#elif defined MUTEX_DISABLE
#endif

int (*real_socket)(int __domain, int __type, int __protocol);
int (*real_connect)(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);
int (*real_accept)(int __fd, __SOCKADDR_ARG __addr,socklen_t *__restrict __addr_len);
int (*real_listen)(int __fd, int __n);
ssize_t (*real_send)(int __fd, __const void *__buf, size_t __n, int __flags);
ssize_t (*real_recv)(int __fd, void *__buf, size_t __n, int __flags);
int (*real_close)(int __fd);
int (*real_fcntl)(int __fd, int __cmd, ...);
int (*real_bind)(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);

static void myth_get_io_funcs(void)
{
	real_socket=dlsym(RTLD_NEXT,"socket");assert(real_socket);
	real_connect=dlsym(RTLD_NEXT,"connect");assert(real_connect);
	real_accept=dlsym(RTLD_NEXT,"accept");assert(real_accept);
	real_listen=dlsym(RTLD_NEXT,"listen");assert(real_listen);
	real_send=dlsym(RTLD_NEXT,"send");assert(real_send);
	real_recv=dlsym(RTLD_NEXT,"recv");assert(real_recv);
	real_close=dlsym(RTLD_NEXT,"close");assert(real_close);
	real_fcntl=dlsym(RTLD_NEXT,"fcntl");assert(real_fcntl);
	real_bind=dlsym(RTLD_NEXT,"bind");assert(real_bind);
}

static void myth_free_io_funcs(void)
{

}

void myth_get_original_funcs(void)
{
	myth_get_pthread_funcs();
	myth_get_io_funcs();
}

void myth_free_original_funcs(void)
{
	myth_free_pthread_funcs();
	myth_free_io_funcs();
}
