#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2-dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		matrix[a] = malloc(sizeof(int) * width);

		if (matrix[a] == NULL)
		{
			for (; a >= 0; a--)
				free(matrix[a]);

			free(matrix);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			matrix[a][b] = 0;
	}

	return (matrix);
}
