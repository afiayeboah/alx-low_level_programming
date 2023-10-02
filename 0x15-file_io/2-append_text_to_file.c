#include "main.h"
#include <string.h>
#define SIZE_MAX ((size_t)-1)

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
	{
	close(file_descriptor);
	return (1);
	}

	bytes_written = write(file_descriptor, text_content, strlen(text_content));
	if ((size_t)bytes_written == (size_t)-1 ||
(size_t)bytes_written != strlen(text_content))

	{
	close(file_descriptor);
	return (-1);

	}

	close(file_descriptor);
	return (1);
}
