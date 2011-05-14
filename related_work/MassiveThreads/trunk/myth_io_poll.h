#ifndef MYTH_IO_POLL_H_
#define MYTH_IO_POLL_H_

#include "myth_config.h"

static inline int myth_io_execute(myth_io_op_t op)
{
	uint64_t t0,t1;
	myth_running_env_t env;
	int ret;
	t0=0;t1=0;
	env=NULL;
	//I/Oを実行する。ブロックしたら1を、ブロックしなかったら0を返す
	switch (op->type)
	{
	case MYTH_IO_CONNECT:{
		myth_unreachable();
		//接続されたか、失敗したかのいずれか。
		//結果を判断
		socklen_t ret_len;
		int errcode;
		ret_len=sizeof(int);
		getsockopt(op->u.c.fd,SOL_SOCKET,SO_ERROR,&errcode,&ret_len);
		op->errcode=errcode;
		op->ret=(errcode==0)?0:-1;
		//assert(myth_fd_map_lookup(op->th->env->io_struct.fd_map,op->u.c.fd));
		return 1;
		break;
	}
	case MYTH_IO_SEND:
#ifdef MYTH_IO_PROF_DETAIL
		t0=get_rdtsc();
#endif
		//fprintf(stderr,"SE\n");
		ret=real_send(op->u.s.fd,op->u.s.buf,op->u.s.n,op->u.s.flags);
		//assert(myth_fd_map_lookup(op->th->env->io_struct.fd_map,op->u.s.fd));
#ifdef MYTH_IO_PROF_DETAIL
		t1=get_rdtsc();
		env=myth_get_current_env();
		if (ret==-1 && (errno==EAGAIN || errno==EWOULDBLOCK)){
			env->prof_data.io_block_send_cnt++;
			env->prof_data.io_block_send_cycles+=t1-t0;
		}
		else{
			env->prof_data.io_succ_send_cnt++;
			env->prof_data.io_succ_send_cycles+=t1-t0;
		}
#endif
		break;
	case MYTH_IO_RECV:
#ifdef MYTH_IO_PROF_DETAIL
		t0=get_rdtsc();
#endif
		//fprintf(stderr,"RE\n");
		ret=real_recv(op->u.r.fd,op->u.r.buf,op->u.r.n,op->u.r.flags);
		//assert(myth_fd_map_lookup(op->th->env->io_struct.fd_map,op->u.r.fd));
#ifdef MYTH_IO_PROF_DETAIL
		t1=get_rdtsc();
		env=myth_get_current_env();
		if (ret==-1 && (errno==EAGAIN || errno==EWOULDBLOCK)){
			env->prof_data.io_block_recv_cnt++;
			env->prof_data.io_block_recv_cycles+=t1-t0;
		}
		else if (ret!=-1){
			env->prof_data.io_succ_recv_cnt++;
			env->prof_data.io_succ_recv_cycles+=t1-t0;
		}
#endif
		break;
	case MYTH_IO_ACCEPT:
		ret=real_accept(op->u.a.fd,op->u.a.addr,op->u.a.len);
		//assert(myth_fd_map_lookup(op->th->env->io_struct.fd_map,op->u.a.fd));
		break;
	default:
		assert(0);
		break;
	}
	if (ret==-1){
		if (errno==EAGAIN || errno==EWOULDBLOCK){
			return 0;
		}
	}
	op->ret=ret;
	op->errcode=errno;
#if 0
	if (ret == -1) {
		switch (op->type) {
		case MYTH_IO_SEND:
			fprintf(stderr, "send:fd=%d,buf=%p,size=%d,flags=%d:", op->u.s.fd,
					op->u.s.buf, (int) op->u.s.n, (int) op->u.s.flags);
			break;
		case MYTH_IO_RECV:
			fprintf(stderr, "recv:fd=%d,buf=%p,size=%d,flags=%d:", op->u.r.fd,
					op->u.r.buf, (int) op->u.r.n, (int) op->u.r.flags);
			break;
		case MYTH_IO_ACCEPT:
			fprintf(stderr, "accept:");
			break;
		default:
			assert(0);
			break;
		}
		fprintf(stderr, "errcode=%d\n", op->errcode);
	}
#endif
	return 1;
}

