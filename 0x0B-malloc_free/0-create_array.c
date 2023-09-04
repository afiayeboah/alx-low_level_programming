#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
* and initializes it with a specific char
 * @size: size of the array to create
 * @c: character to fill each element of array
 * Return: pointer to array, NULL if
 *  fail allocated fails or if ‘size’ is 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
