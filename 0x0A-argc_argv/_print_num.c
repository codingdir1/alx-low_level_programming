#include "main.h"

void _print_num(int n)
{
  int digits, tmp, digit;
  
  tmp = n;
  digits = 1;
  while (tmp >= 10)
  {
    digits *= 10;
    tmp /= 10;
  }

  while (n >= 10)
  {
    digit = n / digits;
    n -= digit * digits;
    _putchar(digit + '0');
  }
  _putchar(n + '0');
  _putchar('\n');
}