//暇なときにポーリングする。戻り値は実行可能になったスレッドのひとつ。
//他の実行可能なスレッドはキューに入れられる。
static inline myth_thread_t myth_io_polling(struct myth_running_env *env)
{
	uint64_t t0,t1,t2,t3;
	int i;
	int ready;
	int hit;
	struct epoll_event events[MYTH_EPOLL_SIZE];
	myth_io_struct_perfd_t fd_data;
	myth_io_op_t op;
	myth_thread_t first_runnable;
	first_runnable=NULL;
	t0=0;t1=0;t2=0;t3=0;
	hit=0;
	myth_io_cs_enter(env);
#ifdef MYTH_IO_PROF_DETAIL
	t0=get_rdtsc();
#endif
#ifdef MYTH_ONE_IO_WORKER
	if (env->rank!=0)return NULL;
#endif
	//Reserve listにはブロックしたI/O操作が入っている
	while ((op=myth_io_wait_list_pop(env,&env->io_struct.rd_reserve_list))!=NULL){
		hit=1;
		//もう一度I/Oを試みる
		if (myth_io_execute(op)){
			myth_thread_t th;
			th=op->th;
			th->env=env;
			//read listのスレッドをキューに入れる
			if (!first_runnable){first_runnable=th;}
			else{myth_queue_push(&env->runnable_q,th);}
		}
		else{
			//キューに追加
			myth_io_wait_list_push(env,op->wl_ptr,op);
			break;
		}
	}
	while ((op=myth_io_wait_list_pop(env,&env->io_struct.wr_reserve_list))!=NULL){
		if (myth_io_execute(op)){
			myth_thread_t th;
			th=op->th;
			th->env=env;
			//I/Oが成功したのならば、成功したスレッドを実行可能にする
			//write listのスレッドをキューに入れる
			if (!first_runnable){first_runnable=th;}
			else{myth_queue_push(&env->runnable_q,th);}
		}
		else{
			//キューに戻す
			myth_io_wait_list_push(env,op->wl_ptr,op);
			break;
		}
	}
	myth_io_struct_perfd_t *freed_fds;
	int freed_fds_size;
	//必要ないデータが残っていたら解放する
	int freed_fds_buf_size=1;
	freed_fds=myth_flmalloc(env->rank,freed_fds_buf_size);freed_fds_size=0;
	while ((fd_data=myth_io_fd_list_pop(&env->io_struct.close_list))!=NULL){
		hit=1;
		//待っているスレッドを全部実行可能にする
		myth_thread_t th;
		while ((op=myth_io_wait_list_pop(env,&fd_data->rd_list))!=NULL){
			th=op->th;
			assert(op->type==MYTH_IO_ACCEPT || op->type==MYTH_IO_RECV);
			int b;
			b=myth_io_execute(op);
			assert(b);
			th->env=env;
			if (!first_runnable){first_runnable=th;}
			else{myth_queue_push(&env->runnable_q,th);}
		}
		myth_io_wait_list_destroy(&fd_data->rd_list);
		while ((op=myth_io_wait_list_pop(env,&fd_data->wr_list))!=NULL){
			th=op->th;
			assert(op->type==MYTH_IO_CONNECT || op->type==MYTH_IO_SEND);
			int b;
			b=myth_io_execute(op);
			assert(b);
			th->env=env;
			if (!first_runnable){first_runnable=th;}
			else{myth_queue_push(&env->runnable_q,th);}
		}
		myth_io_wait_list_destroy(&fd_data->wr_list);
		fd_data->closed=1;
		//fprintf(stderr,"UNREG:%d\n",fd_data->fd);
		//下のepollで引っかかる可能性があるため、ここではまだ開放しない。
		freed_fds=myth_flrealloc(env->rank,freed_fds_buf_size,freed_fds,sizeof(myth_io_struct_perfd_t)*(freed_fds_size+1));
		freed_fds_buf_size=sizeof(myth_io_struct_perfd_t)*(freed_fds_size+1);
		freed_fds[freed_fds_size]=fd_data;
		freed_fds_size++;
	}
#ifdef MYTH_IO_PROF_DETAIL
	t2=get_rdtsc();
#endif
	//epollで待つ
	ready=epoll_wait(env->io_struct.epfd,events,MYTH_EPOLL_SIZE,0);
#ifdef MYTH_IO_PROF_DETAIL
	t3=get_rdtsc();
#endif
	if (ready==-1){
		if (errno!=EINTR){
			perror(NULL);
			fprintf(stderr,"Errcode = %d\n",errno);
			assert(0);
		}
	}
	if (ready>0)hit=1;
	for (i=0;i<ready;i++){
		int ef;
		ef=events[i].events;
		fd_data=events[i].data.ptr;
		if (fd_data->closed)continue;//すでに閉じられたfdが引っかかることもあるが無視
		//printf("E %p %p\n",(void*)&fd_data->rd_list,(void*)&fd_data->wr_list);
		if (ef & EPOLLRDHUP){
			//printf("H\n");
			//read list,write listの両方を全部実行可能にする
			myth_thread_t th;
			while ((op=myth_io_wait_list_pop(env,&fd_data->rd_list))!=NULL){
				th=op->th;
				int b;
				myth_assert(op->type==MYTH_IO_ACCEPT || op->type==MYTH_IO_RECV);
				b=myth_io_execute(op);
				myth_assert(b);
				th->env=env;
				if (!first_runnable){first_runnable=th;}
				else{myth_queue_push(&env->runnable_q,th);}
			}
			while ((op=myth_io_wait_list_pop(env,&fd_data->wr_list))!=NULL){
				th=op->th;
				int b;
				myth_assert(op->type==MYTH_IO_CONNECT || op->type==MYTH_IO_SEND);
				b=myth_io_execute(op);
				myth_assert(b);
				th->env=env;
				if (!first_runnable){first_runnable=th;}
				else{myth_queue_push(&env->runnable_q,th);}
			}
		}
		else{
			if (ef & EPOLLIN){
				myth_thread_t th;
				while ((op=myth_io_wait_list_pop(env,&fd_data->rd_list))!=NULL){
					th=op->th;
					myth_assert(op->type==MYTH_IO_ACCEPT || op->type==MYTH_IO_RECV);
					//I/Oを実際にやり、成功したらスレッドを実行可能にする
					if (myth_io_execute(op)){
						th->env=env;
						//read listのスレッドをキューに入れる
						if (!first_runnable){first_runnable=th;}
						else{myth_queue_push(&env->runnable_q,th);}
					}
					else{
						//キューに戻す
						myth_io_wait_list_push(env,&fd_data->rd_list,op);
						break;
					}
				}
			}
			if (ef & EPOLLOUT){
				myth_thread_t th;
				while ((op=myth_io_wait_list_pop(env,&fd_data->wr_list))!=NULL){
					th=op->th;
					myth_assert(op->type==MYTH_IO_CONNECT || op->type==MYTH_IO_SEND);
					//I/Oを実際にやり、成功したらスレッドを実行可能にする
					if (myth_io_execute(op)){
						th->env=env;
						//write listのスレッドをキューに入れる
						if (!first_runnable){first_runnable=th;}
						else{myth_queue_push(&env->runnable_q,th);}
					}
					else{
						//キューに戻す
						myth_io_wait_list_push(env,&fd_data->wr_list,op);
						break;
					}
				}
			}
		}
	}
	for (i=0;i<freed_fds_size;i++){
		myth_flfree(env->rank,sizeof(myth_io_struct_perfd),freed_fds[i]);
	}
	myth_flfree(env->rank,freed_fds_buf_size,freed_fds);
	myth_io_cs_exit(env);
#ifdef MYTH_IO_PROF_DETAIL
	t1=get_rdtsc();
	if (g_sched_prof){
		if (hit){
			env->prof_data.io_chk_hit++;
			env->prof_data.io_chk_hit_cycles+=t1-t0;
			env->prof_data.io_epoll_hit++;
			env->prof_data.io_epoll_hit_cycles+=t3-t2;
		}
		else{
			env->prof_data.io_chk_miss_cycles+=t1-t0;
			env->prof_data.io_chk_miss++;
			env->prof_data.io_epoll_miss++;
			env->prof_data.io_epoll_miss_cycles+=t3-t2;
		}
	}
#endif
	return first_runnable;
}

