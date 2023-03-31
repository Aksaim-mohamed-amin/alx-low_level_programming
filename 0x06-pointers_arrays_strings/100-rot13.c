/**
 * rot13 -main function
 *
 * Description: 'Encodes a string using rot13'
 *
 * @s: String to encode
 *
 * Return: coded string
 */

char *rot13(char *s)
{
	int i, j;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}

	return (s);
}
