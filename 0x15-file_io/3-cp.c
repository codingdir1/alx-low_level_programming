#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    int file_from_d, file_to_d, bytes;
    char buffer[1024];

    if (argc != 3)
    {
        exit(97);
	write(2, "Usage: cp file_from file_to\n", 28);
    }

    file_from_d = open(argv[1], O_RDONLY);
    file_to_d = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0644);

    bytes = read(file_from_d, buffer, 1024);
    if (file_from_d < 0 || bytes == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", argv[2]);
        exit(98);
    }

    if (file_to_d < 0 || (write(file_to_d, buffer, bytes) == -1))
    {
	dprintf(2, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    if (close(file_from_d) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", file_from_d);
        exit(100);
    }

    if (close(file_to_d) == -1)
    {
        dprintf(2, "Error: Can't close fd %d\n", file_to_d);
        exit(100);
    }

    return 0;
}
