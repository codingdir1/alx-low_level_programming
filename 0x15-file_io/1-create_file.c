#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content)
{
    int fd, bytes;

    if (filename == NULL)
    {
        return -1;
    }

    fd = creat(filename, 0600);
    if (fd < 0)
    {
       return -1;
    }
    bytes = 0;
    while (*(text_content + bytes) != '\0')
    {
        bytes++;
    }
    if (write(fd, text_content, bytes) == -1)
    {
        return -1;
    }

    close(fd);
    return 1;
}
