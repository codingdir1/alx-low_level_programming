#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
  int length;
  char end;

  length = 0;
  end = 0;
  while (*(dest + length) != '\0' && length < n)
  {
    if (*(src + length) == '\0')
    {
      end = 1;
    }
    
    if (end == 0) 
    { 
      *(dest + length) = *(src + length);
    } else if (end == 1)
    {
      *(dest + length) = '\0';
    }
    length++;
  }

  return dest;
}
