#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * @array: Array to search in.
 * @size: Size of the array.
 * @cmp: Pointer to the function to be used to compare values.
 *
 * Return: the index of the first element for which the cmp function
 *         does not return 0,
 *         If no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array = NULL || cmp != NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
