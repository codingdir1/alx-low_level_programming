#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

void free_list(list_t *head)
{ 
    list_t *current = head;
    list_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
	free(current->str);
	free(current);
	current = next;
    }
}

