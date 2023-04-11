#include <stdlib.h>

/**
 * create_array - main function
 *
 * Description: ' creates an array of chars, and initializes it with a specific
 *                char'
 *
 * @size: size of the array
 * @c: character to fill the array with
 *
 * Return: Pointer to the array and NULL if size is 0 or if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	int i;
	char *p = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}
