#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

list_t *add_node(list_t **head, const char *str)
{
    unsigned int i;
    list_t *temp = *head;
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
    new->str = strdup(str);
    new->len = i;
  
    *head = new;
    new->next = temp;
  
    return new;
}
