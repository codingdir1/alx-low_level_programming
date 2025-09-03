#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int print_list(const list_t *h)
{
    unsigned int length;
    const list_t *current = h;

    length = 0;
    while (current != NULL)
    {
	if (current->str == NULL)
	{
	    printf("[0] (nil)\n");
	} else 
	{
	    printf("[%u] %s\n", current->len, current->str);
	}
	current = current->next;
	length++;
    }
    return length;
}
