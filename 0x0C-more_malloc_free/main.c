#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        printf("%d\n", *(buffer + i));
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int *p = malloc(sizeof(int) * 4);
    *p = 1;
    *(p + 1) = 2;
    *(p + 2) = 3;
    *(p + 3) = 4;
    p = _realloc(p, sizeof(int) * 10, sizeof(int) * 13);

    simple_print_buffer(p, 13);
    free(p);
    return (0);
}
