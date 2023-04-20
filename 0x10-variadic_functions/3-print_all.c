#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - main function
 * Description: print all type of data
 * @format: format to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;

	va_list data;

	va_start(data, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(data, int));
			break;

		case 'i':
			printf("%d", va_arg(data, int));
			break;

		case 'f':
			printf("%f", va_arg(data, double));
			break;

		case 's':
			str = va_arg(data, char *);
			printf("%s", str != NULL ? str : "(nil)");
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

	va_end(data);
}
