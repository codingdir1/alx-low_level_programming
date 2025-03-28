#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
  int i;
  
  i = 0;
  printf("%d", a[i]);
 
  for (i = 1; i < n; i++)
  {
    printf(", %d", a[i]);
  }

  printf("\n");;
}
