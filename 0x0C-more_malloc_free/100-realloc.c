#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated with a call to
 *       malloc: malloc(old_size).
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes of the new memory block.
 *
 * Return: Pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		new_ptr[i] = *((char *)(ptr) + i);

	free(ptr);

	return (new_ptr);
}
