#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    char *argv[] = {"/bin/ls", NULL};
    int i, w_status;
    pid_t pid;

    i = 0;
    while (i < 5)
    {
        pid = fork();
	if (pid == -1)
	{
	    write(1, "ERROR\n", 6);
	    return 1;
	} else if (pid == 0)
	{
	    execve(argv[0], argv, NULL);
	} else
	{
	   wait(&w_status);
	   i += 1;
	}
    }
    return 0;
}
