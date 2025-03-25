#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
  int n, lastDigit;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  lastDigit = n;
  
  while(lastDigit >= 10 || lastDigit <= -10)
  {
    int digits = (int) (log10(abs(lastDigit)));
    lastDigit = lastDigit % ((int) pow(10, digits));
  }

  if (lastDigit > 5)
  {
    printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
  } else if (lastDigit == 0)
  {
    printf("Last digit of %i is %i and is 0\n", n, lastDigit); 
  } else if (lastDigit < 6 && lastDigit != 0)
  {
    printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit); 
  }
  return 0;
}
