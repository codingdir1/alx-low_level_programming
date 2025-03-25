#include <stdio.h>

int main(void)
{
  char c = '0';
  while (c <= '9')
  {
    putchar(c++);
  }
  putchar('\n');

  return 0;
}
