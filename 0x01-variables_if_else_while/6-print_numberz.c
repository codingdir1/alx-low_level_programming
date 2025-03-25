#include <stdio.h>

int main(void)
{
  char c = 48;
  while (c <= 57)
  {
    putchar(c++);
  }

  putchar('\n');

  return 0;
}
