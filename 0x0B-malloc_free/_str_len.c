#include "main.h"

int _str_len(char *s)
{
  int len;

  len = 0;
  while (*(s + len) != '\0')
  {
    len++;
  }
  return len + 1;
}
