#include "dog.h"

/**
 * free_dog - Free a dog_t structur.
 *
 * @d: Pointer to a struct dog_t.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
