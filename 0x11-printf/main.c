#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int l;
  l = 0;
  printf("%p\n", (void *) &l);
  _printf("%p\n", (&l));
  return 0;
}
