#ifndef _GSOC_ENV_H_
#define _GSOC_ENV_H_


#include <stdlib.h>
#include <unistd.h>


#define GSOC_DEFAULT_CUTOFF_DEPTH 4


static inline unsigned int
gsoc_get_num_workers()
{
  char* env = getenv("OMP_NUM_THREADS");
  return env ? atoi(env) : sysconf(_SC_NPROCESSORS_CONF);
}

static inline unsigned int
gsoc_get_cutoff_depth()
{
  char* env = getenv("GSOC_CUTOFF_DEPTH");
  return env ? atoi(env) : GSOC_DEFAULT_CUTOFF_DEPTH;
}


#endif /* _GSOC_ENV_H_ */
