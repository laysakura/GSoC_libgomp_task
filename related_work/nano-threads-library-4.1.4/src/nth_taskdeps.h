#ifndef NTH_TASKDEP_H
#define NTH_TASKDEP_H

#include "nth_spin.h"
#include <stdint.h>

/******* SS type dependences support ******/

struct nth_indep;
struct nth_desc_t;
struct nth_task_ctx_t;
struct nth_taskdeps;


typedef enum {NTH_IN_DEP=1, NTH_OUT_DEP=2, NTH_INOUT_DEP=3} nth_dep_kind_t;

struct nth_datadep
{
	nth_dep_kind_t 		kind;

	void *			addr;
	intptr_t 		adjustment;
	int 			size;
	void **			data_ptr;

	/* bits */
	volatile int 		shadowed;
	volatile int		ready;

	int allocated:1;

	struct nth_task_ctx_t *	task;

	struct nth_datadep *	connected_to;

	struct nth_datadep *	next_in_scope;
	struct nth_datadep *	prev_in_scope;

	struct nth_datadep *	next_in_task;

	struct nth_datadep *	first_connect;
	struct nth_datadep *	next_in_connlist;

	struct nth_taskdeps *	scope;

	nth_spin_t		lock;
};

#if 0
struct nth_outdep {
	void * addr;
	int size;
	intptr_t adjustment;
	int refs;
	int shadowed:1;
	int allocated:1;
	int force_wb:1;
	int ready:1;
	struct nth_outdep *next_in_scope;
	struct nth_outdep *prev_in_scope;
	struct nth_outdep *next_in_task;
	struct nth_indep  *first_input;
	struct nth_taskdeps *parent;
};

struct nth_indep {
	int allocated:1;

	struct nth_desc_t *task;
	struct nth_indep *next_in_dep;
	struct nth_indep *next_in_task;
	struct nth_outdep *connect; // where comes data from
	struct nth_outdep *inout; // is an inout dep?

	void **data_ptr;
};
#endif

typedef struct nth_datadep nth_datadep_t;

// backward compatibility
typedef struct nth_datadep nth_indep_t;
typedef struct nth_datadep nth_outdep_t;

struct nth_taskdeps {
	nth_spin_t    lock;
	nth_datadep_t *scope;
	nth_datadep_t *first_dep;
};

typedef struct nth_taskdeps nth_taskdeps_t;

void nth_task_deps_init (nth_taskdeps_t *deps);
nth_outdep_t* nth_find_output_dep_in_scope ( struct nth_task_ctx_t *ctx, void * addr );

nth_outdep_t* nth_add_output_to_task (struct nth_task_ctx_t *scope, struct nth_task_ctx_t *task, nth_outdep_t *outdep,
			void *addr, int size, intptr_t adj,
			void **data_ptr);
nth_indep_t* nth_add_input_to_task (struct nth_task_ctx_t *scope, struct nth_task_ctx_t *task, nth_indep_t *indep,
			nth_outdep_t *connect,
			void *addr, int size,  intptr_t adj,
			void **data_ptr);

void nth_shadow_output_dep (struct nth_task_ctx_t *scope, void *addr);
void nth_satisfy_input_dep (struct nth_task_ctx_t *scope, struct nth_task_ctx_t *task, nth_indep_t *indep,
			nth_outdep_t *connect, void *addr, int size, intptr_t adj);


#define nth_get_rename_buffer(outdep) ((void *)((outdep)+1))

#endif
