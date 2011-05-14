/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_IO_FUNC_H_
#define MYTH_IO_FUNC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <poll.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <pthread.h>
#include <sched.h>

#include "myth_wsqueue.h"
#include "myth_worker.h"
#include "myth_io.h"

#include "myth_wsqueue_proto.h"
#include "myth_io_proto.h"

#include "myth_io_struct.h"

#define MYTH_IO_SIGNAL_NO SIGRTMIN

#define MYTH_IO_EPOLL_FLAG (EPOLLIN|EPOLLOUT|EPOLLRDHUP|EPOLLET)

static void myth_io_init(void)
{
	//printf("Init\n");
	g_fd_map=myth_fd_map_init();
}

#ifdef MYTH_USE_SIGIO
static void myth_io_sighandler(int signum,siginfo_t *sinfo,void* ctx);
#endif

#ifdef MYTH_USE_IO_THREAD
static inline myth_thread_t myth_io_polling_thread(struct myth_running_env *env);
static void *myth_io_thread_func(void* args)
{
	myth_running_env_t env;
	myth_io_struct_perenv_t io;
	env=(myth_running_env_t)args;
	io=&env->io_struct;
	//change scheduling policy
	struct sched_param param;
	param.__sched_priority=1;
	if (pthread_setschedparam(real_pthread_self(),SCHED_RR,&param)!=0){
		perror(NULL);
	}
	while (!io->exit_flag)
	{
		//fprintf(stderr,"A\n");
		myth_io_polling_thread(env);
		//usleep(1000);
	}
	return NULL;
}
#endif

static void myth_io_worker_init(myth_running_env_t env,myth_io_struct_perenv_t io)
{
	//Each worker thread has an epoll instance
	io->epfd=epoll_create(MYTH_EPOLL_SIZE);
	io->epnum=0;
	io->fd_map=g_fd_map;
	io->fd_count=0;
	io->cs_flag=0;
	io->sig_count=0;
#ifdef MYTH_USE_SIGIO
	struct sigaction newact;
	memset(&newact,0,sizeof(newact));
	newact.sa_sigaction=myth_io_sighandler;
	newact.sa_flags=SA_SIGINFO;
	sigaction(MYTH_IO_SIGNAL_NO,&newact,NULL);
#endif
#ifdef MYTH_USE_IO_THREAD
	pthread_mutexattr_t attr;
	pthread_mutexattr_init(&attr);
	pthread_mutexattr_settype(&attr,PTHREAD_MUTEX_ERRORCHECK);
	real_pthread_mutex_init(&io->mtx,&attr);
	io->exit_flag=0;
	real_pthread_create(&io->thread,NULL,myth_io_thread_func,(void*)env);
	pthread_mutexattr_destroy(&attr);
#endif
	myth_io_fd_list_init(env,&io->close_list);
	myth_io_wait_list_init(&io->rd_reserve_list);
	myth_io_wait_list_init(&io->wr_reserve_list);
}

static void myth_io_worker_fini(myth_running_env_t env,myth_io_struct_perenv_t io)
{
#ifdef MYTH_USE_IO_THREAD
	io->exit_flag=1;
	real_pthread_join(io->thread,NULL);
#endif
	//fprintf(stderr,"Rank %d : fds : %d\n",env->rank,io->fd_count);
	//fprintf(stderr,"Rank %d sig : %d\n",env->rank,io->sig_count);
	real_close(io->epfd);
	myth_io_fd_list_destroy(env,&io->close_list);
}

void myth_io_fini(void)
{
	myth_fd_map_destroy(g_fd_map);
}

MYTH_CTX_CALLBACK void myth_wait_for_read_1(void *arg1,void *arg2,void *arg3)
{
	//Add current thread to blocked list after context switch finishes
	myth_running_env_t env;
	myth_io_op_t op;
	myth_io_struct_perfd_t fd_data;
	myth_io_wait_list_t wl;
	env=arg1;
	op=arg2;
	fd_data=arg3;
	if (env==fd_data->env)wl=&fd_data->rd_list;
	else wl=fd_data->rd_reserve_list_ptr;
	myth_io_wait_list_push(env,wl,op);
	myth_io_cs_exit(env);
	//myth_io_fd_list_push(env,&fd_data->env->io_struct.notify_list,fd_data);
}

