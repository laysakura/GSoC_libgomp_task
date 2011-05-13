#include "nth_sched.h"
#include "nth_taskdeps.h"
#include "nth_alloc.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/* Kinds of dependences:
	- RaR: can be ignored
	- RaW: needs to wait for write to complete
	- WaR: needs to wait for read to complete or use renaming if possible
	- WaW: needs to wait for write to complete or use renaming if possible
*/

/******* SS type dependences support ******/

void nth_taskdeps_init ()
{
}

void nth_task_deps_init (nth_taskdeps_t *deps)
{
	nth_spin_init(&deps->lock);
	deps->scope = NULL;
	deps->first_dep = NULL;
}

nth_outdep_t* nth_find_output_dep_in_task ( nth_task_ctx_t *ctx, void * addr )
{
	nth_outdep_t *outdep;

	for ( outdep = ctx->deps.first_dep; outdep ;
		outdep = outdep->next_in_task ) {

		if ( outdep->addr == addr && outdep->kind == NTH_OUT_DEP ) {
			 return outdep;
		}
	}

	return NULL;
}


nth_datadep_t* nth_find_dep_in_scope ( nth_task_ctx_t *ctx, void * addr )
{
	nth_datadep_t *dep;

	for ( dep = ctx->deps.scope; dep ;
		dep = dep->next_in_scope ) {

		if ( !dep->shadowed && dep->addr == addr ) {
			// TODO: increment here reference count?
			 return dep;
		}
	}

	return NULL;
}

nth_datadep_t* nth_find_output_dep_in_scope ( nth_task_ctx_t *ctx, void * addr )
{
	nth_datadep_t *dep;

	for ( dep = ctx->deps.scope; dep ;
		dep = dep->next_in_scope ) {

		//if ( !dep->shadowed && dep->addr == addr && dep->kind & NTH_OUT_DEP ) {
		if ( !dep->shadowed && dep->addr == addr ) {
			// TODO: increment here reference count?
			 return dep;
		}
	}

	return NULL;
}

void nth_shadow_output_dep (nth_task_ctx_t *scope, void *addr)
{
	nth_outdep_t* outdep = nth_find_output_dep_in_scope (scope, addr);
	if (outdep) outdep->shadowed = 1;
}

static inline void nth_add_dep_to_task (
		nth_task_ctx_t *scope, nth_task_ctx_t *task,
		nth_datadep_t *dep,
		nth_datadep_t *connect,
		void *addr, int size, intptr_t adj,
		void **data_ptr)
{
	dep->addr = addr;
	dep->shadowed = 0;
	dep->ready = 0;
	dep->size = size;
	dep->adjustment = adj;
	dep->next_in_task = 0;
	dep->first_connect = 0;
	dep->scope = &scope->deps;
	dep->task = task;
	dep->data_ptr = data_ptr;
	nth_spin_init(&dep->lock);

	if (connect) {
		nth_atm_add(&task->nthread->ndep, 1); 
		// link it to previous dep
		dep->connected_to = connect;
		dep->next_in_connlist = connect->first_connect;
		connect->first_connect = dep;
	}

	// link it to scope
	dep->next_in_scope = scope->deps.scope;
	dep->prev_in_scope = 0;
	if ( scope->deps.scope )
		scope->deps.scope->prev_in_scope = dep;
	scope->deps.scope = dep;

	// link it to task
	dep->next_in_task = task->deps.first_dep;
	task->deps.first_dep = dep;
}

