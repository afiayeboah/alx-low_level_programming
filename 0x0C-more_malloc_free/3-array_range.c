#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		ptr[a] = min;
		min++;
	}

	return (ptr);
}
