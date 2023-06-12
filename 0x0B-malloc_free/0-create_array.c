#include "main.h"

/**
 * create_array - Creates an array of chars, and initializes it with a specific
 *                char.
 *
 * @size: Size of the array
 * @c: Character to intialize the array with
 *
 * Return: Pointer to the array, and Null if the size is 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
