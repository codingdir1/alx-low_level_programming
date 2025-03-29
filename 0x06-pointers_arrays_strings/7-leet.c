#include "main.h"

char *leet(char *s)
{
  char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
  int code[5] = {52, 51, 48, 55, 49};

  int i;

  for (i = 0; s[i] != '\0'; i++)
  {
    int j;

    for (j = 0; j < 10; j++)
    {
      if (*(s + i) == letters[j])
      {
        *(s + i) = code[j / 2];
      }
    }
  }
  
  return s;
}
