#include "gsoc_worker.h"
#include <time.h>
#include <stdlib.h>

unsigned int
gsoc_worker_choose_victim(unsigned int criminal, unsigned int num_workers)
{
  static unsigned int seed = 0;  /* rand_r() changes this value */
  unsigned int victim;

  if (seed == 0)
    seed = (unsigned int)time(NULL);

  do
    victim = (int)(rand_r(&seed) * (double)num_workers / (1.0 + RAND_MAX)); /* Mayby using Xorshift(google) is better
                                                                               rather than rand_r() */
  while (victim == criminal);

  return victim;
}

