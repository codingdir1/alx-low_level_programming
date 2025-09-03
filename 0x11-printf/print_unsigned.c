#include "main.h"

void append_unsigned(char *buffer, unsigned int u, unsigned int *pos_addr)
{
  int digits, digit;

  digits = 10;
  while (u / digits >= 1)
  {
    digits *= 10;
  }
  
  while (digits > 10)
  {
    digit = u / (digits / 10);
    append_char(buffer, digit + 48, pos_addr);
    u -= digit * (digits / 10);
    digits /= 10;
  }
  append_char(buffer, u + 48, pos_addr);
}