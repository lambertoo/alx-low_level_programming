#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    char *buffer = malloc(letters);
    if (buffer == NULL)
    {
        close(fd);
        return 0;
    }

    ssize_t bytesRead = read(fd, buffer, letters);
    if (bytesRead == -1)
    {
        free(buffer);
        close(fd);
        return 0;
    }

    ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    if (bytesWritten == -1 || (size_t)bytesWritten < bytesRead)
    {
        free(buffer);
        close(fd);
        return 0;
    }

    free(buffer);
    close(fd);

    return bytesRead;
}

