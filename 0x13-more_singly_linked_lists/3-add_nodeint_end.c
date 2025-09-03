#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new, *current;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        return NULL;
    }
    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
    } else
    {
	current = *head;
	while (current->next != NULL)
	{
	    current = current->next;
	}
	current->next = new;
    }
    return new;
}
