#include "nth_instrument.h"
#include "nth_desc.h"
#include "nth_data.h"
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

extern nth_desc_t * NTH_CANNOT_ALLOCATE_TASK;

/* Events */

/* creation/exit */

/* FIXME: declaracion temporal... unir a siguientes eventos */
#if 0 
#define NTH_EVENT_PARALLEL                  60000001
#define NTH_EVENT_WORKSHARING               60000002

#define NTH_EVENT_TASK_ENQUEUE              60000010
#define NTH_EVENT_CALL_USER_FUNCTION        60000018

#define NTH_EVENT_PROGRAM                   60000100
#define NTH_EVENT_CREATE                    60000101
#define NTH_EVENT_BLOCK                     60000102
#define NTH_EVENT_TASK_BLOCK                60000103
#define NTH_EVENT_BARRIER                   60000104
#define NTH_EVENT_YIELD                     60000105

static const char* NTH_EVENT_CALL_USER_FUNCTION_DESCR = "User function call";

static const char* NTH_EVENT_TASK_ENQUEUE_DESCR = "Task enqueue";

static const char* NTH_EVENT_PARALLEL_DESCR = "OpenMP Parallel";
static const char* NTH_EVENT_PARALLEL_1_DESCR = "Do";
static const char* NTH_EVENT_PARALLEL_2_DESCR = "Sections";
static const char* NTH_EVENT_PARALLEL_3_DESCR = "Region";

static const char* NTH_EVENT_WORKSHARING_DESCR = "OpenMP Worksharing";
static const char* NTH_EVENT_WORKSHARING_1_DESCR = "Do";
static const char* NTH_EVENT_WORKSHARING_2_DESCR = "Sections";
static const char* NTH_EVENT_WORKSHARING_3_DESCR = "Region";

static const char* NTH_EVENT_PROGRAM_DESCR = "User's program";
static const char* NTH_EVENT_PROGRAM_1_DESCR = "Begin";

static const char* NTH_EVENT_CREATE_DESCR = "Nano-thread create";
static const char* NTH_EVENT_CREATE_1_DESCR = "Begin";

static const char* NTH_EVENT_BLOCK_DESCR = "Nanos block";
static const char* NTH_EVENT_BLOCK_1_DESCR = "Begin";

static const char* NTH_EVENT_TASK_BLOCK_DESCR = "Nanos task block";
static const char* NTH_EVENT_TASK_BLOCK_1_DESCR = "Begin";

static const char* NTH_EVENT_BARRIER_DESCR = "Nanos barrier";
static const char* NTH_EVENT_BARRIER_1_DESCR = "Begin";

static const char* NTH_EVENT_YIELD_DESCR = "Nanos yield";
static const char* NTH_EVENT_YIELD_1_DESCR = "Begin";

#endif

const int EVENT_NTH_CREATION = 		70000000;
const int EVENT_NTH_EXIT =		70000001;
const int EVENT_TASK_CREATION =		70000002;
const int EVENT_TASK_EXIT =		70000003;
const int EVENT_TASK_INLINED = 		70000004;

/* Schedule events */
const int EVENT_NTH_DEPTH = 		80000001;

/* OpenMP */

/* sync */
const int EVENT_NTH_SYNC =		80000003;
typedef enum {
	NTH_SYNC_BARRIER=1,
	NTH_SYNC_BLOCK,
	NTH_SYNC_TASKWAIT
} nth_sync_t;

/* Others */
const int EVENT_TASK_ID =		80000002;
const int EVENT_USER_FUNCTION = 	60000018;


static int mintaka_max_level=100;
static nth_spin_t mintaka_lock;

