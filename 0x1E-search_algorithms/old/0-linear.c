#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *                 using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located,
 *         Or -1 if value is not present in array or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
