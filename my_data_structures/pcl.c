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

#ifndef _PCL_H_
#define _PCL_H_


#undef CO_USE_SIGCONTEXT
#define CO_USE_UCONTEXT

#include <stdio.h>
#include <stdlib.h>
#include "pcl.h"
#include <execinfo.h>


#if defined(CO_USE_SIGCONTEXT)
#include <signal.h>
#endif


/*
 * The following value must be power of two ( N^2 ).
 * 本当はそれだけが条件でもない気がする・・・
 * もう少し最適な値を考える努力が必要かも
 */
#define CO_STK_ALIGN 256 /* coroutine構造体のうち，アラインメントを決めるメンバ(つまり最もアラインメントの大きいメンバ)のアラインメント． */
#define CO_STK_COROSIZE ((sizeof(coroutine) + CO_STK_ALIGN - 1) & ~(CO_STK_ALIGN - 1)) /* 本当はsizeof(coroutine)にしたいところを，アラインメントをとっている
                                                                                            こうすることで，coroutineが配列になっても余分なメモリアクセスを減らせる */
#define CO_MIN_SIZE (4 * 1024)


__thread coroutine co_thread;  /* "__thread" キーワードはGCCがサポートしている．TLS(Thread Local Strage)であることを明示するらしい */
__thread coroutine *co_curr;
__thread coroutine *co_dhelper;



static int co_set_context(co_ctx_t *ctx, void *func, char *stkbase, long stksiz) {

  if (getcontext(&ctx->cc)) /* 正にこの行のcontextをctx->ccに保存 */
    return -1;
 
  ctx->cc.uc_link = NULL;
 
  ctx->cc.uc_stack.ss_sp = stkbase;
  ctx->cc.uc_stack.ss_size = stksiz - sizeof(long);
  ctx->cc.uc_stack.ss_flags = 0;
 
  makecontext(&ctx->cc, func, 1); /* 関数コールのプロローグ・エピローグの代替といった難しいことをやってくれているんだと思う
                                     作成されたcontextはctx->ccに対する変更で反映される
                                     funcにはco_runnerが入る */

  return 0;
}


void co_switch_context(co_ctx_t *octx, co_ctx_t *nctx) {

  if (swapcontext(&octx->cc, &nctx->cc) < 0) {
    fprintf(stderr, "[PCL] Context switch failed: curr=%p\n",
            co_curr);
    exit(1);
  }

}

static void co_del_helper(void*);

/* makecontext()の引数として与えるために，void()(void)型．
 * */
static void co_runner(void) {
  coroutine *co = co_curr;

  co->restarget = co->caller; /* swap返しをするために，呼び出し元の登録．swap返しはco_exit()の中でやってる． */
  co->func(co->data); /* funcは戻り値のないoutlined function. この中で *data->ret = fib(*data->arg) とかやってるから大丈夫

                         「funcの中でちゃんとコンテキストスイッチ起きるの?」と思うかも知れないが，大丈夫．
                         OpenMP directiveの各種ABIが，__ompc_task_switch()を呼び出していて，その中では実質swapcontext()呼び出しをしている */

  /* ここにfinish_current_task()を入れれば良いんじゃね? */
  co_exit(); /* laysakura: ここでexitしているので，co_exit()を明示的に呼ぶ必要が無くなっている */
}

void co_vp_init()
{
  co_curr = &co_thread;
}

/* @parameters:
 * func: taskが実行すべきoutline関数．
 * data: outline functionは， *data->ret = fib(*data->arg) みたいなことをする
 * stack: funcが使用するスタックフレーム．NULLなら，この関数がstack frameをheap上に作成する
 * size: stackのサイズ */
coroutine_t co_create(void (*func)(void *), void *data, void *stack, int size) {
  int alloc = 0;
  coroutine *co;

  if ((size &= ~(sizeof(long) - 1)) < CO_MIN_SIZE)
    return NULL;
  if (!stack) {
    size = (size + sizeof(coroutine) + CO_STK_ALIGN - 1) & ~(CO_STK_ALIGN - 1); /* 何行か下の "co = stack" のコメント参照 */
    stack = malloc(size); /* heap上にstackを作成 */
    if (!stack)
      return NULL;
    alloc = size;
  }
  co = stack; /* 使用が時間的に隣接したデータは，(メモリ)空間的にも近く配置する
                 という方針に基づき，"stack"という領域の前半にcoroutine構造体を配置し，その後ろにstackの本体を置く．
                 理由はそれだけではない．こういうことをすると，mallocの回数が1回減らせる．
                 ここまで多く呼ばれる関数の中では，できる限りmalloc()の回数は減らしたい．

                 本当はcoroutine構造体にheap_on_stackへのアドレスがメンバとしてあるのが綺麗 */
  stack = (char *) stack + CO_STK_COROSIZE; /* Alignmentを考慮 */
  co->alloc = alloc;
  co->func = func;
  co->data = data;

  if (co_set_context(&co->ctx, co_runner, stack, size - CO_STK_COROSIZE) < 0) {
    if (alloc)
      free(co);
    return NULL;
  }

  return (coroutine_t) co;
}


void co_delete(coroutine_t coro) {
  coroutine *co = (coroutine *) coro;

  /* fprintf(stderr, "co_delete(): delete %p\n", co); */

  if (co == co_curr) {
    fprintf(stderr, "[PCL] Cannot delete itself: curr=%p\n",
            co_curr);
    exit(1);
  }
  if (co->alloc)
    free(co);
}


void co_call(coroutine_t coro) {
  coroutine *co = (coroutine *) coro, *oldco;

  oldco = co_curr;

  co->caller = co_curr;
  co_curr = co;

  if (swapcontext(&oldco->ctx.cc, &co->ctx.cc) < 0) {
    fprintf(stderr, "[PCL] Context switch failed: curr=%p\n",
            co_curr);
    exit(1);
  }
}


static void co_del_helper(void *data) {
  coroutine *cdh;

  for (;;) { /* laysakura: このforはなくても動いたりする */
    cdh = co_dhelper;
    co_dhelper = NULL;
    co_delete(co_curr->caller);
    co_call((coroutine_t) cdh);
    if (!co_dhelper) {
      fprintf(stderr, "[PCL] Resume to delete helper coroutine: curr=%p\n",
              co_curr);
      exit(1);
    }
  }
}

/* @parameters:
 * coro: 今thread上で走っているcoroutineを終了させた後に移る先．*/
void co_exit_to(coroutine_t coro, int thread_id)
{
  coroutine *co = (coroutine *) coro;
  static __thread coroutine *dchelper = NULL; /* delete helper らしい */
  static __thread char stk[CO_MIN_SIZE];

  if (!dchelper &&
      !(dchelper = co_create(co_del_helper, NULL, stk, sizeof(stk)))) {
    fprintf(stderr, "[PCL] Unable to create delete helper coroutine: curr=%p\n",
            co_curr);
    exit(1);
  }
  co_dhelper = co;  /* laysakura: こいつがco_del_helper()の中でco_callされる */
 
  co_call((coroutine_t) dchelper);
 /* laysakura: co_del_helperの中でco_dhelperがco_callされるので，以降の行には来ない */

  /* ここに来るのは，外部からco_call(); */

  exit(1);
}


void co_exit(void) {
  co_exit_to((coroutine_t) co_curr->restarget, 777);
}


coroutine_t co_current(void) {
  return (coroutine_t) co_curr;
}


#endif /* _PCL_H_ */
