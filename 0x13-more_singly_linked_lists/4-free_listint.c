#include "lists.h"
#include <stdlib.h>

void free_listint(listint_t *head)
{
    listint_t *current = head, *next;
    while (current != NULL)
    {
        next = current->next;
	free(current);
	current = next;
    }
}
