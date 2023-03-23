#include "main.h"
/**
 * jack_bauer - main function
 *
 * Description: 'Print the time from 00:00 to 23:59'
 */
void jack_bauer(void)
{
	int m, s;

	for (m = 0; m < 24; m++)
	{
		for (s = 0; s < 60; s++)
		{
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar(':');
			_putchar('0' + s / 10);
			_putchar('0' + s % 10);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
