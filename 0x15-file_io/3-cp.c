#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * print_usage_error - Print usage error message and exit with code 97.
 */
void print_usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * print_read_error - Print read error message and exit with code 98.
 * @filename: Name of the file causing the error.
 */
void print_read_error(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * print_write_error - Print write error message and exit with code 99.
 * @filename: Name of the file causing the error.
 */
void print_write_error(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * print_close_error - Print file descriptor close
 * error message and exit with code 100.
 * @fd: File descriptor causing the error.
 * main - Copies content of a fie to another file
 */
void print_close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Entry point for copying the contents of one file to another.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or appropriate exit code on failure.
 */

int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	if (argc != 3)
	print_usage_error();

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	print_read_error(argv[1]);

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
	S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (dest_fd == -1)
	print_write_error(argv[2]);

	while ((bytes_read = read(source_fd, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
	if (bytes_written == -1)
		print_write_error(argv[2]);
	}

	if (bytes_read == -1)
	print_read_error(argv[1]);

	if (close(source_fd) == -1)
	print_close_error(source_fd);

	if (close(dest_fd) == -1)
	print_close_error(dest_fd);

	return (0);
}
