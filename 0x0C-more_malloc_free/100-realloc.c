#include <stdlib.h>

/**
 * _realloc - main function
 *
 * Description: 'reallocates a memory block using malloc and free'
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size alocated for ptr in bytes
 * @new_size: is the new size in bytes
 *
 * Return: the pointer to the new function
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
