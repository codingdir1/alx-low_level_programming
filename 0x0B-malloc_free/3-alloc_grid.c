#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
  int **grid, i;

  if (width <= 0 || height <= 0)
  {
    return NULL;
  }

  grid = malloc(sizeof(int*) * height);
  for (i = 0; i < height; i++)
  {
    *(grid + i) = malloc(sizeof(int) * width);
    if (*(grid + i) == NULL)
    {
      return NULL;
    }
  }
  return grid;
}
