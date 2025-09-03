#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
  int i;
  unsigned int u, pos;
  unsigned long p;
  char *buffer, *bin, *oct, *hex;
  va_list ap;

  va_start(ap, format);

  buffer = malloc(sizeof(char) * 1024);
  *(buffer + 1023) = '\0';

  i = 0;
  pos = 0;
  while (*(format + i) != '\0')
  {
    if (*(format + i) == '%')
    {
      switch (*(format + i + 1))
      {
        case 'c':
  	  append_char(buffer, va_arg(ap, int), &pos);
	  break;
        case 's':
	  append_str(buffer, va_arg(ap, char *), &pos);
	  break;
	case 'S':
	  append_Str(buffer, va_arg(ap, char *), &pos);
	  break;
	case 'd':
	case 'i':
	  append_int(buffer, va_arg(ap, int), &pos);
	  break;
	case 'b':
	  bin = to_bin(va_arg(ap, int));
	  append_str(buffer, bin, &pos);
	  free(bin);
	  break;
	case 'o':
	  oct = to_oct(va_arg(ap, int));
	  append_str(buffer, oct, &pos);
	  free(oct);
	  break;
	case 'x':
	case 'X':
	  hex = to_hex(va_arg(ap, int), *(format + i + 1));
	  append_str(buffer, hex, &pos);
	  free(hex);
	  break;
	case 'p':
	  p = (unsigned long) va_arg(ap, void *);
	  hex = to_hex(p, 'x');
	  append_char(buffer, '0', &pos);
	  append_char(buffer, 'x', &pos);
	  append_str(buffer, hex, &pos);
	  free(hex);
	  break;
	case 'u':
	  u = (unsigned int) va_arg(ap, int);
	  append_unsigned(buffer, u, &pos);
	  break;
	case '%':
	  append_char(buffer, '%', &pos);
	  break;
      }
      i++;
    } else if (*(format + i) == '\\')
    {
      append_escape(buffer, *(format + i + 1), &pos);
    } else 
    {
      append_char(buffer, *(format + i), &pos);
    }
    i++;
  }
  *(buffer + pos) = '\0';

  va_end(ap);
  return print_buffer(buffer);
}