#include "main.h"

char *_strcat(char *dest, char *src)
{
  int i, length;

  length = 0;
  while (*(dest + length) != '\0')
  {
    length++;
  }

  i = 0;
  while (*(src + i) != '\0')
  {
    *(dest + length + i) = *(src + i);
    i++;
  }
  *(dest + length + i) = '\0';

  return dest;
}
