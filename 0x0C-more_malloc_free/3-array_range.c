#include "main.h"

/**
 * array_range - Creates an array of integers.
 *
 * @min: Minmim number
 * @max: Max number
 *
 * Return: Pointer to the array created, NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;

	return (arr);
}
