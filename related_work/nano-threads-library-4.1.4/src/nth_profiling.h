#ifndef NTH_PROFILING_H
#define NTH_PROFILING_H

#include "nth_config.h"
#include "nthmd_clock.h"
#include "nth_spin.h"

typedef struct {
	// private
	union {
		struct {
			int active;
			nth_time_t  	partial_time;
			nth_time_t	level_time;
			nth_time_t	total_time;
			int estimate;
		} d;
		l2cacheline dummy[3];
	} p;
	// shared
	union {
		struct {
			nth_spin_t	lock;
			nth_time_t	tree_time;
		} d;
		l2cacheline dummy;
	} s;
} nth_profile_data_t;

void nth_init_profile ( nth_profile_data_t *);

// forward declarations
struct nth_task_ctx_t;
struct nth_desc_t;

void profile_init ();
void profile_cleanup ();
void profile_activate (char *mode);

int profile_exectime_start ( struct nth_task_ctx_t * desc );
int profile_exectime_stop ( struct nth_task_ctx_t * desc);
void profile_exectime_sample ( struct nth_task_ctx_t * desc );

void profile_task_finished ( struct nth_task_ctx_t * desc );
void profile_task_enter_level ( struct nth_task_ctx_t *desc );
void profile_task_exit_level ( struct nth_task_ctx_t *desc );

void profile_estime_task_size ( int level, nth_time_t * );
int profile_estimate_success_rate (int level);

typedef void (*profile_level_hook) (int level);
void profile_set_close_level_hook (profile_level_hook hook);

// generic clock interface
#ifndef get_wtime
#define get_wtime get_wtime_slow
#define slow_wtime
#endif

#endif
