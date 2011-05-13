#ifndef NTHMD_TIMER_H
#define NTHMD_TIMER_H

#include <stdint.h>

typedef uint64_t nth_time_t;

static inline nth_time_t get_hwtime ()
{
   uint32_t lo, hi;
   /* We cannot use "=A", since this would use %rax on x86_64 */
   __asm__ __volatile__ ("rdtsc" : "=a" (lo), "=d" (hi));
    return (((uint64_t) hi) << 32) | lo;
}

#define get_wtime get_hwtime

#endif
