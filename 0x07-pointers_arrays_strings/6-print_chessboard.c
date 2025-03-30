#include "main.h"

void print_chessboard(char (*a)[8])
{
  int i;

  for (i = 0; i < 8; i++)
  {
    int j;

    for (j = 0; j < 8; j++)
    {
      _putchar(*(*(a + i) + j));
      
      if ((j + 1) % 8 == 0)
      {
        _putchar('\n');
      }
    }
  }
}
