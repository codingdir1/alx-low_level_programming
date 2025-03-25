#include <stdio.h>

int main(void)
{
  int n = 48;
  while (n <= 56)
  {
    putchar(n++);
    putchar(',');
    putchar(' ');
  }
  putchar('9');

  return 0;
}
