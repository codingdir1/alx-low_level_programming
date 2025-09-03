#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

char *_getenv(const char *name)
{
    extern char **environ;
    unsigned int i, j;

    i = 0;
    while (*(environ + i) != NULL)
    {
        j = 0;
	while (*(name + j) != '\0')
	{
	    if (*(name + j) != *(*(environ + i) + j))
	    {
	        i += 1;
		continue;
	    }
	    j += 1;
	}
	if (*(*(environ + i) + j) == '=')
	{
	    return (*(environ + i) + j + 1);
	}
	i += 1;
    }
    return NULL;
}
