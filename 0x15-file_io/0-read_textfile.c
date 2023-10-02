#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints to STDOUT.
 * @filename: Name of the text file to read.
 * @letters: Maximum number of letters to read and print.
 *
 * Return: The actual number of letters read, or
 * 0 when the function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_letters_read, num_letters_written;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	num_letters_read = read(fd, buffer, letters);
	if (num_letters_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	num_letters_written = write(STDOUT_FILENO, buffer, num_letters_read);
	if (num_letters_written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (num_letters_read);
}
