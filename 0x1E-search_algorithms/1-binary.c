#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located,
 *         Or -1 if value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
			high = mid - 1;

		else if (array[mid] < value)
			low = mid + 1;
	}
	return (-1);
}