void nth_instrument_init (char *basename)
{
	printf("Nth instrumentation enabled\n");

	/* env init */
	char *options = getenv("NTH_INSTRUMENT");
	if (options) {
		char *opt,*next,*value;

		next = options;
		while (next) {
			opt = next;
			next = strchr(opt,',');
			if (next) *next++=0;

			value = strchr(opt,'=');
			if ( value ) *value++=0;
			
			if ( !strcasecmp(opt,"maxlevel") ) {
				if (value)
					mintaka_max_level = atoi(value);
				else // TODO: warning
					;
			}
		}
	}


	/* mintaka initialization */
	mintaka_app_begin();
	mintaka_set_filebase(basename);
	nth_spin_init(&mintaka_lock);

/* FIXME: Registering some events... to-check */
#if 0
        /* register some events used by mercurium */
        mintaka_index_event(NTH_EVENT_CALL_USER_FUNCTION, NTH_EVENT_CALL_USER_FUNCTION_DESCR);
        mintaka_index_event(NTH_EVENT_TASK_ENQUEUE, NTH_EVENT_TASK_ENQUEUE_DESCR);

        /* register some events used by nanos library */
        mintaka_index_event(NTH_EVENT_PARALLEL, NTH_EVENT_PARALLEL_DESCR);
        mintaka_index_event_value(NTH_EVENT_PARALLEL, 1, NTH_EVENT_PARALLEL_1_DESCR);
        mintaka_index_event_value(NTH_EVENT_PARALLEL, 2, NTH_EVENT_PARALLEL_2_DESCR);
        mintaka_index_event_value(NTH_EVENT_PARALLEL, 3, NTH_EVENT_PARALLEL_3_DESCR);

        mintaka_index_event(NTH_EVENT_WORKSHARING, NTH_EVENT_WORKSHARING_DESCR);
        mintaka_index_event_value(NTH_EVENT_WORKSHARING, 1, NTH_EVENT_WORKSHARING_1_DESCR);
        mintaka_index_event_value(NTH_EVENT_WORKSHARING, 2, NTH_EVENT_WORKSHARING_2_DESCR);
        mintaka_index_event_value(NTH_EVENT_WORKSHARING, 3, NTH_EVENT_WORKSHARING_3_DESCR);

        /* register some events used by nanos library */
        mintaka_index_event(NTH_EVENT_PROGRAM, NTH_EVENT_PROGRAM_DESCR);
        mintaka_index_event_value(NTH_EVENT_PROGRAM, 1, NTH_EVENT_PROGRAM_1_DESCR);

        mintaka_index_event(NTH_EVENT_CREATE, NTH_EVENT_CREATE_DESCR);
        mintaka_index_event_value(NTH_EVENT_CREATE, 1, NTH_EVENT_CREATE_1_DESCR);

        mintaka_index_event(NTH_EVENT_BLOCK, NTH_EVENT_BLOCK_DESCR);
        mintaka_index_event_value(NTH_EVENT_BLOCK, 1, NTH_EVENT_BLOCK_1_DESCR);

        mintaka_index_event(NTH_EVENT_TASK_BLOCK, NTH_EVENT_TASK_BLOCK_DESCR);
        mintaka_index_event_value(NTH_EVENT_TASK_BLOCK, 1, NTH_EVENT_TASK_BLOCK_1_DESCR);

        mintaka_index_event(NTH_EVENT_BARRIER, NTH_EVENT_BARRIER_DESCR);
        mintaka_index_event_value(NTH_EVENT_BARRIER, 1, NTH_EVENT_BARRIER_1_DESCR);

        mintaka_index_event(NTH_EVENT_YIELD, NTH_EVENT_YIELD_DESCR);
        mintaka_index_event_value(NTH_EVENT_YIELD, 1, NTH_EVENT_YIELD_1_DESCR);
#endif

	/* event registration (if needed) */
	mintaka_index_event(EVENT_NTH_CREATION,"Nano-thread creation");
	mintaka_index_event(EVENT_NTH_EXIT,"Nano-thread exit");
	mintaka_index_event(EVENT_TASK_CREATION,"Task creation");
	mintaka_index_event(EVENT_TASK_EXIT,"Task exit");
	mintaka_index_event(EVENT_TASK_INLINED,"Task was executed immediately");
	mintaka_index_event(EVENT_NTH_DEPTH,"Nano-thread depth");
	mintaka_index_event(EVENT_TASK_ID,"Executing nth id");
        mintaka_index_event(EVENT_USER_FUNCTION,"User function entry");
	mintaka_index_event(EVENT_NTH_SYNC,"Nth sync event");

	nth_instrument_in_runtime();
}

void nth_instrument_end ()
{
	mintaka_app_end();
	mintaka_merge();
	mintaka_index_generate();
}

void nth_instrument_thread_start ()
{
	mintaka_thread_begin(1,NTH_KTH+1);
	if ( NTH_KTH == 0 )
		mintaka_state_run();
	else
		mintaka_state_idle();

	mintaka_event(EVENT_TASK_ID,NTH_MYSELF->id);
	mintaka_event(EVENT_NTH_DEPTH,NTH_MYSELF->deep_level);
}

int nth_instrument_get_function_value (char *file, int line, char *name)
{
	if (!file) return 0;

	int value = mintaka_index_get(file,line);

	if ( value == -1) {
		nth_spin_lock(&mintaka_lock);
		value = mintaka_index_allocate2(file,line,name,EVENT_USER_FUNCTION);
		nth_spin_unlock(&mintaka_lock);
	}

	return value;
}


void nth_instrument_leave_cpu ( nth_desc_t *nth )
{
	mintaka_event(EVENT_TASK_ID,0);
	mintaka_event(EVENT_USER_FUNCTION,0);
	mintaka_event(EVENT_NTH_DEPTH,0);
	mintaka_send_and_state((mintaka_channel)nth,nth->id,RUNTIME_STATE);
}

void nth_instrument_enter_cpu ( nth_desc_t *to )
{
	int state = to->idle ? MINTAKA_STATE_IDLE : MINTAKA_STATE_RUN;

	mintaka_event(EVENT_TASK_ID,to->id);
	if ( to->task_ctx && to->task_ctx->instrument)
	mintaka_event(EVENT_USER_FUNCTION,
		to->task_ctx->instrument->ufunction_value);
	mintaka_event(EVENT_NTH_DEPTH,to->deep_level);
	mintaka_receive_and_state((mintaka_channel)to,to->id,state);
}

