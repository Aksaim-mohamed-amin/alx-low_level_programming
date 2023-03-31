/**
 * _strcmp
 *
 * Description: 'compare two strings'
 *
 * @s1: first string
 * @s2: secend string
 *
 * Return: 0 if the strings are equals, 0 > if s1 > s2, and 0 < is s1 < s2'
 */

int _strcmp(char *s1, char *s2)
{
	int i, value1 = 0, value2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		value1 += s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		value2 += s2[i];
	}
	return (value1 - value2);
}
