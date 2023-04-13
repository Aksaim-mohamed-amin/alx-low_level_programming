#include <stdlib.h>

/**
 * array_range - main function
 *
 * Description: 'create an array of integers started from min to max'
 *
 * @min: the started integer in the array
 * @max: max integer the array finish with
 *
 * Return: pointer to the new array or NULL if min > max
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;

	return (arr);
}
