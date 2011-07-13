#ifndef _GSOC_TIME_H_
#define _GSOC_TIME_H_


#include <time.h>
#include <sys/time.h>

static inline double
gettimeofday_sec()
{
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return tv.tv_sec + (double)tv.tv_usec*1e-6;
}


#endif /* _GSOC_TIME_H_ */
