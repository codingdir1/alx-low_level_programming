#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list ap;
  unsigned int i;
  char *s;

  va_start(ap, n);
  
  i = 0;
  while (i < n)
  {
    s = va_arg(ap, char*);
    if (s == NULL)
    {
      printf("(nil)");
    } else
    {
      printf("%s", s);
    }

    if (separator != NULL && i < n - 1)
    {
      printf("%s", separator);
    }
    i++;
  }
  printf("\n");
}
