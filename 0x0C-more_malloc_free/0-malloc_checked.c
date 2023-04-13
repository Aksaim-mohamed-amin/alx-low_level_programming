#include <stdlib.h>

/**
 * malloc_checked - main function
 *
 * Description: 'allocate memory using malloc'
 *
 * @b: size of memory to allocate
 *
 * Return: pointer to the allocated memory , and 98 if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
