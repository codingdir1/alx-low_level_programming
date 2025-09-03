#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t n = 0;

    write(1, "$ ", 2);
    if ((n = getline(&line, &len, stdin)) != -1) 
     /* Checks if the line didnot end */ 
    {
	/* On success */
        write(1, line, n);
    }
    /* Freeing the buffer */
    free(line);

    return 0;
}
