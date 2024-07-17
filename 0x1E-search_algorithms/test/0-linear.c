#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers,
 *                 using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size : The number of elements in array.
 * @value : The value to search for.
 *
 * Return: -1 if the array is NULL or value not present,
 *         otherwise return the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
