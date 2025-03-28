#include "main.h"

void print_diagonal(int n)
{
  int i, j;

  for (i = n; i > 0; i--)
  {
    for (j = 0; j < (n - i + 1); j++)
    {
      _putchar(' ');
    }
    _putchar('\\');
    if (i > 1)
    {
    _putchar('\n');
    }
  }
  _putchar('\n');
}
