#include "main.h"

void print_binary(unsigned long int n)
{
    unsigned long int _n;

    if (n == 0)
    {
        _putchar('0');
    } else if (n == 1)
    {
        _putchar('1');
    } else 
    {
	_n = n >> 1;
        print_binary(_n);
	_putchar((n - (2 * _n)) + 48);
    }
}
