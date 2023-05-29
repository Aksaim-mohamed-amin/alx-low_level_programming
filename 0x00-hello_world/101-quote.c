#include <unistd.h>

/**
 * main - Print to the screen without using printf() or puts()
 *        but by using the write() function ,
 *        that can write the error to the screen'
 *
 * Return: Always 1 to indecate there is an error
 */

int main(void)
{
	const char str[] = "and that piece of art is useful\" - ";
	const char str2[] = "Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, sizeof(str) - 1);
	write(STDERR_FILENO, str2, sizeof(str2) - 1);
	return (1);
}
