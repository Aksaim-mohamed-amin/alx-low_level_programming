#include "dog.h"
/**
* init_dog - Initialize a variable of type struct dog.
*
* @d: Pointer to the structer.
* @name: Dog name.
* @age: Dog Age.
* @owner: Dog owner.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
