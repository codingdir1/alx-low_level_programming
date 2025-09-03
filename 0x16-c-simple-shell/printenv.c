#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "main.h"

int main()
{
    extern char **environ;
    unsigned int i;

    i = 0;
    while (*(environ + i) != NULL)
    {
        printf("%s\n", *(environ + i));
	i += 1;
    }
    return 0;
}
