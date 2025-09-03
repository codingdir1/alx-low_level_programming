#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i, j;
  char *new_str;

  if (n > _str_len(s2))
  {
    n = _str_len(s2);
  }

  new_str = malloc(_str_len(s1) + _str_len(s2) + 1);
  
  if (new_str == NULL)
  {
    return NULL;
  }

  for(i = 0; i < _str_len(s1); i++)
  {
   *(new_str + i) = *(s1 + i);
  }

  for(j = 0; j < n; j++)
  {
    *(new_str + i + j) = *(s2 + j);
  }
  *(new_str + i + j) = '\0';

  return new_str;
}

unsigned int _str_len(char *s)
{
  int len;

  len = 0;
  while (*(s + len) != '\0')
  {
    len++;
  }
  return len;
}
