#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

unsigned int print_listint(const listint_t *h)
{
   const listint_t *current = h;
   unsigned int total;

   total = 0;
   while (current != NULL)
   {
       printf("%d\n", current->n);
       current = current->next;
       total += 1;
   }
   return total;
}
