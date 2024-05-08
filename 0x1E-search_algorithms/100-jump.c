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
	size_t step, prev, i;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	prev = 0;

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[(step < size ? step : size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i < (step < size ? step : size); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
