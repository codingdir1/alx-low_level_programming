#include "main.h"
#include <stdlib.h>

char *to_bin(unsigned long n)
{
  int i, rem, len;
  unsigned long temp;
  char *bin;

  temp = n;
  len = 0;
  while (temp > 0)
  {
    temp /= 2;
    len++;
  }
  if (n == 0) {len = 1;}

  bin = malloc(sizeof(char) * (len + 1));
  if (bin == NULL)
  {
    return NULL;
  }
  bin[len] = '\0';
  bin[len - 1] = '0';

  i = 1;
  while (n > 0)
  {
    rem = n % 2;
    *(bin + len - i) = rem + 48;
    n /= 2;
    i++;
  }

  return bin;
}


char *to_oct(unsigned long n)
{
  int i, rem, len;
  unsigned long temp;
  char *oct;

  temp = n;
  len = 0;
  while (temp > 0)
  {
    temp /= 8;
    len++;
  }
  if (n == 0) {len = 1;}

  oct = malloc(sizeof(char) * (len + 1));
  if (oct == NULL)
  {
    return NULL;
  }
  oct[len] = '\0';
  oct[len - 1] = '0';

  i = 1;
  while (n > 0)
  {
    rem = n % 8;
    *(oct + len - i) = rem + 48;
    n /= 8;
    i++;
  }

  return oct;
}


char *to_hex(unsigned long n, char c)
{
  int i, rem, len;
  unsigned long temp;
  char *hex;

  temp = n;
  len = 0;
  while (temp > 0)
  {
    temp /= 16;
    len++;
  }
  if (n == 0) {len = 1;}

  hex = malloc(sizeof(char) * (len + 1));
  if (hex == NULL)
  {
    return NULL;
  }
  hex[len] = '\0';
  hex[len - 1] = '0';

  i = 1;
  while (n > 0)
  {
    rem = n % 16;
    if (rem < 10)
    {
      *(hex + len - i) = rem + 48;
    } else 
    {
      if (c == 'x')
      {
        *(hex + len - i) = rem + 87;
      } else if (c == 'X')
      {
        *(hex + len - i) = rem + 55;
      }
    }
    n /= 16;
    i++;
  }

  return hex;
}