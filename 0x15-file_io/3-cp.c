#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * create_buffer - Allocates memory for a buffer.
 *
 * Return: A pointer to the newly-allocated buffer, or NULL on failure.
 */
char *create_buffer(void)
{
    char *buffer = malloc(BUF_SIZE);

    if (buffer == NULL)
    {
        perror("Error: Unable to allocate buffer");
        exit(99);
    }

    return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
    if (close(fd) == -1)
    {
        perror("Error: Unable to close file descriptor");
        exit(100);
    }
}

/**
 * main - Copies the contents of one file to another.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
    int source_fd, dest_fd;
    ssize_t bytes_read, bytes_written;
    char *buffer;


    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    buffer = create_buffer();

    source_fd = open(argv[1], O_RDONLY);
    if (source_fd == -1)
    {
        perror("Error: Unable to open source file for reading");
        exit(98);
    }

    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (dest_fd == -1)
    {
        perror("Error: Unable to open or create destination file for writing");
        close_file(source_fd);
        exit(99);
    }

     while ((bytes_read = read(source_fd, buffer, BUF_SIZE)) > 0)
    {
        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written == -1)
        {
            perror("Error: Unable to write to destination file");
            close_file(source_fd);
            close_file(dest_fd);
            free(buffer);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        perror("Error: Unable to read from source file");
        close_file(source_fd);
        close_file(dest_fd);
        free(buffer);
        exit(98);
    }

    free(buffer);
    close_file(source_fd);
    close_file(dest_fd);

    return (0);
}


