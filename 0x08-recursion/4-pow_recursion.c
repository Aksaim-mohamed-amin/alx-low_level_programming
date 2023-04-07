/**
 * _pow_recursion - main function
 *
 * Description: 'calculate the power of x to y'
 *
 * @x: number
 * @y: power
 *
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
