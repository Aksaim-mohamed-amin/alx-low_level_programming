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
	const char msg[] = "and that piece of art is useful\""
"Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, msg, sizeof(msg) - 1);
	return (1);
}
