#include <stdlib.h>

/**
 * _realloc - main function
 *
 * Description: 'reallocates a memory block using malloc and free'
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size alocated for ptr in bytes
 * @new_size: is the new size in bytes
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
