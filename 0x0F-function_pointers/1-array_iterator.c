#include <stddef.h>

/**
 * array_iterator - main function
 * Description: call a function on all the element of an arrau
 * @array: array to work on it element
 * @size: size of the array
 * @action: function that provide the action to do on each element of th array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
