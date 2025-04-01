#include "main.h"

int _atoi(char *s)
{
  int result = 0, i, sign;

  i = 0;
  sign = 1;
  while (*(s + i) != '\0')
  {
    if (*(s + i) == '-')
    {
      sign = -1 * sign;
    }
    if (*(s + i) >= 48 && *(s + i) <= 57)
    {
      if (sign == -1)
      {
        result = result * 10 - (*(s + i) - 48);
      } else {
        result = result * 10 + (*(s + i) - 48); 
      }
    } else if (result != 0)
    {
      return result;
    }
    i++;
  } 
  return result;
}