void nth_instrument_enter_idle ( nth_desc_t *nth )
{
	mintaka_state_idle();
}

void nth_instrument_leave_idle ( nth_desc_t *nth )
{
	mintaka_state_run();
}

void nth_instrument_create (nth_desc_t *nth)
{
	mintaka_event(nth->is_task ? EVENT_TASK_CREATION : EVENT_NTH_CREATION,
			 nth->id);
	mintaka_send_and_state((mintaka_channel)nth,nth->id,mintaka_get_state());
}

void nth_instrument_exit (nth_desc_t *nth)
{
	mintaka_event(nth->is_task ? EVENT_TASK_EXIT : EVENT_NTH_EXIT,
			 nth->id);
//	Sync with leave cpu
//	nth_instrument_leave_cpu(nth);
	mintaka_event(EVENT_TASK_ID,0);
	mintaka_event(EVENT_USER_FUNCTION,0);
	mintaka_event(EVENT_NTH_DEPTH,0);
	nth_instrument_in_runtime();
}

void nth_instrument_enter_immediate (nth_desc_t *nth)
{
	mintaka_event(EVENT_TASK_INLINED,1);
	if ( nth->deep_level < mintaka_max_level ) {
                if ( nth->task_ctx->parent_ctx &&
                    nth->task_ctx->parent_ctx->instrument )
	           mintaka_event(EVENT_USER_FUNCTION,0);
		mintaka_event(EVENT_NTH_DEPTH,nth->deep_level);
	}
	if ( nth->deep_level == mintaka_max_level ) {
		mintaka_set_state(NOTRACE_STATE);
	}
}

void nth_instrument_exit_immediate ( nth_desc_t *nth )
{
	if ( nth->deep_level == mintaka_max_level ) {
		mintaka_state_run();
	}

	if (nth->deep_level < mintaka_max_level ) {
		mintaka_event(EVENT_NTH_DEPTH,nth->deep_level-1);
                if ( nth->task_ctx->parent_ctx &&
                     nth->task_ctx->parent_ctx->instrument )
		   mintaka_event(EVENT_USER_FUNCTION,
		      nth->task_ctx->parent_ctx->instrument->ufunction_value);
		
	}
}

void nth_instrument_enter_taskwait ( nth_desc_t *nth )
{
	mintaka_event(EVENT_NTH_SYNC,NTH_SYNC_TASKWAIT);
}

void nth_instrument_leave_taskwait ( nth_desc_t *nth )
{
        mintaka_state_run();
}

void nth_instrument_enter_barrier ( nth_desc_t *nth )
{
	mintaka_event(EVENT_NTH_SYNC,NTH_SYNC_BARRIER);
}

void nth_instrument_leave_barrier ( nth_desc_t *nth )
{
        mintaka_state_run();
}

void nth_instrument_enter_block ( nth_desc_t *nth )
{
	mintaka_event(EVENT_NTH_SYNC,NTH_SYNC_BLOCK);
}

void nth_instrument_leave_block ( nth_desc_t *nth )
{
        mintaka_state_run();
}

void nth_instrument_enter_for ( nth_desc_t *nth )
{
/*
   mintaka_state_schedule();
*/
}

void nth_instrument_enter_create (nth_desc_t *nth)
{
/*

*/
}

void nth_instrument_leave_create (nth_desc_t *nth)
{
/*

*/
}

void nth_instrument_leave_for ( nth_desc_t *nth )
{
/*
   mintaka_state_run();
*/
}

void nth_instrument_enter_yield ( nth_desc_t *nth )
{
/*

*/
}

void nth_instrument_leave_yield ( nth_desc_t *nth )
{
/*

*/
}

void nth_instrument_push_ctx (nth_instrumentation_ctx *ctx,
	char *file, int line, char *name)
{
	nth_desc_t *myself = NTH_MYSELF;

	ctx->ufunction_value =
		nth_instrument_get_function_value(file,line,name);
	ctx->parent = myself->task_ctx->instrument;

	myself->task_ctx->instrument = ctx;

	mintaka_event(EVENT_USER_FUNCTION,
		myself->task_ctx->instrument->ufunction_value);
}

void nth_instrument_pop_ctx ()
{
	nth_desc_t *myself = NTH_MYSELF;

	myself->task_ctx->instrument = myself->task_ctx->instrument->parent;

	if (myself->task_ctx->instrument)
		mintaka_event(EVENT_USER_FUNCTION,
		  myself->task_ctx->instrument->ufunction_value);
	else if (myself->task_ctx->immediate &&
		myself->task_ctx->parent_ctx->instrument )
		mintaka_event(EVENT_USER_FUNCTION,
		   myself->task_ctx->parent_ctx->instrument->ufunction_value);
	else
		mintaka_event(EVENT_USER_FUNCTION,0);
	
}
