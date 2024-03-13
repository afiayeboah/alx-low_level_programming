#include "search_algos.h"

/**
  * linear_search - Performs a linear search on an integer array.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: The index of the first occurrence of the value if found,
  *          otherwise -1 if the value is not present or the array is NULL.
  *
  * Description: This function iterates through the array sequentially,
  *              checking each element for the target value.
  *              It prints the checked values during the search process.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
