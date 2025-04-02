#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
  int len;
  char *new_str;

  len = 0;
  while (*(str + len) != '\0')
  {
    len++;
  }

  new_str = malloc(sizeof(char) * (len + 1));
  if (new_str == NULL)
  {
    return NULL;
  }
  *(new_str + len) = '\0';
  while (--len >= 0)
  {
    *(new_str + len) = *(str + len);
  }

  return new_str;
}
