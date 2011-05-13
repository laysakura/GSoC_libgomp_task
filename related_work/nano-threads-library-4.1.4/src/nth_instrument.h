#ifndef NTH_INSTRUMENT_H
#define NTH_INSTRUMENT_H

typedef struct nth_instrumentation_ctx nth_instrumentation_ctx;

struct nth_instrumentation_ctx {
	struct nth_instrumentation_ctx *parent;

	int ufunction_value;
};

#ifndef NTH_PARAVER

#define nth_instrument_init(arg)
#define nth_instrument_thread_start()
#define nth_instrument_end()
#define nth_instrument_thread_end() 

#define nth_instrument_get_function_value(file,line,name)  0

#define nth_instrument_in_runtime(nth)

#define nth_instrument_leave_cpu(nth)
#define nth_instrument_enter_cpu(to)
#define nth_instrument_enter_idle(nth)
#define nth_instrument_leave_idle(nth)
#define nth_instrument_create(nth)
#define nth_instrument_exit(nth)

#define nth_instrument_enter_immediate(nth)
#define nth_instrument_exit_immediate(nth)
#define nth_instrument_enter_taskwait(nth)
#define nth_instrument_leave_taskwait(nth)
#define nth_instrument_enter_barrier(nth)
#define nth_instrument_leave_barrier(nth)
#define nth_instrument_enter_block(nth)
#define nth_instrument_leave_block(nth)
#define nth_instrument_enter_create(nth)
#define nth_instrument_leave_create(nth)
#define nth_instrument_enter_for(nth)
#define nth_instrument_leave_for(nth)
#define nth_instrument_enter_yield(nth)
#define nth_instrument_leave_yield(nth)

#else

#include <mintaka.h>

struct nth_desc_t; // forward declaration

#define RUNTIME_STATE MINTAKA_STATE_SCHEDULE
#define NOTRACE_STATE MINTAKA_STATE_STOP

void nth_instrument_init (char *basename);
void nth_instrument_thread_start();
void nth_instrument_end();
#define nth_instrument_thread_end() { mintaka_state_idle(); mintaka_thread_end();}

int nth_instrument_get_function_value (char *file, int line, char *name);

#define nth_instrument_in_runtime(nth) mintaka_set_state(RUNTIME_STATE)

void nth_instrument_leave_cpu ( struct nth_desc_t *nth );
void nth_instrument_enter_cpu ( struct nth_desc_t *to );
void nth_instrument_enter_idle ( struct nth_desc_t *nth );
void nth_instrument_leave_idle ( struct nth_desc_t *nth );
void nth_instrument_create ( struct nth_desc_t *nth);
void nth_instrument_exit ( struct nth_desc_t *nth);
void nth_instrument_enter_immediate ( struct nth_desc_t *nth);
void nth_instrument_exit_immediate ( struct nth_desc_t *nth );
void nth_instrument_enter_taskwait ( struct nth_desc_t *nth );
void nth_instrument_leave_taskwait ( struct nth_desc_t *nth );
void nth_instrument_enter_barrier ( struct nth_desc_t *nth );
void nth_instrument_leave_barrier ( struct nth_desc_t *nth );
void nth_instrument_enter_block ( struct nth_desc_t *nth );
void nth_instrument_leave_block ( struct nth_desc_t *nth );
void nth_instrument_enter_create ( struct nth_desc_t *nth);
void nth_instrument_leave_create ( struct nth_desc_t *nth);
void nth_instrument_enter_for ( struct nth_desc_t *nth );
void nth_instrument_leave_for ( struct nth_desc_t *nth );
void nth_instrument_enter_yield( struct nth_desc_t *nth);
void nth_instrument_leave_yield( struct nth_desc_t *nth);

#endif

void nth_instrument_push_ctx (nth_instrumentation_ctx *ctx, char *file, int line, char *name);
void nth_instrument_pop_ctx ();

#endif
