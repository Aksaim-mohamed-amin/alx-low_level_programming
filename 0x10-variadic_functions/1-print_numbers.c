#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers and a seperator, followed by a new line.
 *
 * @separator: Character to seperate numbers with.
 * @n: Number of numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
