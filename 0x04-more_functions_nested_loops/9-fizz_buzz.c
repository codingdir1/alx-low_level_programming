#include <stdio.h>

int main(void)
{
  int i;
  
  printf("%d", 1);
  for (i = 2; i <= 100; i++)
  {
    if ((i % 3 == 0) && (i % 5 == 0))
    {
      printf(" %s", "FizzBuzz");
    } else if (i % 3 == 0)
    {
      printf(" %s", "Fizz");
    } else if (i % 5 == 0)
    {
      printf(" %s", "Buzz");
    } else
    {
      printf(" %d", i);
    }
  }

  return 0;
}
