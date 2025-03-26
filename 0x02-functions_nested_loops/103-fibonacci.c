#include <stdio.h>

int main(void)
{
  long int n1 = 1, n2 = 2; 
  long int fib, sum = 2;
  do 
  {
    fib = n1 + n2;
    if (fib % 2 == 0)
    {
      sum += fib;
    }
    n1 = n2;
    n2 = fib;
  } while (n1 + n2 < 4000000);
  printf("%ld\n", sum);
  return 0;
}
