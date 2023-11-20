#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *filename, int fd)
{
    switch (code)
    {
    case 97:
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        break;
    case 98:
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
        break;
    case 99:
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
        break;
    case 100:
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        break;
    default:
        break;
    }
    exit(code);
}

int main(int argc, char **argv)
{
    int fd_from, fd_to;
    ssize_t n_read, n_write;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        print_error(97, NULL, 0);

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        print_error(98, argv[1], 0);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
        print_error(99, argv[2], fd_from);

    while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        n_write = write(fd_to, buffer, n_read);
        if (n_write != n_read)
            print_error(99, argv[2], fd_from);
    }

    if (n_read == -1)
        print_error(98, argv[1], fd_from);

    if (close(fd_from) == -1)
        print_error(100, NULL, fd_from);

    if (close(fd_to) == -1)
        print_error(100, NULL, fd_to);

    return 0;
}

