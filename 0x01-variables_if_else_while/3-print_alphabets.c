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
	char alphabet_low[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabet_upp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n = sizeof(alphabet_low) - 1;
	int m = sizeof(alphabet_upp) - 1;
	int i;

	for (i = 0 ; i < n; i++)
	{
		putchar(alphabet_low[i]);
	};
	for (i = 0 ; i < m; i++)
	{
		putchar(alphabet_upp[i]);
	}
	putchar('\n');
	return (0);
}
