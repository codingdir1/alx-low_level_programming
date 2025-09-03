#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

int main(void)
{
    pid_t pid;

    pid = getpid();
    printf("Process ID: %d\n", pid);

    return 0;
}
