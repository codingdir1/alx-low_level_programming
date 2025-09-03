#include "main.h"

void append_int(char *buffer, int n, unsigned int *pos_addr)
{
  int digits, digit;

  if (n < 0)
  {
    append_char(buffer, '-', pos_addr);
    n *= -1;
  }
  digits = 10;
  while (n / digits >= 1)
  {
    digits *= 10;
  }
  
  while (digits > 10)
  {
    digit = n / (digits / 10);
    append_char(buffer, digit + 48, pos_addr);
    n -= digit * (digits / 10);
    digits /= 10;
  }
  append_char(buffer, n + 48, pos_addr);
}