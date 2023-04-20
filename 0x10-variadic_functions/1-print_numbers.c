#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - main function
 * Description: print numbers follwed by a new line
 * @seperator: what to seperate each numbers with
 * @n: number of numbers
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	/* Create the variadic list */
	va_list nums;

	/* Initialize the variadic list */
	va_start(nums, n);

	/* Print the numbers */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i < n - 1)
			printf("%s", seperator != NULL ? seperator : "");
	}

	printf("\n");

	/* Clear the variadic list */
	va_end(nums);
}
