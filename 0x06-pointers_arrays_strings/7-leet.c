/**
 * leet -main function
 *
 * Description: 'Encodes a string to 1337
 *
 * @s: String to encode
 *
 * Return: coded string
 */

char *leet(char *s)
{
	char *c = s;

	while (*c)
	{
		if (*c == 'a' || *c == 'A')
		{
			*c = '0' + 4;
		}
		else if (*c == 'e' || *c == 'E')
		{
			*c = '0' + 3;
		}
		else if (*c == 'o' || *c == 'O')
		{
			*c = '0';
		}
		else if (*c == 't' || *c == 'T')
		{
			*c = '0' + 7;
		}
		else if (*c == 'l' || *c == 'L')
		{
			*c = '0' + 1;
		}
		c++;
	}
	return (s);
}
