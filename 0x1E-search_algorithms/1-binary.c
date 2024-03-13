#include "search_algos.h"

/**
  * binary_search - Locates a value in a sorted integer array using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Returns: The index of the value if found, otherwise -1 if the value is not present
  *          or the array is NULL.
  *
  * Description: This function searches for a given value within a sorted array
  *              by repeatedly dividing the search interval in half.
  *              It prints the current subarray being searched during each iteration.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

