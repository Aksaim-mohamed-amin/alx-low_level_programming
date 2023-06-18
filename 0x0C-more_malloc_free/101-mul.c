#include "main.h"

/**
 * main - Multiply two numbers
 *
 * @ac: Arguments count
 * @av: Argument vecteur
 *
 * Return: 0 (Success), if it fails exit with a status code of 98.
*/
int main(int ac, char **av)
{
	char *num1, *num2, *res;

	num1 = av[1];
	num2 = av[2];

	if (ac != 3 || is_num(num1) == -1 || is_num(num2) == -1)
		print_exit("Error", 98);

	if (is_zero(num1) == 0 || is_zero(num2) == 0)
	{
		print_exit("0", 0);
		return (0);
	}

	res = mul(num1, num2);

	print_exit(res, 0);

	free(res);

	return (0);
}
/**
 * mul - Multiply two numbers which are giving as a string,
 *       using strightforward method
 *
 * @num1: First number.
 * @num2: Secend number.
 *
 * Return: Multiplication of num1 by num2.
*/
char *mul(char *num1, char *num2)
{
	int i, j, index, tmp, carry, len1, len2;
	char *result;

	len1 = str_len(num1);
	len2 = str_len(num2);

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		print_exit("Error allocating memory", 99);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1, index = i + len2; j >= 0; j--, index--)
		{
			tmp = (num1[i] - '0') * (num2[j] - '0') + (result[index] - '0') + carry;
			carry = tmp / 10;
			result[index] = tmp % 10 + '0';
		}
		result[index] += carry;
	}

	i = 0;
	while (result[i] == '0')
		i++;
	if (i > 0)
	{
		for (j = 0; j <= len1 + len2 - i; j++)
			result[j] = result[j + i];
	}

	return (result);
}
/**
 * is_zero - Check if a number is 0 or not.
 *
 * @num: Number to check
 *
 * Return: 0 if it a zero , 1 if not.
 */
int is_zero(char *num)
{
	int i;

	for (i = 0; num[i]; i++)
		if (num[i] != '0')
			return (1);
	return (0);
}
/**
 * is_num - Check is a string is a number or not
 *
 * @str: String to check
 *
 * Return: 0 if the string is a number, -1 if the strinf contain a character
*/
int is_num(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		if (str[i] < 48 || str[i] > 57)
			return (-1);
	return (0);
}
/**
 * str_len - Calculat the lenght of a string
 *
 * @str: String
 *
 * Return: Lenght of str
*/
int str_len(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;

	return (len);
}
/**
 * print_exit - Print a string follwed by a new line using _putchar
 *             and exit with a status code if the code is not 0.
 *
 * @str: String to print
 * @code: Code to exit the programe with it
 */
void print_exit(char *str, int code)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');

	if (code != 0)
		exit(code);
}
