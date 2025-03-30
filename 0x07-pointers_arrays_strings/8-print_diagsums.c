#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
  int sum1, sum2;
  int i;

  sum1 = 0;
  sum2 = 0;

  for (i = 0; i < size; i++)
  {
    int j;

    for (j = 0; j < size; j++)
    {
      if (i == j)
      {
        sum1 += *(a + (size * i) + j);
      }
      if (i + j == size - 1)
      {
        sum2 += *(a + (size * i) + j); 
      }
    }
  }
  printf("%d, %d\n", sum1, sum2);
}
