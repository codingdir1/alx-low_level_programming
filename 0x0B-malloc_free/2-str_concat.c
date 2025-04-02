#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
  int len1, len2;
  char *new_str;

  len1 = 0;
  while (*(s1 + len1) != '\0')
  {
    len1++;
  }

  len2 = 0;
  while (*(s2 + len2) != '\0')
  {
    len2++;
  }

  new_str = malloc(sizeof(char) * (len1 + len2 + 1));
  if (new_str == NULL)
  {
    return NULL;
  }
  *(new_str + len1 + len2) = '\0';
  while (--len2 >= 0)
  {
    *(new_str + len1 + len2) = *(s2 + len2);
  }
  while (--len1 >= 0)
  {
    *(new_str + len1) = *(s1 + len1);
  }

  return new_str;
}
