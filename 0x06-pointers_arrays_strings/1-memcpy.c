/**
 * _memcpy - main function
 *
 * Description: 'copies memory area'
 *
 * @dest: destination to copy to
 * @src: the source to copy from
 * @n: number of bytes to copy
 *
 * Return: a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
