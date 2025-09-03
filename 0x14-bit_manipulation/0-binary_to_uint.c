#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int sum, pow = 1, n;
    int len;

    if (*b == '\0')
    {
        return 0;
    }

    len = 0;
    while (*(b + len + 1) != '\0')
    {
	if (*(b + len) < 48 || *(b + len) > 57)
	{
	    return 0;
	}
        len += 1;
    }

    sum = 0;
    while (len >= 0)
    {
	n = *(b + len) - 48;
        sum += n * pow;
	pow *= 2;
	len -= 1;
    }
    return sum;
}