static inline void myth_wait_for_read(int fd,myth_running_env_t env,myth_io_op_t op)
{
	//Add current thread to blocked list
	myth_fd_map_t fd_map;
	myth_io_struct_perfd_t fd_data;
	myth_io_wait_list_t wl;
	fd_map=env->io_struct.fd_map;
	//Lookup blocked list from fd_map
	fd_data=myth_fd_map_lookup(fd_map,fd);
	assert(fd_data);
	wl=&(fd_data->rd_list);
	op->th=env->this_thread;
	op->wl_ptr=wl;
	//fprintf(stderr,"Thread %p is waiting in the %p by %d\n",this_thread,wl,env->rank);
	//Switch to next thread
	myth_thread_t this_thread,next;
	this_thread=op->th;
	next=myth_queue_pop(&env->runnable_q);
	if (next){
		assert(next->status==MYTH_STATUS_READY);//sanity check
		//Switch context
		next->env=env;
		env->this_thread=next;
		myth_swap_context_withcall(&this_thread->context,&next->context,
				myth_wait_for_read_1,(void*)env,(void*)op,(void*)fd_data);
	}
	else{
		//Switch to scheduler for work stealing
		myth_swap_context_withcall(&this_thread->context,&env->sched.context,
				myth_wait_for_read_1,(void*)env,(void*)op,(void*)fd_data);
	}
}

MYTH_CTX_CALLBACK void myth_wait_for_write_1(void *arg1,void *arg2,void *arg3)
{
	//Add current thread to blocked list after context switch finishes
	myth_running_env_t env;
	myth_io_op_t op;
	myth_io_struct_perfd_t fd_data;
	myth_io_wait_list_t wl;
	env=arg1;
	op=arg2;
	fd_data=arg3;
	if (env==fd_data->env)wl=&fd_data->wr_list;
	else wl=fd_data->wr_reserve_list_ptr;
	myth_io_wait_list_push(env,wl,op);
	myth_io_cs_exit(env);
	//myth_io_fd_list_push(env,&fd_data->env->io_struct.notify_list,fd_data);
}

static inline void myth_wait_for_write(int fd,myth_running_env_t env,myth_io_op_t op)
{
	//Add current thread to blocked list
	myth_fd_map_t fd_map;
	myth_io_struct_perfd_t fd_data;
	myth_io_wait_list_t wl;
	fd_map=env->io_struct.fd_map;
	assert(fd_map);
	//Lookup blocked list from fd_map
	fd_data=myth_fd_map_lookup(fd_map,fd);
	assert(fd_data);
	wl=&(fd_data->wr_list);
	assert(wl);
	op->th=env->this_thread;
	op->wl_ptr=wl;
	//fprintf(stderr,"Thread %p is waiting in the %p by %d\n",this_thread,wl,env->rank);
	//Switch to next thread
	myth_thread_t this_thread,next;
	this_thread=op->th;
	next=myth_queue_pop(&env->runnable_q);
	if (next){
		assert(next->status==MYTH_STATUS_READY);//sanity check
		//Switch context
		next->env=env;
		env->this_thread=next;
		myth_swap_context_withcall(&this_thread->context,&next->context,
				myth_wait_for_write_1,(void*)env,(void*)op,(void*)fd_data);
	}
	else{
		//Switch to scheduler for work stealing
		myth_swap_context_withcall(&this_thread->context,&env->sched.context,
				myth_wait_for_write_1,(void*)env,(void*)op,(void*)fd_data);
	}
}

extern myth_running_env_t g_envs;
extern int g_sched_prof;
extern int g_worker_thread_num;

