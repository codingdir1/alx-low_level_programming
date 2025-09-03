#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  void *new_space;
  unsigned int i; 
  if (ptr == NULL)
  {
    return malloc(new_size);
  } else if (old_size == new_size)
  {
    return ptr;
  } else if (new_size == 0)
  {
    free(ptr);
    return NULL;
  }

  new_space = malloc(new_size);
  if (new_space == NULL)
  {
    return NULL;
  }
 
  for (i = 0; i < new_size && i < old_size; i++)
  {
    *((char *)new_space + i) = *((char *)ptr+ i);
  }
  free(ptr);
  return new_space;
}
