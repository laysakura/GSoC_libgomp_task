/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#ifndef MYTH_SYNC_PROTO_H_
#define MYTH_SYNC_PROTO_H_

//Barrier
static inline myth_barrier_t myth_barrier_create_body(int nthreads);
MYTH_CTX_CALLBACK void myth_barrier_wait_1(void *arg1,void *arg2,void *arg3);
MYTH_CTX_CALLBACK void myth_barrier_wait_2(void *arg1,void *arg2,void *arg3);
static inline int myth_barrier_wait_body(myth_barrier_t bar);
static inline int myth_barrier_destroy_body(myth_barrier_t bar);

//Mutex
static inline myth_mutex_t myth_mutex_create_body();
static inline int myth_mutex_lock_body(myth_mutex_t mtx);
static inline int myth_mutex_unlock_body(myth_mutex_t mtx);
static inline int myth_mutex_trylock_body(myth_mutex_t mtx);
static inline int myth_mutex_destroy_body(myth_mutex_t mtx);

//Conditional Variable
static inline myth_cond_t myth_cond_init_body();
static inline int myth_cond_destroy_body(myth_cond_t cd);
static inline int myth_cond_signal_body(myth_cond_t cd);
static inline int myth_cond_broadcast_body(myth_cond_t cd);
static inline int myth_cond_wait_body(myth_cond_t cd,myth_mutex_t mtx);

#endif /* MYTH_SYNC_PROTO_H_ */
