#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

list_t *add_node_end(list_t **head, const char *str)
{
    unsigned int i;
    list_t *current;
    list_t *new = malloc(sizeof(list_t));
    if (new == NULL)
    {
       return NULL;
    }

    i = 0;
    while (*(str + i) != '\0')
    {
        i++;
    }
    new->len = i;
    new->str = strdup(str);
    new->next = NULL;

    if (*head == NULL)
    {
      *head = new;
    } else 
    {
	current = *head;
        while (current != NULL)
        {
	    if (current->next == NULL)
	    {
	        current->next = new;
		break;
	    }
	    current = current->next;
        }
    }
    return new;
}
