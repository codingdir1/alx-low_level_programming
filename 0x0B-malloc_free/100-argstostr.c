#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
  int i, j, len, new_str_i;
  char *new_str;

  if (ac == 0 || av == NULL)
  {
    return NULL;
  }
  
  len = 0;
  
  for (i = 0; i < ac; i++)
  {
    len += _str_len(*(av + i));
  }
  
  new_str = malloc(sizeof(char) * (len + 1));
  if (new_str == NULL)
  {
    return NULL;
  }

  new_str_i = 0;
  
  for (i = 0; i < ac; i++)
  {
    for (j = 0; *(*(av + i) + j) != '\0'; j++)
    {
      *(new_str + new_str_i++) = *(*(av + i) + j);
    }
    *(new_str + new_str_i++) = '\n';
    if (i == ac - 1)
    {
      *(new_str + new_str_i++) = '\0';
    }
  }

  return new_str;
}
