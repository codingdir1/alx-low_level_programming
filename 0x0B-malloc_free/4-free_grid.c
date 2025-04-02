#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
  int i;
  for (i = height - 1; i >= 0; i--)
  {
   free(*(grid + i));
  }
  free(grid);
}
