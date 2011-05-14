/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_WSQUEUE_PROTO_H_
#define MYTH_WSQUEUE_PROTO_H_

//キューを初期化
static inline void myth_queue_init(myth_thread_queue_t q);
//キューを解放
static inline void myth_queue_fini(myth_thread_queue_t q);
//キューをクリアする
static inline void myth_queue_clear(myth_thread_queue_t q);
//スレッドをキューに入れる
static inline void myth_queue_push(myth_thread_queue_t q,struct myth_thread *th);
//所有キューからスレッドを取り出す。失敗したらNULLが返る
static inline struct myth_thread* myth_queue_pop(myth_thread_queue_t q);
//スレッドをキューの末尾に入れる
static inline void myth_queue_put(myth_thread_queue_t q,myth_thread_t th);
//他人が持っているキューからスレッドを取り出す。失敗したらNULLが返る
static inline struct myth_thread* myth_queue_take(myth_thread_queue_t q);
//他人が持っているキューにスレッドを押し付ける。自分がアクセスするときにも使う。
//trypassは失敗するかもしれない。passは成功するまでブロックする
static inline int myth_queue_trypass(myth_thread_queue_t q,struct myth_thread* th);
static inline void myth_queue_pass(myth_thread_queue_t q,struct myth_thread* th);
//int myth_queue_isempty(myth_thread_queue_t q);

//各スレッドがもつデータを初期化する
static inline void myth_queue_init_thread_data(myth_queue_data_t th);
static inline void myth_queue_fini_thread_data(myth_queue_data_t th);

//ランキューを操作中なら1を、そうでなければ0を返す
static inline int myth_queue_is_operating(myth_thread_queue_t q);

#endif /* MYTH_QUEUE_PROTO_H_ */
