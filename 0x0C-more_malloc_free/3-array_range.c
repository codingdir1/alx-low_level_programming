#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
  unsigned int len;
  int *array, i;

  if (min > max)
  {
    return NULL;
  }

  len = max - min + 1;
  array = malloc(sizeof(int) * len);
  
  if (array == NULL)
  {
    return NULL;
  }

  for (i = min; i <= max; i++)
  {
    *(array + (i - min)) = i;
  }

  return array;
}
