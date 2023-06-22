#include "3-calc.h"

/**
 * op_add - Calculate the sum of two integers.
 *
 * @a: First integer.
 * @b: Secend integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculate the difference of two integers.
 *
 * @a: First integer.
 * @b: Secend integer.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calculate the product of two integers.
 *
 * @a: First integer.
 * @b: Secend integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calculate the division of two integers.
 *
 * @a: First integer.
 * @b: Secend integer.
 *
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculate the reminder of the division of two integers.
 *
 * @a: First integer.
 * @b: Secend integer.
 *
 * Return: The reminder of a devided by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
