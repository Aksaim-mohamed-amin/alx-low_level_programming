#include "3-calc.h"

/**
 * get_op_func - Select the correct function to perform the operation
 *               asked by the user.
 *
 * @s: The operator passed as argument to the program.
 *
 * Return: Null if s doesnt match any of the 5 expaxted operaors.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_list[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, op_list[i].op) == 0)
			return (op_list[i].f);
		i++;
	}
	return (0);
}
