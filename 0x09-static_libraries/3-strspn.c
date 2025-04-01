#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
  unsigned int i;

  for (i = 0; *(s + i) != '\0'; i++)
  {
    unsigned int j;
    int noMatch = 1;

    for (j = 0; (*(accept + j) != '\0') && (noMatch == 1); j++)
    {
      if ((*(s + i) == *(accept + j)) && noMatch == 1)
      {
        noMatch = 0;
      }
    }

    if (noMatch == 1)
    {
      return i;
    }
  }

  return i;
}
