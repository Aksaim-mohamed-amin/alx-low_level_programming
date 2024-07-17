#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers,
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size : The number of elements in array.
 * @value : The value to search for.
 *
 * Return: -1 if the array is NULL or value not present,
 *         otherwise return the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, m;

	/* Print the array */
	printf("Searching in array: \n");
	for (i = 0; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	m = size / 2;
	if (m < value)
		return (binary_search(array, size / 2, value));
	else if(m > value)
		return (binary_search(array, size / 2, value));

	return (m);
}
