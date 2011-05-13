#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
#include <sys/time.h>

double
gettimeofday_sec()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec + (double)tv.tv_usec*1e-6;
}

int pusedo_fib(N)
{
  int r1, r2;

  if (N < 1)
    return N + 1;

#pragma omp task shared(r1) firstprivate(N)
  r1 = pusedo_fib(N-1);

#pragma omp task shared(r2) firstprivate(N)
  r2 = pusedo_fib(N-1);

#pragma omp taskwait
  return r1 + r2;
}

int main(int argc, char** argv)
{
  int N;
  double t1, t2;
  int res;

  if (argc != 2) {
    fprintf(stderr, "ARGS: N\n");
    exit(1);
  }

  N = atoi(argv[1]);
  t1 = gettimeofday_sec();
#pragma omp parallel shared(N)
  {
#pragma omp single
    {
      res = pusedo_fib(N);
    }
  }
  t2 = gettimeofday_sec();

  printf("%.8f\n", t2 - t1);
  printf("pusedo_fib(%d) = %d\n", N, res);

  return 0;
}
