#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry piont
 *
 * Description: 'print the alphabit in lowercase using putchar'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char low_letter = 'a';
	char upp_letter = 'A';

	for (; low_letter <= 'z'; low_letter++)
	{
		putchar(low_letter);
	};
	for (; upp_letter <= 'Z'; upp_letter++)
	{
		putchar(upp_letter);
	}
	putchar('\n');
	return (0);
}