static inline void myth_io_register_fd(int __fd)
{
	//あるワーカースレッドのepollに登録する。
	//選択の余地はあるが、ひとまず自スレッドのepollに入れる
	myth_running_env_t env,w_env;
	myth_io_struct_perfd *fd_data;
	struct epoll_event ee;
	env=myth_get_current_env();
	memset(&ee,0,sizeof(ee));
	//fprintf(stderr,"REG:%d\n",__fd);
	fd_data=myth_flmalloc(env->rank,sizeof(myth_io_struct_perfd));
	//fd_data->fd=sock;
	myth_io_wait_list_init(&fd_data->rd_list);
	myth_io_wait_list_init(&fd_data->wr_list);
	fd_data->closed=0;fd_data->fd=__fd;
	fd_data->tmp_for_poll=0;
	myth_fd_map_set(env,env->io_struct.fd_map,__fd,fd_data);
	ee.events=MYTH_IO_EPOLL_FLAG;
	ee.data.ptr=fd_data;
#ifdef MYTH_ONE_IO_WORKER
	w_env=&g_envs[0];
#elif defined MYTH_RANDOM_IO_WORKER
	{
		int worker_id;
		worker_id=myth_random(0,g_worker_thread_num);
		w_env=&g_envs[worker_id];
	}
#else
	w_env=env;
#endif
	fd_data->env=w_env;
	fd_data->rd_reserve_list_ptr=&(w_env->io_struct.rd_reserve_list);
	fd_data->wr_reserve_list_ptr=&(w_env->io_struct.wr_reserve_list);
	epoll_ctl(w_env->io_struct.epfd,EPOLL_CTL_ADD,__fd,&ee);
	//g_envs[worker_id].io_struct.fd_count++;
	__sync_fetch_and_add(&(w_env->io_struct.fd_count),1);
	//非同期モードに設定する
	long fl;
	int ret;
	fl=real_fcntl(__fd,F_GETFL);assert(fl!=-1);
#ifdef MYTH_USE_SIGIO
	//シグナルを使う
	ret=real_fcntl(__fd,F_SETSIG,MYTH_IO_SIGNAL_NO);assert(ret!=-1);
#if 0
	struct f_owner_ex owner;
	owner.type=F_OWNER_TID;
	owner.pid=w_env->tid;
	ret=real_fcntl(__fd,F_SETOWN_EX,&owner);assert(ret!=-1);
#else
	ret=real_fcntl(__fd,F_SETOWN,getpid());assert(ret!=-1);
#endif
	ret=real_fcntl(__fd,F_SETFL,fl | O_NONBLOCK | O_ASYNC);assert(ret!=-1);
#else
	//シグナルを使わない
	ret=real_fcntl(__fd,F_SETFL,fl | O_NONBLOCK);assert(ret!=-1);
#endif
}

static inline int myth_socket_body (int __domain, int __type, int __protocol)
{
	int sock;
	//fprintf(stderr,"socket\n");
	//2.6.27以降ではSOCK_NONBLOCKを捉える必要があるが、今のところはこのままにしておく
	sock=real_socket(__domain,__type,__protocol);
	if (sock==-1)return -1;
	//登録する
	myth_io_register_fd(sock);
	return sock;
}

