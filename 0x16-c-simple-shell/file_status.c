#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(void)
{
    int i;
    struct stat st;

    char *pathnames[] = {"ls", "/bin/ls", "/tmp", NULL};
    
    i = 0;
    while (*(pathnames + i) != NULL)
    {
       if (stat(*(pathnames + i), &st) == 0)
       {
           write(1, "FOUND\n", 6);
       } else 
       {
           write(1, "NOT FOUND\n", 10);
       }
       i += 1;
    }

    return 0;
}    
