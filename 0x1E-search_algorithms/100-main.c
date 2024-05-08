#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		5, 7, 10, 25, 30, 51, 66, 77, 80, 91
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 5, jump_search(array, size, 5));
	printf("Found %d at index: %d\n\n", 7, jump_search(array, size, 7));
	printf("Found %d at index: %d\n\n", 10, jump_search(array, size, 10));
	printf("Found %d at index: %d\n\n", 25, jump_search(array, size, 25));
	printf("Found %d at index: %d\n\n", 30, jump_search(array, size, 30));
	printf("Found %d at index: %d\n\n", 51, jump_search(array, size, 51));
	printf("Found %d at index: %d\n\n", 66, jump_search(array, size, 66));
	printf("Found %d at index: %d\n\n", 77, jump_search(array, size, 77));
	printf("Found %d at index: %d\n\n", 80, jump_search(array, size, 80));
	printf("Found %d at index: %d\n\n", 91, jump_search(array, size, 91));
	printf("Found %d at index: %d\n\n", -5, jump_search(array, size, -5));
	printf("Found %d at index: %d\n", 999, jump_search(array, size, 999));
	return (EXIT_SUCCESS);
}
