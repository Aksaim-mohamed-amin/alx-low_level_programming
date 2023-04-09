#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print the number of arguments passed tothe program'
 *
 * return: 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
