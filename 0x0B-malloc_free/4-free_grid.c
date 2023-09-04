#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees 2d dimensional grid
 * @grid: pointer to a 2d grid
 * @height: height dimension of the grid
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
