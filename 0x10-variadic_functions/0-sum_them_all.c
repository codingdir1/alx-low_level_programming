#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
  va_list ap;
  int sum;
  unsigned int i;

  va_start(ap, n);

  sum = 0;
  i = 0;
  if (n > 0)
  {
    while (i < n)
    {
      sum += va_arg(ap, int);
      i++;
    }
  }
  va_end(ap);
  return sum;
}
