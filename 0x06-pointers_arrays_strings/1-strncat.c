/**
 * _strncat - main function
 *
 * Description: 'Concatenate two strings'
 *
 * @src: the string to be copied
 * @dest: the resulte
 * @n: number of character to coy
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < n; i++)
	{
		dest[length] = src[i];
	}
	return (dest);
}
