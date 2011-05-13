#ifndef NTHMD_TIMER_H
#define NTHMD_TIMER_H

typedef unsigned long nth_time_t;

static inline nth_time_t get_hwtime ()
{
	return 0;
}

/* #define to use inline above */
/*#define get_wtime get_hwtime*/

#endif

