/**
 * string_toupper - main function
 *
 * Description: 'Change all the lowwercase letters of a string to uppercase'
 *
 * @s: String to replace
 *
 * Return: The uppercase of a letter
 */

char *string_toupper(char *s)
{
	char *c = s;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c -= 32;
		}
		c++;
	}
	return (s);
}
