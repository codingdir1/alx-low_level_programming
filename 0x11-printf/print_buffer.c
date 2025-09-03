#include "main.h"
#include <unistd.h>
#include <stdlib.h>

int print_buffer(char *buffer)
{
  int i;

  i = 0;
  while (*(buffer + i) != '\0')
  {
    write(1, (buffer + i), 1);
    i++;
  }
  
  free(buffer); 
  return i;
}