/**
 * _strlen - main function
 *
 * Description: 'find the lenght of a string'
 *
 * @s: string passed to function
 *
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i, r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		r++;
	}
	return (r);
}
