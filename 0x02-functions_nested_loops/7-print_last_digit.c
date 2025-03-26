#include "main.h"

int print_last_digit(int n)
{

  int lastDigit = n = (n > 0) ? n : (-1 * n);
  int digits = 1;

  while (n >= 10)
  {
    n /= 10;
    digits *= 10;
  }
  while (lastDigit >= 10)
  {
    lastDigit = lastDigit % digits;
    digits /= 10;
  }
  _putchar(lastDigit + '0');

  return lastDigit;
}