static inline myth_thread_t myth_io_polling_sig(struct myth_running_env *env)
{
	uint64_t t0,t1,t2,t3;
	int i;
	int ready;
	int hit;
	struct epoll_event events[MYTH_EPOLL_SIZE];
	myth_io_struct_perfd_t fd_data;
	myth_io_op_t op;
	myth_thread_t first_runnable;
	first_runnable=NULL;
	t0=0;t1=0;t2=0;t3=0;
	hit=0;
	if (myth_io_is_in_cs(env))return NULL;
	myth_io_cs_enter(env);
#ifdef MYTH_IO_PROF_DETAIL
	t0=get_rdtsc();
#endif
#ifdef MYTH_ONE_IO_WORKER
	if (env->rank!=0)return NULL;
#endif
#ifdef MYTH_IO_PROF_DETAIL
	t2=get_rdtsc();
#endif
	//epollで待つ
	ready=epoll_wait(env->io_struct.epfd,events,MYTH_EPOLL_SIZE,0);
#ifdef MYTH_IO_PROF_DETAIL
	t3=get_rdtsc();
#endif
	if (ready==-1){
		if (errno!=EINTR){
			perror(NULL);
			fprintf(stderr,"Errcode = %d\n",errno);
			assert(0);
		}
	}
	if (ready>0)hit=1;
	for (i=0;i<ready;i++){
		int ef;
		ef=events[i].events;
		fd_data=events[i].data.ptr;
		if (fd_data->closed)continue;//すでに閉じられたfdが引っかかることもあるが無視
		//printf("E %p %p\n",(void*)&fd_data->rd_list,(void*)&fd_data->wr_list);
		if (ef & EPOLLRDHUP){
			//printf("H\n");
			//read list,write listの両方を全部実行可能にする
			myth_thread_t th;
			while ((op=myth_io_wait_list_pop(env,&fd_data->rd_list))!=NULL){
				th=op->th;
				int b;
				myth_assert(op->type==MYTH_IO_ACCEPT || op->type==MYTH_IO_RECV);
				b=myth_io_execute(op);
				myth_assert(b);
				th->env=env;
				if (!first_runnable){first_runnable=th;}
				else{myth_queue_push(&env->runnable_q,th);}
			}
			while ((op=myth_io_wait_list_pop(env,&fd_data->wr_list))!=NULL){
				th=op->th;
				int b;
				myth_assert(op->type==MYTH_IO_CONNECT || op->type==MYTH_IO_SEND);
				b=myth_io_execute(op);
				myth_assert(b);
				th->env=env;
				if (!first_runnable){first_runnable=th;}
				else{myth_queue_push(&env->runnable_q,th);}
			}
		}
		else{
			if (ef & EPOLLIN){
				myth_thread_t th;
				while ((op=myth_io_wait_list_pop(env,&fd_data->rd_list))!=NULL){
					th=op->th;
					myth_assert(op->type==MYTH_IO_ACCEPT || op->type==MYTH_IO_RECV);
					//I/Oを実際にやり、成功したらスレッドを実行可能にする
					if (myth_io_execute(op)){
						th->env=env;
						//read listのスレッドをキューに入れる
						if (!first_runnable){first_runnable=th;}
						else{myth_queue_push(&env->runnable_q,th);}
					}
					else{
						//キューに戻す
						myth_io_wait_list_push(env,&fd_data->rd_list,op);
						break;
					}
				}
			}
			if (ef & EPOLLOUT){
				myth_thread_t th;
				while ((op=myth_io_wait_list_pop(env,&fd_data->wr_list))!=NULL){
					th=op->th;
					myth_assert(op->type==MYTH_IO_CONNECT || op->type==MYTH_IO_SEND);
					//I/Oを実際にやり、成功したらスレッドを実行可能にする
					if (myth_io_execute(op)){
						th->env=env;
						//write listのスレッドをキューに入れる
						if (!first_runnable){first_runnable=th;}
						else{myth_queue_push(&env->runnable_q,th);}
					}
					else{
						//キューに戻す
						myth_io_wait_list_push(env,&fd_data->wr_list,op);
						break;
					}
				}
			}
		}
	}
#ifdef MYTH_IO_PROF_DETAIL
	t1=get_rdtsc();
	if (g_sched_prof){
		if (hit){
			env->prof_data.io_chk_hit++;
			env->prof_data.io_chk_hit_cycles+=t1-t0;
			env->prof_data.io_epoll_hit++;
			env->prof_data.io_epoll_hit_cycles+=t3-t2;
		}
		else{
			env->prof_data.io_chk_miss_cycles+=t1-t0;
			env->prof_data.io_chk_miss++;
			env->prof_data.io_epoll_miss++;
			env->prof_data.io_epoll_miss_cycles+=t3-t2;
		}
	}
#endif
	myth_io_cs_exit(env);
	return first_runnable;
}

