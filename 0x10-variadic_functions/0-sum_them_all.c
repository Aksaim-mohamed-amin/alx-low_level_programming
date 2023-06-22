#include "variadic_functions.h"

/**
 * sum_them_all - Calculat the sum of all its parameters.
 *
 * @n: Number of parameters.
 *
 * Return: the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list param;

	va_start(param, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(param, int);

	va_end(param);

	return (sum);
}
