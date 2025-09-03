#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "main.h"

int main(void)
{
    char *line = NULL;
    size_t line_len = 0; 
    int w_status;
    pid_t pid;
    char **argv;
    char separators[] = {' ', '\n', '\0'};

    while (1)
    {
        write(1, "#cisfun$ ", 9);
	if (getline(&line, &line_len, stdin) != -1)
	{
	    pid = fork();
	    if (pid == -1)
	    {
	        write(1, "ERROR\n", 6);
		return -1;
	    } else if (pid == 0)
	    {
	       argv = split_string(line, separators);
	       execve(argv[0], argv, NULL);
	    } else
	    {
	        wait(&w_status);
	    }
	} else 
	{
	    free(line);
	    break;
	}
    }
    return 0;
}
