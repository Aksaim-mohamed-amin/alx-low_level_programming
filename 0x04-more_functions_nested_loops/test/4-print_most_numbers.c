#include "main.h"

/**
* print_most_numbers -  function that prints most of numbers
*/
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
