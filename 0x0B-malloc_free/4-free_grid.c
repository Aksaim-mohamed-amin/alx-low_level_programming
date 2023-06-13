#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid previously created by your
 *             alloc_grid function.
 *
 * @grid: Pointer to the Grid to free.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
