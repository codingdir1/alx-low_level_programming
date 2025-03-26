#include <stdio.h>

int main(void)
{
  long int n1 = 0, n2 = 1; 
  int i = 0;
  printf("%ld, ", (n1 + n2));
  while (i < 48)
  {
    long int tmp;
    printf("%ld, ", (n1 + n2));
    tmp = n2;
    n2 += n1;
    n1 = tmp;
    i++;
  }
  printf("%ld\n", (n1 + n2));
  return 0;
}
