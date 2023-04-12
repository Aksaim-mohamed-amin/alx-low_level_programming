#include <stdlib.h>

/**
 * alloc_grid - main function
 *
 * Description: 'create a 2D array'
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: 2D array , and width or height is equal to 0
 *         return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width == 0 || height == 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
