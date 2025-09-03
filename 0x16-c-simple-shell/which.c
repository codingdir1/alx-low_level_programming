#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "main.h"

int main(int argc, char **argv)
{
    int i;
    char *PATH = getenv("PATH");
    char **pathnames = NULL;
    char separators[] = {':', '\n'};

    if (argc < 2)
    {
        printf("USAGE: %s filename ...\n", argv[0]);
	return -1;
    }

    if (PATH == NULL)
    {
        write(1, "VARIABLE NOT FOUND\n", 19);
	return -1;
    }

    pathnames = split_string(PATH, separators);
    i = 1;
    while (i < argc)
    {
        file_exists(*(argv + i), pathnames);
	i += 1;
    }

    free_array(pathnames);
    return -1;
}

void file_exists(char *filename, char **pathnames)
{
    int i;
    DIR *dir;
    struct dirent *entry;

    i = 0;
    while (*(pathnames + i) != NULL)
    {
        dir = opendir(*(pathnames + i));
	if (dir == NULL)
	{
	    i += 1;
	    continue;
	}
	while ((entry = readdir(dir)) != NULL)
	{	
	    if (strcmp(filename, entry->d_name) == 0)
	    {
		closedir(dir);   
	        printf("FILE FOUND: %s\n", filename);
		return;
	    }
	}
	closedir(dir);
	i += 1;
    }
    printf("FILE NOT FOUND: %s\n", filename);
}
