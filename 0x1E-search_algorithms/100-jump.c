#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 *               and the square root of the size of the array as the jump step.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located,
 *         Or -1 if value is not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, next, step, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;
	next = step;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[next] <= value && next < size)
	{
		prev = next;
		next += step;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, next);

	for (i = prev; i <= next && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
