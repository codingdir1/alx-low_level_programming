#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
  va_list ap;
  unsigned int i;

  va_start(ap, n);

  i = 0;
  while (i < n)
  {
    print_number(va_arg(ap, int));
    if (i < n - 1)
    {
    print_separator(separator);
    }
    i++;
  }
  _putchar('\n');
}

void print_number(int n)
{
  int digits = 10, digit;
  
  if (n < 0)
  {
    n *= -1;
    _putchar('-');
  }

  while (n / digits >= 10)
  {
    digits *= 10;
  }

  if (n == 0)
  {
    _putchar('0');
  } else
  {
    while (digits >= 1)
    {
      digit = (n - (n % digits)) / digits;
      _putchar(digit + '0');
      n = n % digits;
      digits /= 10;
  
    }
  }
}

void print_separator(const char *separator)
{
  int i;

  i = 0;
  while (*(separator + i) != '\0')
  {
    _putchar(*(separator + i));
    i++;
  }
}
