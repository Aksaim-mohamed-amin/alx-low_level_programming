#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 *
 * @format: List of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list list;
	char *str;

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;

		case 'i':
			printf("%d", va_arg(list, int));
			break;

		case 'f':
			printf("%f", va_arg(list, double));
			break;

		case 's':
			str = va_arg(list, char *);
			printf("%s", str == NULL ? "(nil)" : str);
			break;

		default:
			i++;
			continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(list);
}
