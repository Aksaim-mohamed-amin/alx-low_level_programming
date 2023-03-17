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
	char alphabet[] = "abcdefghigklmnopqrstuvwz";
	int i;

	for (i = 0 ; i < sizeof(alphabet) - 1; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
