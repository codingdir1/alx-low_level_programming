#include "main.h"

int _strlen_recursion(char *s)
{
  if (*s == '\0')
  {
    return 0;
  } else if (*(s + 1) == '\0')
  {
    return 1;
  }

  return 1 + _strlen_recursion(s + 1);
}
