#include "main.h"

void print_triangle(int size)
{
  int i, j1, j2;

  if (size > 0)
  {
    for (i = 0; i < size; i++)
    {
      for (j1 = 0; j1 < (size - i - 1); j1++)
      {
        _putchar(' ');
      }
      for (j2 = 0; j2 < (i + 1); j2++)
      {
        _putchar('#');
      }
      _putchar('\n');
    }
  }
  else 
  {
    _putchar('\n');
  }
}
