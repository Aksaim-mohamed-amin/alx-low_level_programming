/**
 * _strcpy - main function
 *
 * Description: 'Copy string from src to dest'
 *
 * @dest: where you want to store the string
 * @src: the original string
 *
 * Return: the copy of the string dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
