#include "main.h"

void rev_string(char *s)
{
  int length = 0, i;
  
  while (*(s + length) != '\0')
  {
    length++;
  }

  for (i = 0; (length % 2) ? (i < length / 2) : (i <= length / 2); i++)
  {
    char tmp = *(s + i);
    *(s + i) = *(s + length - i - 1);
    *(s + length - i - 1) = tmp;
  }
}
