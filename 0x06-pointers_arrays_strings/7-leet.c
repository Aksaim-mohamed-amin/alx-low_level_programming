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
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = code[j];
			}
		}
	}

	return (s);
}
