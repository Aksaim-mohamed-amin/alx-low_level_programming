#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@n: number to be checked
 *
 * Return: absolute value of integer
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
