/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_IO_H_
#define MYTH_IO_H_

#include <sys/socket.h>
#include <stdint.h>

#include "myth_internal_lock.h"

typedef enum myth_io_type
{
	MYTH_IO_CONNECT,
	MYTH_IO_ACCEPT,
	MYTH_IO_RECV,
	MYTH_IO_SEND,
}myth_io_type;

typedef struct myth_fd_map_entry
{
	int bufsize;
	int size;
	//void **data;
	struct myth_io_struct_perfd **data;
	int *key;
	myth_fdmap_entry_lock_t lock;
}myth_fd_map_entry,*myth_fd_map_entry_t;

typedef struct myth_fd_map
{
	myth_fdmap_lock_t lock;
	myth_fd_map_entry *entry;
	//int size;
}myth_fd_map,*myth_fd_map_t;

typedef struct myth_io_fd_list
{//解放待ちリスト
	myth_thread_lock_t lock;
	int size;
	int bufsize;
	struct myth_io_struct_perfd **data;
}myth_io_fd_list,*myth_io_fd_list_t;

//I/O操作を表す構造体
typedef struct myth_io_op
{
	struct myth_thread *th;//I/Oをやってるスレッド
	struct myth_io_wait_list *wl_ptr;
	myth_io_type type;
	union{//I/Oの種別
		struct{
			int fd;
			__SOCKADDR_ARG addr;
			socklen_t *len;
		}a;//accept
		struct{
			int fd;
			//__SOCKADDR_ARG addr;
			//socklen_t *addr_len;
		}c;
		struct{
			int fd;
			__const void *buf;
			size_t n;
			int flags;
		}s;//send
		struct{
			int fd;
			void *buf;
			size_t n;
			int flags;
		}r;//recv
	}u;
	int ret;
	int errcode;
}myth_io_op,*myth_io_op_t;

//I/O待ちリスト
typedef struct myth_io_wait_list
{
	myth_thread_lock_t lock;//リストを管理するためのロック
	//myth_thread_t *th_list;//リスト
	myth_io_op_t *io_ops;//ブロック中のI/O操作
	int size;
	int count;
}myth_io_wait_list,*myth_io_wait_list_t;

//環境あたりのデータ
typedef struct myth_io_struct_perenv
{
	int fd_count;
	int epfd;
	int epnum;
	myth_fd_map_t fd_map;
	myth_io_fd_list close_list;
	myth_io_wait_list rd_reserve_list;
	myth_io_wait_list wr_reserve_list;
	//myth_io_fd_list notify_list;
	volatile int8_t cs_flag;
	int sig_count;
#ifdef MYTH_USE_IO_THREAD
	pthread_t thread;
	uint8_t exit_flag;
	pthread_mutex_t mtx;
#endif
}myth_io_struct_perenv,*myth_io_struct_perenv_t;

//fdあたりのデータ
typedef struct myth_io_struct_perfd
{
	int fd;
	myth_io_wait_list rd_list;
	myth_io_wait_list wr_list;
	myth_io_wait_list *rd_reserve_list_ptr;
	myth_io_wait_list *wr_reserve_list_ptr;
	int tmp_for_poll;
	struct myth_running_env *env;
	int closed;
}myth_io_struct_perfd,*myth_io_struct_perfd_t;

extern myth_fd_map_t g_fd_map;

#endif /* MYTH_IO_H_ */
