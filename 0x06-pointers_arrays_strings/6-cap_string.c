/**
 * cap_string - main function
 *
 * Description: 'Capitalizes all words of a string'
 *
 * @s: String to capitalizes
 *
 * Return: capitale string
 */

char *cap_string(char *s)
{
	int i;
	char *c = s;

	if (*c <= 122 && *c >= 97)
	{
		*c -= 32;
	}

	for (i = 1; c[i] != '\0'; i++)
	{
		if (c[i] <= 122 && c[i] >= 97)
		{
			if (c[i - 1] == ',' || c[i - 1] == ';' ||
			    c[i - 1] == '.' || c[i - 1] == '!' ||
			    c[i - 1] == '?' || c[i - 1] == '"' ||
			    c[i - 1] == '(' || c[i - 1] == ')' ||
			    c[i - 1] == '{' || c[i - 1] == '}' ||
			    c[i - 1] == ' ' || c[i - 1] == '\n' ||
			    c[i - 1] == '\t')
			{
				c[i] -= 32;
			}
		}

	}

	return (s);
}
