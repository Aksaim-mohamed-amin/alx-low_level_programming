#include <stdarg.h>

/**
 * sum_them_all - main function
 * Description: return the sum of all parameters
 * @n: number of paramters
 * Return: the sum of all paramters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	/* Create a variadic list */
	va_list nums;

	/* check if number of argument is bigger than 0 */
	if (n <= 0)
		return (0);

	/* Initialize the variadic list */
	va_start(nums, n);

	/* iterate through the variadic list and add the nums to the sum */
	for (i = 0; i < n; i++)
		sum = sum + va_arg(nums, int);

	/* Clear the cariadic list */
	va_end(nums);

	return (sum);
}
