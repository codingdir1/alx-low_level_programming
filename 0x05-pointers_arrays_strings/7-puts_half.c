#include "main.h"

void puts_half(char *str)
{
  int length, i;

  length = 0;
  while (*(str + length) != '\0')
  {
    length++;
  }

  for (i = length / 2; i < length; i++)
  {
    _putchar(*(str + i));
  }
  _putchar('\n');
}
