#include <stdio.h>

/**
 * first - competitive function likes to run first
 *
 * Return: Always 0.
 */
int __attribute__((constructor)) first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}
