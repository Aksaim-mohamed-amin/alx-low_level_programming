#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strs;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strs, char*);
		printf("%s", str == NULL ? "(nil)" : str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
