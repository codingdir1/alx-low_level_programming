#include "main.h"

int main(int argc, char **argv)
{
  int sum, i;

  sum = 0;

  for (i = 1; i < argc; i++)
  {
    int j, num;

    num = 0;
    for (j = 0; *(argv[i] + j) != '\0'; j++)
    {
      char c;

      c = *(argv[i] + j);
      if (c >= '0' && *(argv[i] + j) <= '9')
      {
        num = num * 10 + (int) c - 48;
      } else 
      {
       _putchar('E'); 
       _putchar('r'); 
       _putchar('r'); 
       _putchar('o'); 
       _putchar('r'); 
       _putchar('\n'); 
	return 0;
      }
    }
    sum += num;
  }
  _print_num(sum);
  
  return 0;
}
