#include "main.h"

int _recursive_square(int a, int b)
{
  if (b * b < a)
  {
    return _recursive_square(a, b + 1);
  } else if (b * b == a)
  {
    return b;
  } else
  {
    return -1;
  }
}

int _sqrt_recursion(int n)
{
  return _recursive_square(n, 0);
}
