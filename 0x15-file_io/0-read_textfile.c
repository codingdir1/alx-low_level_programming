#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes;
    char *buffer;

    if (filename == NULL)
    {
        return 0;
    }

    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        return 0;
    }
    
    buffer = malloc(sizeof(char) * letters);
    bytes = read(fd, buffer, letters);
    if (bytes == -1)
    {
        return 0;
    }
    write (1, buffer, bytes);
    free(buffer);
    close(fd);
    return bytes;
}
