#include "main.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
  int cents;
  int values[5] = {25, 10, 5, 2, 1};
  int min;

  if (argc != 2)
  {
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');
    return 1;
  }

  cents = atoi(argv[1]);
  if (cents < 0)
  {
    _putchar('0');
    _putchar('\n');
  }

  min = 0;
  while (cents > 0)
  {
    int i, value;

    for (i = 0; i < 5; i++)
    {
      if (cents % values[i] == 0)
      {
        value = values[i];
	break;
      }
    }
    cents -= value;
    min++;
  }
  _print_num(min);
  
  return 0;
}
