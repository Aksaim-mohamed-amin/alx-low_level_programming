#include <stdio.h>

/**
 * main - Entry pint
 *
 * Description: 'Print to the screen without using printf() or puts()
 * but by using the write() function , that can write the error to the screen'
 *
 * Return: Always 1 to indecate there is an error
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - ";
	char str2[] = "Dora Korpar, 2015-10-19";

	write(STDERR_FILENO, str, sizeof(str) - 1);
	write(STDERR_FILENO, str2 sizeof(str2) - 1);
	return (1);
}