#ifdef MYTH_USE_SIGIO
static void myth_io_sighandler(int signum,siginfo_t *sinfo,void* ctx)
{
//	int ret;
//	ret=write(1,"SIGIO\n",6);
//	printf("fd=%d\n",sinfo->si_fd);
//	return;
	int errno_bk;
	myth_running_env_t env;
	myth_thread_t th;
	myth_fd_map_t fd_map;
	myth_io_struct_perfd_t fd_data;
	myth_io_op_t op;
	errno_bk=errno;
	env=myth_get_current_env();
	env->io_struct.sig_count++;
	if (myth_queue_is_operating(&env->runnable_q)){errno=errno_bk;return;}
	if (myth_io_is_in_cs(env)){errno=errno_bk;return;}
	fd_map=env->io_struct.fd_map;
	assert(fd_map);
	//Lookup blocked list from fd_map
	fd_data=myth_fd_map_trylookup(fd_map,sinfo->si_fd);
	if (!fd_data){errno=errno_bk;return;}
	myth_io_cs_enter(env);
	switch (sinfo->si_code)
	{
	case POLL_IN:
		//printf("POLL_IN\n");
		//lookup data from fd
		while ((op=myth_io_wait_list_pop(env,&fd_data->rd_list))!=NULL){
			th=op->th;
			myth_assert(op->type==MYTH_IO_ACCEPT || op->type==MYTH_IO_RECV);
			//I/Oを実際にやり、成功したらスレッドを実行可能にする
			if (myth_io_execute(op)){
				th->env=env;
				//read listのスレッドをキューに入れる
				/*if (!first_runnable){first_runnable=th;}
				else*/{myth_queue_push(&env->runnable_q,th);}
			}
			else
			{
				//キューに戻す
				myth_io_wait_list_push(env,fd_data->rd_reserve_list_ptr,op);
				break;
			}
		}
		break;
	case POLL_OUT:
		//printf("POLL_OUT\n");
		while ((op=myth_io_wait_list_pop(env,&fd_data->wr_list))!=NULL){
			th=op->th;
			myth_assert(op->type==MYTH_IO_CONNECT || op->type==MYTH_IO_SEND);
			//I/Oを実際にやり、成功したらスレッドを実行可能にする
			if (myth_io_execute(op)){
				th->env=env;
				//write listのスレッドをキューに入れる
				/*if (!first_runnable){first_runnable=th;}
				else*/{myth_queue_push(&env->runnable_q,th);}
			}
			else
			{
				//キューに戻す
				myth_io_wait_list_push(env,fd_data->wr_reserve_list_ptr,op);
				break;
			}
		}
		break;
	case POLL_HUP:
		//printf("POLL_HUP\n");
		//push to runqueue
		break;
	case POLL_MSG:
	case POLL_ERR:
	case POLL_PRI:
		break;
	}
	myth_io_cs_exit(env);
	errno=errno_bk;
}
#endif

