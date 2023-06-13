#include "main.h"

/**
 * alloc_grid - Create 2 dimensional array of integers, and initialize it to 0.
 *
 * @width: Width of the 2D array.
 * @height: height of the 2D array.
 *
 * Return: Pointer to 2D array, or NULL if the function fails.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
