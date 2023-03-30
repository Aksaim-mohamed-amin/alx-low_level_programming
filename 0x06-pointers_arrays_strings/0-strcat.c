/**
 * _strcat - main function
 *
 * Description: 'Concatenate two strings'
 *
 * @src: the string to be copied
 * @dest: the resulte
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	return (dest);
}
