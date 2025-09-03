#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _unsetenv(const char *name)
{
    unsigned int i, j, new_env_length;
    extern char **environ;
    char **new_environ;

    if (name == NULL || *name == '\0')
    {
        return -1;
    }

    i = 0;
    new_env_length = 0;
    while (*(environ + i) != NULL)
    {
        if (is_variable(name, *(environ + i)) == 1)
	{
	    i += 1;
	    continue;
	}
	i += 1;
	new_env_length += 1;
    }
    
    i = 0;
    j = 0;
    if (i != new_env_length)
    {
	new_environ = malloc(sizeof(char *) * (new_env_length + 1));
	if (new_environ == NULL)
	{
	    return -1;
	}

        while (*(environ + i) != NULL)
        {
            if (is_variable(name, *(environ + i)) == 1)
	    {
	        i += 1;
		continue;
	    }
	    *(new_environ + j) = *(environ + i);
	    i += 1;
	    j += 1;
        }
	*(new_environ + j) = NULL;
	environ = new_environ;
	return 0;
    } else
    {
        return 0;
    }
}
