#include <unistd.h>
#include "variadic_functions.h"

int _putchar(char c)
{
  return (write(1, &c, 1));
}
