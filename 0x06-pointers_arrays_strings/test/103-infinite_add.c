#include "main.h"

/**
 * infinite_add - Adds two numbers.
 *
 * @n1: First Number
 * @n2: Secend Number
 * @r: Buffer Where to store the result
 * @size_r: Size of the buffer r
 *
 * Return: Pointer to the buffer r or 0 if the buffer can fit the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1, len2, biggest, index = 0, sum, carry = 0;
	char tmp;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	biggest = len1 > len2 ? len1 : len2;

	if (biggest + 1 >= size_r)
		return (0);

	len1--;
	len2--;
	while (len1 >= 0 || len2 >= 0 || carry != 0)
	{
		sum = carry;

		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';

		carry = sum / 10;
		r[index++] = sum % 10 + '0';
	}

	r[index] = '\0';

	for (i = 0; i <= (index - 1) / 2; i++)
	{
		tmp = r[i];
		r[i] = r[index - 1 - i];
		r[index - 1 - i] = tmp;
	}
	return (r);
}

/**
 * _strlen - Calculate the lenght of a string.
 *
 * @str: String
 *
 * Return: Lenght of str
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}
