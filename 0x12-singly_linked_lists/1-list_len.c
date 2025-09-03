#include "lists.h"
#include <stdlib.h>

unsigned int list_len(const list_t *h)
{
    unsigned int length;
    const list_t *current = h;

    length = 0;
    while (current != NULL)
    {
      current = current->next;
      length++;
    }
    return length;
}
