#include "main.h"

int recursive_prime(int a, int b)
{
  if (a % b == 0 && b < a)
  {
    return 0;
  } else if (a % b == 0 && b == a)
  {
    return 1;
  }

  return recursive_prime(a, b + 1);
}

int is_prime_number(int n)
{
  if ( n == 1)
  {
    return 0;
  } else if (n < 0)
  {
    return 0;
  }	
  return recursive_prime(n, 2);
}
