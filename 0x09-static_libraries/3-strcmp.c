#include "main.h"

int _strcmp(char *s1, char *s2)
{
  int i = 0;
  while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
  {
    int diff;

    diff = (*(s1 + i)) - (*(s2 + i));
    if (diff != 0)
    {
      return diff;
    }
    i++;
  }
  return 0;
}
