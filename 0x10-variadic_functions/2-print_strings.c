#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - main function
 * Description: print string follwed by a new line
 * @separator: string seperator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	/* Cereate vardiac list */
	va_list strs;

	/* Initialize the vardiac list */
	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char *);

		printf("%s", str != NULL ? str : "(nil)");

		if (i < n - 1)
			printf("%s", separator != NULL ? separator : "");
	}
	printf("\n");

	/* Clear the vardiac list */
	va_end(strs);
}
