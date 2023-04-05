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
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
