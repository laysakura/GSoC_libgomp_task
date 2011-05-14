/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
//myth_pthread_if.c : pthreadインターフェースの記述

#define _GNU_SOURCE

#include "myth_init.h"
#include "myth_sched.h"
#include "myth_worker.h"
#include "myth_io.h"

#include "myth_sched_proto.h"
#include "myth_io_proto.h"

#include "myth_worker_func.h"
#include "myth_io_func.h"
#include "myth_sync_func.h"
#include "myth_sched_func.h"

#include "myth_if_pthread.h"

__attribute__((constructor)) static void myth_to_pthread_init(void)
{
	myth_init_body();
	myth_sched_prof_start_body();
	myth_log_start_body();
}

__attribute__((destructor)) static void myth_to_pthread_fini(void)
{
	myth_fini_body();
}

int pthread_create(pthread_t *_RESTRICT_KYWD pth,const pthread_attr_t *_RESTRIC\
T_KYWD attr,void *(*func)(void*),void *_RESTRICT_KYWD args)
{
	myth_thread_t mt;
	mt=myth_create_body(func,args);
	*pth=(pthread_t)mt;
	return 0;
}

int pthread_join(pthread_t th,void**ret)
{
	myth_join_body((myth_thread_t)th,ret);
	return 0;
}

int pthread_detach (pthread_t th)
{
	myth_detach_body((myth_thread_t)th);
	return 0;
}

int pthread_attr_setstacksize (pthread_attr_t *__attr,
				      size_t __stacksize)
{
	return 0;
}

int pthread_barrier_init (pthread_barrier_t * __barrier,__const pthread_barrierattr_t *	 __attr, unsigned int __count)
{
	*((myth_barrier_t*)__barrier)=myth_barrier_create_body(__count);
	return 0;
}

/* Destroy a previously dynamically initialized barrier BARRIER.  */
int pthread_barrier_destroy (pthread_barrier_t *__barrier)
{
	return myth_barrier_destroy_body(*((myth_barrier_t*)__barrier));
}

/* Wait on barrier BARRIER.  */
int pthread_barrier_wait (pthread_barrier_t *__barrier)
{
	return myth_barrier_wait_body(*((myth_barrier_t*)__barrier));
}

int socket (int __domain, int __type, int __protocol)
{
	return myth_socket_body(__domain,__type,__protocol);
}
int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
{
	return myth_connect_body(__fd,__addr,__len);
}
int accept (int __fd, __SOCKADDR_ARG __addr,
		   socklen_t *__restrict __addr_len)
{
	return myth_accept_body(__fd,__addr,__addr_len);
}
int listen (int __fd, int __n)
{
	return myth_listen_body(__fd,__n);
}
int bind(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
{
	return myth_bind_body(__fd,__addr,__len);
}
ssize_t send (int __fd, __const void *__buf, size_t __n, int __flags)
{
	return myth_send_body(__fd,__buf,__n,__flags);
}
ssize_t recv (int __fd, void *__buf, size_t __n, int __flags)
{
	return myth_recv_body(__fd,__buf,__n,__flags);
}
int close (int __fd)
{
	return myth_close_body(__fd);
}
int fcntl (int __fd, int __cmd, ...)
{
	int ret;
	va_list vl;
	va_start(vl,__cmd);
	ret=myth_fcntl_body(__fd,__cmd,vl);
	va_end(vl);
	return ret;
}
