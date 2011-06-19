#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "/home/sho/src/gcc/libgomp/my_log.h"

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
  int N = atoi(argv[1]);

  #pragma omp parallel
  {
    #pragma omp single
    {
      laysakura_log("Start");
      printf("fib(%d) = %d\n", N, fib(N));
      laysakura_log("End");
    }
  }
  return 0;
}
