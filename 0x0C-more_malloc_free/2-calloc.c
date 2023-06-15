#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 *           and set the memory allocated to 0.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: NULL if nmemb or size is equal to 0, or if malloc fails
 *         else it returns a pointer to the array created.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
