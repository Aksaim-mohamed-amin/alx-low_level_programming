/**
 * _strncpy - main function
 *
 * Description: 'Copy n characters from string src to dest'
 *
 * @src: the string to be copied
 * @dest: the resulte
 * @n: The number of character to copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
