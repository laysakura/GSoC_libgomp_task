#ifndef NTHMD_TIMER_H
#define NTHMD_TIMER_H

//typedef unsigned long long nth_time_t;
typedef  double nth_time_t;

#ifdef NTH_INTERNALS


static inline nth_time_t get_hwtime ()
{
	nth_time_t time;
	asm volatile ("mov %0=ar.itc" : "=r" (time));

	return time;
}

#define get_wtime get_hwtime

#endif

#endif
