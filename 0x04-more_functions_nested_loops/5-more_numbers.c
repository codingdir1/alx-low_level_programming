#include "main.h"

void more_numbers(void)
{
  int i, j;

  for (i = 0; i < 10; i++)
  {
    for (j = 1; j <= 14; j++)
    {
      if (j >= 10)
      {
        _putchar('1');
      }
      _putchar((j % 10) + '0');
    }
    _putchar('\n');
  }
}
