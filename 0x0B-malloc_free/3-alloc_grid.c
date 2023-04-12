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
	int i, **arr;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int));

		if (arr[i] == NULL)
			return (NULL);
	}

	return (arr);
}
