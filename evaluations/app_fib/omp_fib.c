#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "../../my_data_structures/gsoc_time.h"

int fib(int n)
{
  int f1, f2;

  if (n <= 1) return n;

  #pragma omp task shared(f1) firstprivate(n)
  f1 = fib(n-1);

  #pragma omp task shared(f2) firstprivate(n)
  f2 = fib(n-2);

  #pragma omp taskwait

  return f1 + f2;
}

int main(int argc, char** argv)
{
  double t1, t2;
  int N = atoi(argv[1]);
  int result;

  #pragma omp parallel
  {
    #pragma omp single
    {
      t1 = gettimeofday_sec();
      result = fib(N);
      t2 = gettimeofday_sec();
      fprintf(stdout, "fib(%d):%d\n", N, result);
      fprintf(stdout, "exectime:%f\n", t2 - t1);
    }
  }
  return 0;
}
