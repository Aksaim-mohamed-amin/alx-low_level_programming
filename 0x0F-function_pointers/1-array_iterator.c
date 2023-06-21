#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element
 *                  of an array.
 *
 * @array: Array.
 * @size: Size of the array.
 * @action: Action to do.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
