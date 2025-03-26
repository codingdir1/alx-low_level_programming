#include <stdio.h>

int main(void)
{
  long int n1 = 1, n2 = 2, fib;
  int i = 0;
  printf("1, 2");
  while (i < 96)
  {
    fib = n1 + n2;
    printf(", %ld", fib);
    n1 = n2;
    n2 = fib;
    i++;
  }
  return 0;
}
