#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
  unsigned int i;
  va_list ap;
  char *s;
  int n, c;
  double f;

  va_start(ap, format);

  i = 0;
  while (*(format + i) != '\0')
  {
    switch (*(format + i))
    {
      case 'c':
        c = va_arg(ap, int);
	printf("%c", c);
	break;		
      case 'i':
	n = va_arg(ap, int);
	printf("%d", n);
	break;		
      case 'f':
	f = va_arg(ap, double);
	printf("%f", f);
	break;		
      case 's':
	s = va_arg(ap, char*);
        if (s == NULL)
	{
	  printf("(nil)");
	  break;
	}
	printf("%s", s);
        break;
      }
      i++;
      if (*(format + i) != '\0' &&
      (*(format + i - 1) == 'c' ||
      *(format + i - 1) == 'i' ||
      *(format + i - 1) == 'f' ||
      *(format + i - 1) == 's'))
      {
        printf(", ");
      } 
  }

  va_end(ap);
  printf("\n");
}
