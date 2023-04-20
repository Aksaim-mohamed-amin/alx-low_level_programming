#include <stddef.h>

/**
 * int_index - main function
 * Description: search for an integer
 * @array: array to search in it
 * @size: size of the array
 * @cmp: compare function
 * Return: the index of the element or -1 if there is no match
 *         or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}
