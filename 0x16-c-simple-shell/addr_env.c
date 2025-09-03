#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "main.h"

int main(int argc, char **argv, char **env)
{
    extern char **environ;

    printf("%p\n", (void *) environ);
    printf("%p\n", (void *) env);

    (void) argc;
    (void) argv;
    return 0;
}
