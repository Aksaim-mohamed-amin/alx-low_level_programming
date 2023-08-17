#include <stdio.h>

int is_palindrome(int n);

/**
 * main - Find the largest palindrom number from the product of 3-digit numbers
 *        and store the result in a file named 102-result.
 *
 * Return: 0 Success, 1 if it Fails.
 */
int main(void)
{
	int i, j, num, biggest = 0;

	for (i = 999; i >= 100; i--)
	{
		for (j = 999; j >= 100; j--)
		{
			num = i * j;
			if (is_palindrome(num))
				if (num > biggest)
					biggest = num;
		}
	}

	FILE *file = fopen("102-result", "w");
	if (file == NULL)
	{
		printf("Error creating the file\n");
		return (1);
	}

	fprintf(file, "%d", biggest);
	fclose(file);

	return (0);
}

/**
 * reverse - Reverse a number.
 * @n: Number to reverse.
 *
 * Return: The reversed number.
 */
int is_palindrome(int n)
{
	int num = n, rev = 0;

	while (num)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	return (rev == n);
}
