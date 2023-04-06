/**
 * _memset - main function
 *
 * Description: 'Fills memory with a constant byte'
 *
 * @s: the memory area you want to fill
 * @b: constant you want to use to fill the memory
 * @n: number of byte you want to fill
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
