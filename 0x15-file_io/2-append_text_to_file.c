#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content)
{
    if (filename == NULL)
        return -1;

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return -1;

    if (text_content != NULL)
    {
        ssize_t bytesWritten = write(fd, text_content, strlen(text_content));
        if (bytesWritten == -1)
        {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}

