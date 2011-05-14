/*
 * MassiveThreads prototype
 * Since 2009/11 by Jun Nakashima under BSD License
 *
 */
#include "myth_misc.h"

#define _GNU_SOURCE
#ifdef MYTH_FLMALLOC_TLS
__thread void **g_myth_freelist;
#else
void ***g_myth_freelist;
#endif

__thread unsigned int g_myth_random_temp=0;

__thread uint64_t g_myth_flmalloc_cycles=0,g_myth_flmalloc_cnt=0;
__thread uint64_t g_myth_flfree_cycles=0,g_myth_flfree_cnt=0;
