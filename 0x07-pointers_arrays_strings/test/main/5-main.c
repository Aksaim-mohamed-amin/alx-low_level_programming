#include "main.h"
#include <stdio.h>
 #include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "s";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
