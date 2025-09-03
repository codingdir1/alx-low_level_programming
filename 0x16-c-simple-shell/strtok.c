#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

char **split_string(char *str, char *separators)
{
    unsigned int n_tokens = num_tokens(str, separators), i, token_length, token_i = 0, j;
    
    char **token_array = malloc(sizeof(char *) * (n_tokens + 1));
    if (token_array == NULL)
    {
        return NULL;
    }

    i = 0;
    while (*(str + i) != '\0')
    {
        if (is_separator(*(str + i), separators) == 1)
	{
	    i += 1;
	    continue;
	}

	token_length = 0;
	while (*(str + i + token_length) != '\0' &&
	       is_separator(*(str + i + token_length), separators) == 0)
	{
	    token_length += 1;
	}

	*(token_array + token_i) = malloc(sizeof(char ) * (token_length + 1));
	if (*(token_array + token_i) == NULL)
	{
	    free_array(token_array);
	    return NULL;
	}

	j = 0;
	while (j < token_length)
	{
	    *(*(token_array + token_i) + j) = *(str + i + j);
	    j += 1;
	}
	*(*(token_array + token_i) + j) = '\0';
	
	i += token_length;
	token_i += 1;
    }
    *(token_array + token_i) = NULL;
    return token_array;
}

unsigned int num_tokens(char *str, char *separators)
{
    unsigned int i, n_tokens;
    char new_token = 0;
    
    i = 0;
    while (*(str + i) != '\0')
    {
        if (is_separator(*(str + i), separators) == 1)
	{
	    new_token = 0;
	} else if (new_token == 0)
	{
	    new_token = 1;
	    n_tokens += 1;
	}
	i += 1;
    }
    return n_tokens;
}

char is_separator(char c, char *separators)
{
    int i;

    i = 0;
    while (*(separators + i) != '\0')
    {
        if (c == *(separators + i))
	{
	    return 1;
	}
	i += 1;
    }
    return 0;
}

void free_array(char **tokens)
{
    unsigned int i;

    i = 0;
    while (*(tokens + i) != NULL)
    {
        free(*(tokens + i));
	i += 1;
    }
    free(tokens);
}
