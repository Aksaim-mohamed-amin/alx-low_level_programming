#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * free_dog - main function
 * Description: Free the aloocated space for dog struct
 * @d: pointer to the struct to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
