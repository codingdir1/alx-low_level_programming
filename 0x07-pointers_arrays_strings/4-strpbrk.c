#include "main.h"
#include <stdio.h>

char *_strpbrk(char *s, char *accept)
{
  unsigned int i;

  for (i = 0; *(s + i) != '\0'; i++)
  {
    unsigned int j;

    for (j = 0; *(accept + j) != '\0'; j++)
    {
      if (*(accept + j) == *(s + i))
      {
        return s + i;
      }
    }
  }

  return NULL;
}
