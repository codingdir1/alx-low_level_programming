#include "main.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
  unsigned int len1, len2, product, left_over, digit, sum, curr_pos_n, start, result_len;
  int i, j;
  char *result;

  if (argc != 3) /* check for the provision of valid number of arguments */
  {
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');
    exit(98);
  } else if (is_number(argv[1]) == 0 || is_number(argv[2]) == 0) /* check the validity of the given arguments */
  {
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');
    exit(98);
  }

  /* number of digits of the given arguments */
  len1 = num_len(argv[1]);
  len2 = num_len(argv[2]);

  /* allocating memory for the output */
  result = malloc(sizeof(char) * (len1 + len2 + 1));
  if (result == NULL)
  {
    _putchar('E');
    _putchar('r');
    _putchar('r');
    _putchar('o');
    _putchar('r');
    _putchar('\n');
    exit(98);
  }
  *(result + len1 + len2) = '\0';
  
  /* main algorithm*/
  j = len2 - 1;
  while (j >= 0)
  {
    i = len1 - 1;
    left_over = 0;
    while (i >= 0)
    {
      product = to_num(*(*(argv + 1) + i)) * to_num(*(*(argv + 2) + j)) + left_over;
      digit = product % 10;
      left_over = (product - digit) / 10;

      if (*(result + i + j + 1) == 0)
      {
        curr_pos_n = 0;
      } else
      {
        curr_pos_n = to_num(*(result + i + j + 1));
      }
      sum = curr_pos_n + digit;
      left_over += (sum - (sum % 10)) / 10;
      *(result + i + j + 1) = to_char(sum % 10);
      if (i == 0)
      {
        *(result + i + j) = to_char(left_over);
      }
      i--;
    }
    j--;
  }
  
  /* print the result */
  start = 0;
  result_len = 0;
  while (*(result + result_len) != '\0')
  {
    if (*(result + result_len) != '0')
    {
      start = 1;
    }
    if (start == 1)
    {
      _putchar(*(result + result_len));
    }
    result_len++;
  }
  _putchar('\n');
  free(result);

  return 0;
}

/* function to check if a given string is a number */
int is_number(char *string)
{
  unsigned int i;

  i = 0;
  while (*(string + i) != '\0')
  {
    if (*(string + i) < '0' || *(string + i) > '9')
    {
      return 0;
    }
    i++;
  }
  return 1;
}

/* function to check the cardinality of the digits in a given string */
int num_len(char *string)
{
  int len;

  len = 0;
  while (*(string + len) != '\0')
  {
    len++;
  }
  return len;
}

/* function to change a given character to a number */
int to_num(char c)
{
  return c - 48;
}

/* function to change a given number to character */
char to_char(int c)
{
  return c + 48;
}
