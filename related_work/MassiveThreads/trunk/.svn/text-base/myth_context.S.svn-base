/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
//myth_contextを扱う
#include "myth_config.h"

.text

#ifdef __i386__

#ifdef USE_JUMP_INSN_A
#define MY_RET_A pop %eax;jmp *%eax
#else
#define MY_RET_A ret
#endif
#ifdef USE_JUMP_INSN_B
#define MY_RET_B pop %eax;jmp *%eax
#else
#define MY_RET_B ret
#endif

//データ構造
/*
	uint32_t esp;//スタックポインタ
*/

.p2align 4
.globl myth_set_context_s
.type myth_set_context_s,@function
myth_set_context_s:
	//第一引数をESPにロード
	mov 4(%esp),%eax
	mov (%eax),%esp
	//スタックが切り替わったので、あとはretすれば制御の流れが元に戻る。
	MY_RET_B

.size myth_set_context_s,.-myth_set_context_s

.p2align 4
.globl myth_swap_context_s
.type myth_swap_context_s,@function
myth_swap_context_s:
	//レジスタを保存
	push %ebp
	push %edi
	push %esi
	push %ebx
	//戻りアドレスを保存
	pushl $1f
	//第一引数の示すアドレスにspの値を保存
	mov (4*5+4)(%esp),%eax
	mov %esp,(%eax)
	//スイッチ先のspをロード
	mov (4*5+8)(%esp),%eax
	mov (%eax),%esp
	//飛ぶ
	MY_RET_A
1:
	//他のルーチンにsetされたらここに飛んでくる
	//callee-saved registerを復帰させる
	pop %ebx
	pop %esi
	pop %edi
	pop %ebp
	MY_RET_B

.size myth_swap_context_s,.-myth_swap_context_s

.p2align 4
.globl myth_swap_context_withcall_s
.type myth_swap_context_withcall_s,@function
myth_swap_context_withcall_s:
	//レジスタを保存
	push %ebp
	push %edi
	push %esi
	push %ebx
	//戻りアドレスを保存
	push $1f
	//第一引数の示すアドレスにspの値を保存
	mov (4*5+4)(%esp),%eax
	mov %esp,(%eax)
	//関数の引数をレジスタに読み込む
	mov (4*5+24)(%esp),%ebp
	mov (4*5+20)(%esp),%esi
	mov (4*5+16)(%esp),%edi
	//関数のアドレスをレジスタに読み込む
	mov (4*5+12)(%esp),%edx
	//スイッチ先のspをロード
	mov (4*5+8)(%esp),%eax
	mov (%eax),%esp
	//引数をプッシュ
	push %ebp
	push %esi
	push %edi
	//関数を呼ぶ
	call *%edx
	//spを戻す
	lea 12(%esp),%esp
	//飛ぶ
	MY_RET_A
1:
	//他のルーチンにsetされたらここに飛んでくる
	//callee-saved registerを復帰させる
	pop %ebx
	pop %esi
	pop %edi
	pop %ebp
	MY_RET_B

.size myth_swap_context_withcall_s,.-myth_swap_context_withcall_s

.p2align 4
.globl myth_set_context_withcall_s
.type myth_set_context_withcall_s,@function
myth_set_context_withcall_s:
	//関数の引数をレジスタに読み込む
	mov 20(%esp),%ebp
	mov 16(%esp),%esi
	mov 12(%esp),%edi
	//関数のアドレスをレジスタに読み込む
	mov 8(%esp),%edx
	//第一引数をESPにロード
	mov 4(%esp),%eax
	mov (%eax),%esp
	//引数をプッシュ
	push %ebp
	push %esi
	push %edi
	//関数を呼ぶ
	call *%edx
	//スタックフレームを戻す
	add $12,%esp
	//スタックが切り替わったので、あとはretすれば制御の流れが元に戻る。
	MY_RET_B

.size myth_set_context_withcall_s,.-myth_set_context_withcall_s

#elif defined __x86_64__

#ifdef USE_JUMP_INSN_A
#define MY_RET_A pop %rax;jmp *%rax
#else
#define MY_RET_A ret
#endif
#ifdef USE_JUMP_INSN_B
#define MY_RET_B pop %rax;jmp *%rax
#else
#define MY_RET_B ret
#endif

//データ構造
/*
	uint64_t rsp;
*/

.p2align 4
.globl myth_set_context_s
.type myth_set_context_s,@function
myth_set_context_s:
	//第一引数をレジスタに設定
	mov (%rdi),%rsp
	//スタックが切り替わったので、あとはretすれば制御の流れが元に戻る。
	MY_RET_B
.size myth_set_context_s,.-myth_set_context_s

.p2align 4
.globl myth_swap_context_s
.type myth_swap_context_s,@function
myth_swap_context_s:
	//レジスタを保存
	push %rbp
	push %rbx
	push %r12
	push %r13
	push %r14
	push %r15
#ifdef COMPILED_AS_PIC
	lea 1f@GOTPCREL(%rip),%rax
	push %rax
#else
	pushq $1f
#endif
	//スタックを切り替え
	mov %rsp,(%rdi)
	mov (%rsi),%rsp
	MY_RET_A
1:
	pop %r15
	pop %r14
	pop %r13
	pop %r12
	pop %rbx
	pop %rbp
	MY_RET_B
.size myth_swap_context_s,.-myth_swap_context_s

.p2align 4
.globl myth_swap_context_withcall_s
.type myth_swap_context_withcall_s,@function
myth_swap_context_withcall_s:
	//レジスタを保存
	push %rbp
	push %rbx
	push %r12
	push %r13
	push %r14
	push %r15
#ifdef COMPILED_AS_PIC
	lea 1f@GOTPCREL(%rip),%rax
	push %rax
#else
	pushq $1f
#endif
	//スタックを切り替え
	mov %rsp,(%rdi)
	mov (%rsi),%rsp
	mov %rdx,%rax
	mov %rcx,%rdi
	mov %r8,%rsi
	mov %r9,%rdx
	call *%rax
	MY_RET_A
1:
	pop %r15
	pop %r14
	pop %r13
	pop %r12
	pop %rbx
	pop %rbp
	MY_RET_B
.size myth_swap_context_withcall_s,.-myth_swap_context_withcall_s

.p2align 4
.globl myth_set_context_withcall_s
.type myth_set_context_withcall_s,@function
myth_set_context_withcall_s:
	//第一引数をレジスタに設定
	mov (%rdi),%rsp
	mov %rsi,%rax
	mov %rdx,%rdi
	mov %rcx,%rsi
	mov %r8,%rdx
	call *%rax
	//スタックが切り替わったので、あとはretすれば制御の流れが元に戻る。
	MY_RET_B
.size myth_set_context_withcall_s,.-myth_set_context_withcall_s

#else
#error
#endif

