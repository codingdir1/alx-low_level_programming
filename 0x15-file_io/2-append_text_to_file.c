#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int bytes;

    if (filename == NULL)
    {
        return -1;
    }
    fd = open(filename, O_RDWR | O_APPEND);
    if (fd < 0)
    {
        return -1;
    }

    bytes = 0;
    while (*(text_content + bytes) != '\0')
    {
        bytes += 1;
    }
    
    if (bytes != 0)
    { 
        if (write(fd, text_content, bytes) == -1)
	{
	    return -1;
	}
    }
    close(fd);
    return 1;
}
