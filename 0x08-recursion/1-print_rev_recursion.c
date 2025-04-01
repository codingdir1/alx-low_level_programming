#include "main.h"

void _print_rev_recursion(char *s)
{
  if (*s == '\0')
  {
    _putchar(0);
  } else if (*(s + 1) == '\0')
  {
    _putchar(*s);
  } else
  {
    _print_rev_recursion(s + 1);
    _putchar(*s);
  }
}
