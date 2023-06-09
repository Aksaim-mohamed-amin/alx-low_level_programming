#include <stdio.h>

/**
 * main - Print the name of the programe
 *
 * @argc: Argument count
 * @argv: Argument vecteur
 *
 * Return: 0 Success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
