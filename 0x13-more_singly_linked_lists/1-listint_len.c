#include "lists.h"
#include <stdlib.h>

unsigned int listint_len(const listint_t *h)
{
    const listint_t *current = h;
    unsigned int total;

    total = 0;
    while (current != NULL)
    {
        current = current->next;
	total += 1;
    }
    return total;
}
