#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char *argv[] = {"/bin/ls", NULL};
    
    /* Executing programs */    
    execve(argv[0], argv, NULL);
    return 0;
}
