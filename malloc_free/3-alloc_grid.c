#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
 *
 * @width: 0 or negative.
 * @height: 0 or negative.
 *
 * Return: NULL.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = (int **)malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)


		grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)

	{
		for (j = 0; j < width; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}

	return (grid);

}
