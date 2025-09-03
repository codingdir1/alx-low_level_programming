#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    pid_t my_pid;
    pid_t pid;

    pid = fork();
    if (pid == -1)
    {
        return 1;
    }

    my_pid = getpid();

    if (pid == 0)
    {
        printf("The process ID of the child process is %d\n", my_pid);
    }

    if (pid != -1 && pid != 0)
    {
        printf("The process ID of the parent process is %d\n", my_pid);
    }

    return 0;
}