static inline int myth_connect_body (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
{
	//fprintf(stderr,"connect\n");
	//ソケットはノンブロッキング
	int ret;
	socklen_t ret_len;
	int errcode;
	ret=real_connect(__fd,__addr,__len);
	if (ret==-1){
		myth_running_env_t env;
		env=myth_get_current_env();
		if (errno!=EINPROGRESS)return -1;
		//接続中。書き込み可能になるまで待つ
#if 0
		myth_io_op op;
		op.type=MYTH_IO_CONNECT;
		op.u.c.fd=__fd;
		myth_wait_for_write(__fd,env,&op);
		errno=op.errcode;
		return op.ret;
#else
		struct pollfd pf;
		pf.fd=__fd;
		pf.events=POLLOUT;
		pf.revents=0;
		int ready;
		ready=poll(&pf,1,-1);
		myth_assert(ready==1);
		myth_assert(pf.revents & POLLOUT);
		ret_len=sizeof(int);
		getsockopt(__fd,SOL_SOCKET,SO_ERROR,&errcode,&ret_len);
		errno=errcode;
		ret=(errcode==0)?0:-1;
#endif
	}
	return ret;
}
static inline int myth_accept_body (int __fd, __SOCKADDR_ARG __addr,
		   socklen_t *__restrict __addr_len)
{
	//fprintf(stderr,"accept\n");
	int sock;
	myth_running_env_t env;
	env=myth_get_current_env();
	//acceptをこころみる
	myth_io_cs_enter(env);
	sock=real_accept(__fd,__addr,__addr_len);
	if (sock==-1){
		myth_io_op op;
		if (errno!=EAGAIN && errno!=EWOULDBLOCK){
			//エラー
			myth_io_cs_exit(env);
			return -1;
		}
		//ソケットが読み取り可能になるまで待つ
		op.type=MYTH_IO_ACCEPT;
		op.u.a.addr=__addr;
		op.u.a.fd=__fd;
		op.u.a.len=__addr_len;
		//fprintf(stderr,"%d %p\n",__fd,env);
		myth_wait_for_read(__fd,env,&op);
		//fprintf(stderr,"%d %p\n",__fd,myth_get_current_env());
		if (op.ret==-1){
			errno=op.errcode;
			return -1;
		}
		sock=op.ret;
	}
	else{myth_io_cs_exit(env);}
	//acceptがついに成功した。
	myth_io_register_fd(sock);
	return sock;
}

static inline int myth_bind_body(int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
{
	//fprintf(stderr,"bind\n");
	//そのままでOK
	return real_bind(__fd,__addr,__len);
	/*int ret;
	ret=real_bind(__fd,__addr,__len);
	if (ret!=0)perror(NULL);
	return ret;*/
}

static inline int myth_listen_body (int __fd, int __n)
{
	//fprintf(stderr,"listen\n");
	//そのままでOK
	return real_listen(__fd,__n);
	/*int ret;
	ret=real_listen(__fd,__n);
	if (ret!=0)perror(NULL);
	return ret;*/
}
static inline ssize_t myth_send_body (int __fd, __const void *__buf, size_t __n, int __flags)
{
	//fprintf(stderr,"send\n");
	uint64_t t0,t1,t2,t3;
	ssize_t ret;
	t0=0;t1=0;t2=0;t3=0;
	myth_running_env_t env;
#ifdef MYTH_IO_PROF_DETAIL
	t0=get_rdtsc();
#endif
	env=myth_get_current_env();
	myth_io_cs_enter(env);
	//非同期にsendする
	ret=real_send(__fd,__buf,__n,__flags);
#ifdef MYTH_IO_PROF_DETAIL
	t1=get_rdtsc();
#endif
	if (ret==-1){
		myth_io_op op;
		if (errno!=EAGAIN && errno!=EWOULDBLOCK){
			//error
			myth_io_cs_exit(env);
			return -1;
		}
		//I/Oが可能になるまで待つ
#ifdef MYTH_IO_PROF_DETAIL
		t2=get_rdtsc();
#endif
		op.type=MYTH_IO_SEND;
		op.u.s.fd=__fd;
		op.u.s.buf=__buf;
		op.u.s.n=__n;
		op.u.s.flags=__flags;
#ifdef MYTH_IO_PROF_DETAIL
		t3=get_rdtsc();
		env->prof_data.io_block_send_cycles+=t1-t0;
		env->prof_data.io_block_send_cnt++;
#endif
		//fprintf(stderr,"SB\n");
		myth_wait_for_write(__fd,env,&op);
		errno=op.errcode;
		ret=op.ret;
	}
	else{
		myth_io_cs_exit(env);
#ifdef MYTH_IO_PROF_DETAIL
		env->prof_data.io_succ_send_cycles+=t1-t0;
		env->prof_data.io_succ_send_cnt++;
#endif
	}
	//ブロックしなかった。制御を返す
	return ret;
}
static inline ssize_t myth_recv_body (int __fd, void *__buf, size_t __n, int __flags)
{
	//fprintf(stderr,"recv\n");
	uint64_t t0,t1,t2,t3;
	ssize_t ret;
	t0=0;t1=0;t2=0;t3=0;
#ifdef MYTH_IO_PROF_DETAIL
	t0=get_rdtsc();
#endif
	myth_running_env_t env;
	env=myth_get_current_env();
	myth_io_cs_enter(env);
	//非同期にrecvする
	ret=real_recv(__fd,__buf,__n,__flags);
#ifdef MYTH_IO_PROF_DETAIL
	t1=get_rdtsc();
#endif
	if (ret==-1){
		myth_io_op op;
		if (errno!=EAGAIN && errno!=EWOULDBLOCK){
			//error
			myth_io_cs_exit(env);
			return -1;
		}
#ifdef MYTH_IO_PROF_DETAIL
		t2=get_rdtsc();
#endif
		//I/Oが可能になるまで待つ
		op.type=MYTH_IO_RECV;
		op.u.r.fd=__fd;
		op.u.r.buf=__buf;
		op.u.r.n=__n;
		op.u.r.flags=__flags;
#ifdef MYTH_IO_PROF_DETAIL
		t3=get_rdtsc();
		env->prof_data.io_block_recv_cycles+=t1-t0;
		env->prof_data.io_block_recv_cnt++;
#endif
		//fprintf(stderr,"RB\n");
		myth_wait_for_read(__fd,env,&op);
		errno=op.errcode;
		ret=op.ret;
	}
	else{
		myth_io_cs_exit(env);
#ifdef MYTH_IO_PROF_DETAIL
		env->prof_data.io_succ_recv_cycles+=t1-t0;
		env->prof_data.io_succ_recv_cnt++;
#endif
	}
	//ブロックしなかった。制御を返す
	return ret;
}

static inline int myth_close_body (int __fd)
{
	//ulimitの限界まで接続を張る可能性を考え、fdを閉じる操作そのものはここで行う。
	//その他のリソースの解放はここで行ってしまうと
	//myth_io_pollingと干渉してしまうため、fdの親スレッドにキューを設け、
	//そこに放り込んで解放は親スレッドにやってもらう。
	int ret;
	myth_running_env_t env,dest_env;
	env=myth_get_current_env();
	myth_io_struct_perfd_t fd_data;
	//fd_dataを取得
	fd_data=myth_fd_map_lookup(env->io_struct.fd_map,__fd);
	myth_assert(fd_data);
	//エントリをfd_mapから削除し、マップを再利用できるようにする
	myth_fd_map_delete(env->io_struct.fd_map,__fd);
	//epollへの登録を解除
	struct epoll_event ee;
	memset(&ee,0,sizeof(ee));
	epoll_ctl(fd_data->env->io_struct.epfd,EPOLL_CTL_DEL,__fd,&ee);
	//fdを閉じる。
	ret=real_close(__fd);
	//fdの担当envを取得し、それに対してデータの解放を押し付ける。
	dest_env=fd_data->env;
	myth_io_fd_list_push(env,&dest_env->io_struct.close_list,fd_data);
	return ret;
}
static inline int myth_fcntl_body (int __fd, int __cmd,va_list vl)
{
	//fprintf(stderr,"fcntl\n");
	switch (__cmd){
	//long
	case F_DUPFD:
	case F_DUPFD_CLOEXEC:
	case F_SETFD:
	case F_SETFL:
	case F_SETOWN:
	case F_SETSIG:
	case F_SETLEASE:
	case F_NOTIFY:
		return real_fcntl(__fd,__cmd,va_arg(vl,long));
		break;
	//struct flock*
	case F_SETLK:
	case F_SETLKW:
	case F_GETLK:
		return real_fcntl(__fd,__cmd,va_arg(vl,struct flock*));
		break;
#if 0
	//struct f_owner_ex*
	case F_GETOWN_EX:
	case F_SETOWN_EX:
		return real_fcntl(__fd,__cmd,va_arg(vl,struct f_owner_ex*));
		break;
#endif
	//引数を必要としないもの
	case F_GETFD:
	case F_GETFL:
	case F_GETOWN:
	case F_GETSIG:
	case F_GETLEASE:
		return real_fcntl(__fd,__cmd);
		break;
	}
	//エラー。
	errno=EPERM;
	return -1;
}

#include "myth_io_poll.h"

#endif /* MYTH_IO_FUNC_H_ */
