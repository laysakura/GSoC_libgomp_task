/*
 *  PCL by Davide Libenzi ( Portable Coroutine Library )
 *  Copyright (C) 2003  Davide Libenzi
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Davide Libenzi <davidel@xmailserver.org>
 *
 */
#include <stdint.h>
#include <stdbool.h>

#if !defined(PCL_H)
#define PCL_H

#ifdef __cplusplus
extern "C" {
#endif


#define CO_USE_UCONEXT
#undef CO_USE_SIGCONTEXT

#if defined(CO_USE_UCONEXT)
#include <ucontext.h>
#include <pthread.h>

typedef ucontext_t co_core_ctx_t;
#else

#include <setjmp.h>

typedef jmp_buf co_core_ctx_t;
#endif


typedef enum {
  OMP_TASK_DEFAULT,
  OMP_TASK_SUSPENDED,
  OMP_TASK_EXIT
} omp_task_state_t;


typedef struct s_co_ctx {
  co_core_ctx_t cc;
} co_ctx_t;

typedef struct s_coroutine {
  co_ctx_t ctx;
  int alloc;
  struct s_coroutine *caller;
  struct s_coroutine *restarget; /* swapcontext()でswap後に行った関数の戻り先 */
  void (*func)(void *);
  void *data;

  /* 以下は全てOpenMP用に追加されたメンバ．
   * 何故直接構造体にメンバを追加しているかというと，PCLはGC的な機構を持っているため，
   * 直接メンバを持たせればそのメンバもGCしてくれる． */
  struct s_coroutine *creator;
  volatile uint32_t num_children;
  volatile bool cutoff;
  volatile bool waiting;
  int depth;
  pthread_mutex_t lock;
} coroutine;

typedef coroutine * coroutine_t;

coroutine_t co_create(void (*func)(void *), void *data, void *stack, int size);
void co_delete(coroutine_t coro);
void co_call(coroutine_t coro);
void co_resume(void);
  void co_exit_to(coroutine_t coro, int thread_id);
void co_exit(void);
coroutine_t co_current(void);
void co_vp_init();
void co_switch_context(co_ctx_t *octx, co_ctx_t *nctx);

#ifdef __cplusplus
}
#endif

#endif

