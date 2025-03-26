#include "main.h"

void jack_bauer(void)
{
  int a = 0, b = 0, c = 0, d = 0;
  while (!(a == 2 && b == 3 && c == 6))
  {
    _putchar(a + '0');
    _putchar(b + '0');
    _putchar(':');
    _putchar(c + '0');
    _putchar(d + '0');
    _putchar('\n');
    
    if (d == 9)
    {
      d = -1;
      c++;
    }
    if (c == 6)
    {
      c = 0;
      b++;
    }
    if (b == 9)
    {
      b = 0;
      a++;
    }
    d++;
  }
}
