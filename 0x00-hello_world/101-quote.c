#include <unistd.h>

/**
 * main - Entery point
 *
 * Description: 'this functon will print the output
 * without using printf or puts
 *
 * Return: Always 1 (indicating an error occurred)
 */
int main(void)
{
	const char msg1[] = "and that piece of art is useful\" - ";
	const char msg2[] = "Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg1, sizeof(msg1) - 1);
	write(STDERR_FILENO, msg2, sizeof(msg2) - 1);
	return (1);
}
