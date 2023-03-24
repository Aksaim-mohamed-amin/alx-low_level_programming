#include "main.h"

/**
* more_numbers -  function that prints numbers from 0 to 14, 10 times
*/
void more_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(49);
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
