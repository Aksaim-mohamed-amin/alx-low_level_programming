/**
 * factorial - main function
 *
 * Description: 'calculate the facotrial of a number'
 *
 * @n: number giving to the function
 *
 * Return: factorial of n (!n)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
