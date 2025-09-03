#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    pid_t my_pid;
    pid_t pid;
    int w_status;

    pid = fork();
    if (pid == -1)
    {
        return 1;
    }

    my_pid = getpid();

    if (pid == 0)
    {
        printf("The process ID of the child process is %d\n", my_pid);
	sleep(3);
    }

    if (pid != -1 && pid != 0)
    {
        wait(&w_status);
	printf("The process ID of the parent process is %d\n", my_pid);
    }

    return 0;
}
