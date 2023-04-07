/**
 * infinte_add - main function
 *
 * Description: 'add two numbers , the numbers are giving as a string'
 *
 * @n1: first number
 * @n2: secend number
 * @r: the buffer used to stor the result
 * @size_r: size of the buffer r
 *
 * Return: the buffer r and 0 if the result cant be fit in the buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	long int i, j;
	long int size1 = 0, size2 = 0, num1 = 0, num2 = 0, res;
	char result[] = "0";

	for (i = 0; n1[i] != '\0'; i++)
	{
		size1++;
	}
	for (i = 0; n2[i] != '\0'; i++)
	{
		size2++;
	}

	for (i = 0; i < size1; i++)
	{
		num1 = num1 * 10 + (n1[i] + '0');
	}
	for (i = 0; i < size2; i++)
	{
		num2 = num2 * 10 + (n2[i] + '0');
	}
	res = num1 + num2;
	while (res > 0)
	{

	}

}
