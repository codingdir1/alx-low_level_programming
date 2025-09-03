#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int _setenv(const char *name, const char *value, int overwrite)
{
    extern char **environ;
    unsigned int i, environ_len;
    char *new_var;
    char **new_environ;
    
    i = 0;
    while (*(environ + i) != NULL)
    {
        if (is_variable(name, *(environ + i)) == 1)
	{
	    if (overwrite != 0)
	    {
	        new_var = new_env_variable(name, value);
		if (new_var != NULL)
		{
		    environ[i] = new_var;
		    return 0;
		} else 
		{
		    return -1;
		}
	    }
	    return 0;
	}
	i += 1;
    }
    
    new_var = new_env_variable(name, value);
    if (new_var != NULL)
    {
        environ_len = 0;
	while (*(environ + environ_len) != NULL)
	{
	    environ_len += 1;
	}
	new_environ = malloc(sizeof(char *) * (environ_len + 2));
        if (new_environ == NULL)
	{
	    return -1;
	}

	i = 0;
	while (i < environ_len)
	{
	    *(new_environ + i) = *(environ + i);
	    i += 1;
	}
	*(new_environ + i) = new_var;
	*(new_environ + i + 1) = NULL;

	environ = new_environ;
	return 0;
    } else 
    {
        return -1;
    }
}

int is_variable(const char *name, char *environment)
{
    int i;

    if (name == NULL || *name == '\0')
    {
        return -1;
    }

    i = 0;
    while (*(name + i) != '\0')
    {
        if (*(name + i) == '=')
	{
	    return -1;
	} else if (*(name + i) != *(environment + i))
	{
	    return 0;
	}
	i += 1;
    }
    if (*(environment + i) == '=')
    {
        return 1;
    }
    return 0;
}

char *new_env_variable(const char *name, const char *value)
{
    char *buffer;
    unsigned int i, j;

    /* Length of name */    
    i = 0;
    while (*(name + i) != '\0')
    {
        i += 1;
    }

    /* Length of value */
    j = 0;
    while (*(value + j) != '\0')
    {
        j += 1;
    }

    /* Allocating buffer */
    buffer = malloc(sizeof(char) * (i + j + 2));
    if (buffer == NULL)
    {
        return NULL;
    }

    /* Copying name */
    i = 0;
    while (*(name + i) != '\0')
    {
        buffer[i] = *(name + i);
        i += 1;
    }
    buffer[i] = '=';
    i += 1;

    /* Copying value */
    j = 0;
    while (*(value + j) != '\0')
    {
	buffer[i + j] = value[j];
	j += 1;
    }
    buffer[i + j] = '\0';
    return buffer;
}