#ifdef MYTH_USE_IO_THREAD
static inline myth_thread_t myth_io_polling_thread(struct myth_running_env *env)
{
	uint64_t t0,t1,t2,t3;
	int i;
	int ready;
	int hit;
	struct epoll_event events[MYTH_EPOLL_SIZE];
	myth_io_struct_perfd_t fd_data;
	myth_io_op_t op;
	myth_thread_t first_runnable;
	first_runnable=NULL;
	t0=0;t1=0;t2=0;t3=0;
	hit=0;
	//if (myth_io_is_in_cs(env))return NULL;
	myth_io_cs_enter(env);
#ifdef MYTH_IO_PROF_DETAIL
	t0=get_rdtsc();
#endif
#ifdef MYTH_ONE_IO_WORKER
	if (env->rank!=0)return NULL;
#endif
	//Reserve listにはブロックしたI/O操作が入っている
	while ((op=myth_io_wait_list_pop(env,&env->io_struct.rd_reserve_list))!=NULL){
		hit=1;
		//もう一度I/Oを試みる
		if (myth_io_execute(op)){
			myth_thread_t th;
			th=op->th;
			th->env=env;
			//read listのスレッドをキューに入れる
			if (!first_runnable){first_runnable=th;}
			else{myth_queue_push(&env->runnable_q,th);}
		}
		else{
			//キューに追加
			myth_io_wait_list_push(env,op->wl_ptr,op);
			break;
		}
	}
	while ((op=myth_io_wait_list_pop(env,&env->io_struct.wr_reserve_list))!=NULL){
		if (myth_io_execute(op)){
			myth_thread_t th;
			th=op->th;
			th->env=env;
			//I/Oが成功したのならば、成功したスレッドを実行可能にする
			//write listのスレッドをキューに入れる
			if (!first_runnable){first_runnable=th;}
			else{myth_queue_push(&env->runnable_q,th);}
		}
		else{
			//キューに戻す
			myth_io_wait_list_push(env,op->wl_ptr,op);
			break;
		}
	}
#ifdef MYTH_IO_PROF_DETAIL
	t2=get_rdtsc();
#endif
	//wait by epoll
	myth_io_cs_exit(env);
	//fprintf(stderr,"A\n");
	ready=epoll_wait(env->io_struct.epfd,events,MYTH_EPOLL_SIZE,MYTH_IO_THREAD_PERIOD);
	myth_io_cs_enter(env);
#ifdef MYTH_IO_PROF_DETAIL
	t3=get_rdtsc();
#endif
	if (ready==-1){
		if (errno!=EINTR){
			perror(NULL);
			fprintf(stderr,"Errcode = %d\n",errno);
			assert(0);
		}
	}
	if (ready>0)hit=1;
	for (i=0;i<ready;i++){
		int ef;
		ef=events[i].events;
		fd_data=events[i].data.ptr;
		if (fd_data->closed)continue;//すでに閉じられたfdが引っかかることもあるが無視
		//printf("E %p %p\n",(void*)&fd_data->rd_list,(void*)&fd_data->wr_list);
		if (ef & EPOLLRDHUP){
			//printf("H\n");
			//read list,write listの両方を全部実行可能にする
			myth_thread_t th;
			while ((op=myth_io_wait_list_pop(env,&fd_data->rd_list))!=NULL){
				th=op->th;
				int b;
				myth_assert(op->type==MYTH_IO_ACCEPT || op->type==MYTH_IO_RECV);
				b=myth_io_execute(op);
				myth_assert(b);
				th->env=env;
				if (!first_runnable){first_runnable=th;}
				else{myth_queue_push(&env->runnable_q,th);}
			}
			while ((op=myth_io_wait_list_pop(env,&fd_data->wr_list))!=NULL){
				th=op->th;
				int b;
				myth_assert(op->type==MYTH_IO_CONNECT || op->type==MYTH_IO_SEND);
				b=myth_io_execute(op);
				myth_assert(b);
				th->env=env;
				if (!first_runnable){first_runnable=th;}
				else{myth_queue_push(&env->runnable_q,th);}
			}
		}
		else{
			if (ef & EPOLLIN){
				myth_thread_t th;
				while ((op=myth_io_wait_list_pop(env,&fd_data->rd_list))!=NULL){
					th=op->th;
					myth_assert(op->type==MYTH_IO_ACCEPT || op->type==MYTH_IO_RECV);
					//I/Oを実際にやり、成功したらスレッドを実行可能にする
					if (myth_io_execute(op)){
						th->env=env;
						//read listのスレッドをキューに入れる
						if (!first_runnable){first_runnable=th;}
						else{myth_queue_push(&env->runnable_q,th);}
					}
					else{
						//キューに戻す
						myth_io_wait_list_push(env,&fd_data->rd_list,op);
						break;
					}
				}
			}
			if (ef & EPOLLOUT){
				myth_thread_t th;
				while ((op=myth_io_wait_list_pop(env,&fd_data->wr_list))!=NULL){
					th=op->th;
					myth_assert(op->type==MYTH_IO_CONNECT || op->type==MYTH_IO_SEND);
					//I/Oを実際にやり、成功したらスレッドを実行可能にする
					if (myth_io_execute(op)){
						th->env=env;
						//write listのスレッドをキューに入れる
						if (!first_runnable){first_runnable=th;}
						else{myth_queue_push(&env->runnable_q,th);}
					}
					else{
						//キューに戻す
						myth_io_wait_list_push(env,&fd_data->wr_list,op);
						break;
					}
				}
			}
		}
	}
#ifdef MYTH_IO_PROF_DETAIL
	t1=get_rdtsc();
	if (g_sched_prof){
		if (hit){
			env->prof_data.io_chk_hit++;
			env->prof_data.io_chk_hit_cycles+=t1-t0;
			env->prof_data.io_epoll_hit++;
			env->prof_data.io_epoll_hit_cycles+=t3-t2;
		}
		else{
			env->prof_data.io_chk_miss_cycles+=t1-t0;
			env->prof_data.io_chk_miss++;
			env->prof_data.io_epoll_miss++;
			env->prof_data.io_epoll_miss_cycles+=t3-t2;
		}
	}
#endif
	myth_queue_push(&env->runnable_q,first_runnable);
	myth_io_cs_exit(env);
	return NULL;
}
#endif

#endif /* MYTH_IO_POLL_H_ */
