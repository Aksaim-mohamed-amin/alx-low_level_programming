/**
 * _strcmp - main function
 *
 * Description: 'Compare two strings'
 *
 * @s1: First string
 * @s2: Secend string
 *
 * Return: 0 if s1 = s2, 0> if s1 > s2, 0< if s1 < s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int length1 = 0, length2 = 0;
	int length = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		length1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		length2++;
	}
	if (length1 >= length2)
	{
		length = length1;
	}
	else
	{
		length = length2;
	}
	for (i = 0; i < length; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
