#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * description: 'prints the minimum number of coins to make change for an
 *               amount of money'
 *
 * @argc: number of the argument passed to the programe
 * @argv: array of the numbers passed to the program
 *
 * Return: 0 (Succes), 1 (Error)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int money = atoi(argv[1]);

		if (money <= 0)
		{
			printf("0\n");
		}
		else
		{
			int i, coins = 0;
			int change[] = {25, 10, 5, 2, 1};
			int change_size = sizeof(change) / sizeof(change[0]);

			for (i = 0; i < change_size; i++)
			{
				if (money >= change[i])
				{
					coins = coins + money / change[i];
					money = money % change[i];
				}
			}
			printf("%d\n", coins);
		}
	}
	return (0);
}
