/**
 * _memset - main function
 *
 * Description: 'fill memory with a constant byte'
 *
 * @s: memory area
 * @b: the constant to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
