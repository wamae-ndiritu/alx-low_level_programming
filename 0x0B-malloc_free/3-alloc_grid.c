#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2
 *	dimensional array of integers.
 * @width: size of the arrays
 * @height: the size of each element of the array
 *
 * Return: returns NULL if there is failure in
 *	allocating memory, or if width or height
 *	is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	else if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* allocating single block memory for all the rows */
	grid = (int **)malloc(height * sizeof(int));
	if (grid == NULL)
	{
		return (NULL);
	}
	/* allocating memory to the columns */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	/* initializing the 2D array */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
