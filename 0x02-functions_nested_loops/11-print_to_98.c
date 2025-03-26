#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
  while (n != 98){
    int tmp = n >= 0 ? n : (-1 * n); 
    int digits = 1;
    if (n < 0)
    {
      _putchar('-');
    }
    while (tmp >= 10)
    {
      tmp /= 10;
      digits *= 10;
    }
    tmp = n >= 0 ? n : (-1 * n);
    while (digits >= 10)
    { 
      int digit = (tmp -(tmp % digits)) / digits;
      _putchar(digit + '0');
      tmp = tmp % digits;
      digits /= 10;
    }

     
    _putchar(tmp + '0');
    _putchar(',');
    _putchar(' ');
    n = (n > 98) ? (n - 1) : (n + 1);
  }
  _putchar('9');
  _putchar('8');
  _putchar('\n');
}
