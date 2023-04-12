/**
 * free_grid - main function
 *
 * Description: 'Free a 2D array'
 *
 * @grid: 2D array to free
 * @height: the height of the 2D array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
