#include <stdlib.h>

/**
 * _calloc - main function
 *
 * Description: 'allocate memory for an array using malloc'
 *
 * @nmemb: number of element you want to alocate
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, if nmemb or size equale to 0
 *         return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
