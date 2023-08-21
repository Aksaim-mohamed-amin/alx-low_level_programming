/**
 * _memcpy - main function
 *
 * Description: 'Copies memory area'
 *
 * @dest: where to copy to
 * @src: where to copy from
 * @n: number og bytes to copy
 *
 * Return: pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
