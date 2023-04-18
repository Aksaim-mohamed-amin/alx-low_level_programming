#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - main function
 * Description: Print struct dog
 * @d: Pointer to the struct you want to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");

		if (d->age >= 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");

		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
