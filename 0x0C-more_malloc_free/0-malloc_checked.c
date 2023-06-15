#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and exit with 98 if it fails.
 *
 * @b: Number of bytes to allocate.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
