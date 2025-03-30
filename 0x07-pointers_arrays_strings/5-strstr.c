#include "main.h"
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
  int i;

  for (i = 0; *(haystack + i) != '\0'; i++)
  {
    if (*(haystack + i) == *needle)
    {
      int j;

      for (j = 1; 
          (*(needle + j) != '\0') && (*(haystack + i + j) == *(needle + j));
	   j++) ;
      if (*(needle + j) == '\0')
      {
        return haystack + i;
      }
    }
  }

  return NULL;
}