nth_outdep_t* nth_add_output_to_task (nth_task_ctx_t *scope,
			nth_task_ctx_t *task, nth_datadep_t *outdep,
			void *addr, int size, intptr_t adj,
			void **data_ptr)
{
	nth_datadep_t *connect;

	// allocate new one if needed
	if (!outdep) {
		outdep = (nth_datadep_t *)nth_alloc(sizeof(nth_outdep_t),TASK_MEM);
		outdep->allocated = 1;
	} else
		outdep->allocated = 0;

	connect = nth_find_dep_in_scope(scope,addr);
// 	if (!connect) {
// 		// no previous input or output... do nothing
// 		return NULL;
// 	}

	outdep->kind = NTH_OUT_DEP;

	if (connect) {
		connect->shadowed = 1;
		nth_spin_lock(&connect->lock);
		// check if not ready
		if (connect->ready) {
/*			// abort.. output already finished
			printf("Aborting output\n");
			goto abort_and_return;*/
			connect = 0;
		}
	}

	//TODO: move things out of critical region?
	nth_add_dep_to_task(scope,task,outdep,connect,addr,size,adj,data_ptr);

	if (connect)
		nth_spin_unlock(&connect->lock);

	return outdep;

abort_and_return:
	nth_spin_unlock(&connect->lock);
	if (outdep->allocated)
		nth_free(outdep);

	return NULL;	
}

nth_datadep_t *nth_add_input_to_task (nth_task_ctx_t *scope, nth_task_ctx_t *task, 				nth_datadep_t *indep,
			nth_datadep_t *connect,
			void *addr, int size, intptr_t adj,
			void **data_ptr)
{
	nth_datadep_t *out;

	if ( connect && connect->kind & NTH_IN_DEP ) {
		connect->shadowed = 1; // the new input is the last one...
		connect = connect->connected_to;		
		assert(!connect || connect->kind == NTH_OUT_DEP);
	}

	if (!indep) {
		indep = nth_alloc(sizeof(nth_indep_t),TASK_MEM);
		indep->allocated = 1;
	} else
		indep->allocated = 0;

	indep->kind = NTH_IN_DEP;

	out = nth_find_output_dep_in_task(task,addr);

	if (connect) {
		connect->shadowed = 1;
		nth_spin_lock(&connect->lock);
		if (connect->ready) {
			connect = 0;
			printf("Aborting input\n");
		}
	}

	nth_add_dep_to_task(scope,task,indep,connect,addr,size,adj,data_ptr);
	if (out) indep->shadowed = 1;

	if (connect)
		nth_spin_unlock(&connect->lock);

	return indep;

abort_and_return:
	nth_spin_unlock(&connect->lock);
	if (indep->allocated)
		nth_free(indep);

	return NULL;	
}

void nth_task_flush_scope ( nth_task_ctx_t *scope )
{
	nth_datadep_t *dep,*dep_next;

	for ( dep = scope->deps.scope; dep ; dep = dep_next )
	{
		dep_next = dep->next_in_scope;

		if (dep->allocated)
			nth_free(dep);
	}
	scope->deps.scope=NULL;
}

// nth_satisfy_input_dep should be called from the immediate path
// It'll block the current nano-thread until the output is generated and force a writeback to main memory
// Because it's executed immediately no other tasks with inputs/outputs can be created before this one finishes

void nth_satisfy_input_dep (nth_task_ctx_t *scope, nth_task_ctx_t *task, nth_indep_t *indep,
			nth_outdep_t *connect, void *addr, int size, intptr_t adj)
{
	if (!connect) return;
	if (connect->kind == NTH_IN_DEP) {
		connect = connect->connected_to;
		if (!connect) return;
	}

	indep = nth_add_input_to_task(scope,task,indep,connect,addr,size,adj,0);
	if (!indep) return; 

	nth_block();
}

void nth_task_flush_deps ( nth_task_ctx_t *task )
{
	nth_datadep_t *dep,*dep_next;
	nth_datadep_t *connect, *connect_next;

	for ( dep = task->deps.first_dep; dep; dep = dep_next ) {
		

		nth_spin_lock(&dep->lock);
		// ensure no dep is connected after this point
		dep->shadowed = 1;
		dep->ready = 1;
		nth_spin_unlock(&dep->lock);

		for ( connect = dep->first_connect; connect; connect = connect_next)
		{
			nth_desc_depsub(connect->task->nthread,1);
			connect_next = connect->next_in_connlist;
		}

		dep_next = dep->next_in_task;
	}

	nth_task_flush_scope(task);
}

