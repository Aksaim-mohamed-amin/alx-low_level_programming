#include "dog.h"

/**
 * init_dog - main function
 * Description: 'Initiliaze a variable of type struct dog'
 * @d: Pointer to the struct dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
