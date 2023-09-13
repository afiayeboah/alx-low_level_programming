#include "function_pointers.h"
/**
 * int_index - function that searches for an integer in an array of integers
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to function that would be used to compare
 * Return: -1 if no element matches or size < = 0,
 * otherwise, 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