#if 0
nth_outdep_t* nth_find_output_dep_in_scope ( nth_task_ctx_t *ctx, void * addr )
{
	nth_outdep_t *outdep;

	for ( outdep = ctx->deps.scope; outdep ;
		outdep = outdep->next_in_scope ) {

		if ( !outdep->shadowed && outdep->addr == addr ) {
			// TODO: increment here reference count?
			 return outdep;
		}
	}

	return NULL;
}

nth_outdep_t* nth_find_output_dep_in_task ( nth_task_ctx_t *ctx, void * addr )
{
	nth_outdep_t *outdep;

	for ( outdep = ctx->deps.first_output; outdep ;
		outdep = outdep->next_in_task ) {

		if ( outdep->addr == addr ) {
			 return outdep;
		}
	}

	return NULL;
}

nth_outdep_t* nth_find_output_dep ( void * addr )
{
	nth_task_ctx_t *self = NTH_MYSELF->task_ctx;
	return nth_find_output_dep_in_scope(self,addr);
}

void nth_shadow_output_dep (nth_task_ctx_t *scope, void *addr)
{
	nth_outdep_t* outdep = nth_find_output_dep_in_scope (scope, addr);
	if (outdep) outdep->shadowed = 1;
}

#define ADJ_ADDR(base,adjustment) ((void *)(((intptr_t)(base))-adjustment))

nth_outdep_t* nth_add_output_to_task (nth_task_ctx_t *scope, nth_task_ctx_t *task, nth_outdep_t *outdep,
			void *addr, int size, intptr_t adj,
			void **data_ptr)
{	
	// look for previous one
	nth_shadow_output_dep (scope,addr);

	// allocate new one if needed
	if (!outdep) {
		outdep = (nth_outdep_t *) nth_alloc(sizeof(nth_outdep_t)+size,TASK_MEM);
		outdep->allocated = 1;
	} else
		outdep->allocated = 0;

	void * buffer = outdep+1;

	outdep->addr = addr;
	outdep->refs = 0;
	outdep->shadowed = 0;
	outdep->size = size;
	outdep->adjustment = adj;
	outdep->next_in_task = 0;
	outdep->first_input = 0;
	outdep->force_wb = 0;
	outdep->parent = &scope->deps;
	outdep->ready = 0;

#ifdef RENAME
	//TODO: avoid copy if inout... or even in all cases?
	memcpy(buffer,addr, size);
	// renaming
	(*data_ptr) = ADJ_ADDR(buffer,adj);
#endif

	// link it to scope
	nth_spin_lock(&scope->deps.lock);
	outdep->next_in_scope = scope->deps.scope;
	outdep->prev_in_scope = 0;
	if ( scope->deps.scope )
		scope->deps.scope->prev_in_scope = outdep;
	scope->deps.scope = outdep;
	nth_spin_unlock(&scope->deps.lock);

	// link it to task
	outdep->next_in_task = task->deps.first_output;
	task->deps.first_output = outdep;

	return outdep;
}


nth_indep_t *nth_add_input_to_task (nth_task_ctx_t *scope, nth_task_ctx_t *task, nth_indep_t *indep,
			nth_outdep_t *connect,
			void *addr, int size, intptr_t adj,
			void **data_ptr)
{
	nth_outdep_t *inout;

	if (!connect) {
		/* no output... do nothing */
		return 0;
	}

	if (!indep) {
		indep = nth_alloc(sizeof(nth_indep_t),TASK_MEM);
		indep->allocated = 1;
	} else
		indep->allocated = 0;

	indep->task = task->nthread;
	indep->data_ptr = data_ptr;

	// Connect it to previous output
	indep->connect = connect;
	nth_atm_add(&connect->refs,1);
	indep->next_in_dep = connect->first_input;
	connect->first_input = indep;

	inout = nth_find_output_dep_in_task(task,addr);
	indep->inout = inout; // is this an inout dependence?

	/* Because this is done only from the parent task
	   it can be done without a lock */
	indep->next_in_task = task->deps.first_input;
	task->deps.first_input = indep;

	if (!connect->ready)
		nth_atm_add(&task->nthread->ndep, 1); // TODO: change counter?
	else {
#ifdef RENAME
		if ( indep->inout ) {
			memcpy(indep->inout+1,connect+1,connect->size);
		} else {
			// if there was a writeback, don't use rename buffer in input tasks
			if ( !connect->force_wb && indep->data_ptr)
				*(indep->data_ptr) = ADJ_ADDR(connect+1,connect->adjustment);
		}
#endif
	}

	return indep;
}

