
#include "main.h"

void print_times_table(int size)
{
  int a = 0, b = 0;
  int firstDigit = 0, secondDigit = 0;
  while (a <= size)
  {
    while (b <= size)
    {
      int product = a * b;
      if (b > 0)
      {
        _putchar(',');
	_putchar(' ');
	if (product < 10)
	{
	  _putchar(' ');
	}
      }
      if (product < 10)
      {
        _putchar(product + '0');
      } else 
      {
        firstDigit = product % 10;
	secondDigit = (product - firstDigit) / 10;
	_putchar(secondDigit + '0');
	_putchar(firstDigit + '0');
      }
      b++;
    }
    _putchar('\n');
    b = 0;
    a++;
  }
}