// nth_satisfy_input_dep should be called from the immediate path
// It'll block the current nano-thread until the output is generated and force a writeback to main memory
// Because it's executed immediately no other tasks with inputs/outputs can be created before this one finishes

void nth_satisfy_input_dep (nth_task_ctx_t *scope, nth_task_ctx_t *task, nth_indep_t *indep,
			nth_outdep_t *connect, void *addr, int size, intptr_t adj)
{	
	nth_outdep_t *inout;

	indep = nth_add_input_to_task(scope,task,indep,connect,addr,size,adj,0);
	if (!indep) return; 

	if (!indep->connect->ready) {
		indep->connect->force_wb = 1;
		nth_block();
	} else {
#ifdef RENAME
		memcpy(indep->connect->addr,indep->connect+1,indep->connect->size);
#endif
		indep->connect->shadowed = 1;
	}
}


void nth_task_flush_scope ( nth_task_ctx_t *scope )
{
	nth_outdep_t *outdep,*outdep_next;

	// traverse outputs
	// do pendent writebacks and free outdeps of the scope
	for ( outdep = scope->deps.scope; outdep ; outdep = outdep_next )
	{
#ifdef RENAME
		// writeback
		if (!outdep->shadowed)
			memcpy(outdep->addr,outdep+1,outdep->size);
#endif
		outdep_next = outdep->next_in_scope;

		if (outdep->allocated)
			nth_free(outdep);
	}
	scope->deps.scope=NULL;
}

void nth_task_flush_deps ( nth_task_ctx_t *desc )
{
	nth_indep_t *indep, *indep_next;
	nth_outdep_t *outdep,*outdep_next;

	nth_task_flush_scope(desc);

	// notify completed outputs
	for ( outdep = desc->deps.first_output; outdep; outdep = outdep->next_in_task )
	{

		if ( outdep->force_wb ) {
#ifdef RENAME
			memcpy(outdep->addr,outdep+1,outdep->size);
#endif
			outdep->shadowed = 1;
		}
		outdep->ready = 1;

		for ( indep = outdep->first_input; indep ; indep = indep_next )
		{
#ifdef RENAME
			// if is an inout dep it has already an output buffer
			if ( indep->inout ) {
				memcpy(indep->inout+1,outdep+1,outdep->size);
			} else {
				// if there was a writeback, don't use rename buffer in input tasks
				if ( !outdep->force_wb && indep->data_ptr)
					*(indep->data_ptr) = ADJ_ADDR(outdep+1,outdep->adjustment);
			}
#endif
			indep_next = indep->next_in_dep; // indep can be freed before we move to next element
			nth_desc_depsub(indep->task,1); // TODO: change counter?
		}
	}

#if 0
		if (!outdep->first_input && outdep->parent) {
			//TODO: lock
			nth_spin_lock(&outdep->parent->lock);
			if (outdep->prev_in_scope) {
				outdep->prev_in_scope->next_in_scope = outdep->next_in_scope;
			} else {
				outdep->parent->scope = outdep->next_in_scope;
			}
			if ( outdep->next_in_scope )
				outdep->next_in_scope->prev_in_scope = outdep->prev_in_scope;
			nth_spin_unlock(&outdep->parent->lock);

			if (!outdep->shadowed)
				memcpy(outdep->addr,outdep+1,outdep->size);

			nth_free(outdep);
		}
#endif

	// traverse inputs
	// free renaming buffers
	for ( indep = desc->deps.first_input; indep ; indep = indep_next )
	{
#if 0
		int x = nth_atm_add(&indep->outdep->refs,-1);

		if ( x == 1 && indep->outdep->shadowed ) {
			//TODO: unlink outdep it from task and scope
			nth_free(indep->outdep);
		}
#endif

		indep_next = indep->next_in_task;
		if (indep->allocated) {
			nth_free(indep);
		}
	}
}

#endif