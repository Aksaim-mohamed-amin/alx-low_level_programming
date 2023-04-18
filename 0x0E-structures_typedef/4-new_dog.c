#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - main function
 * Description: create a new dog profile
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the new dog profile
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/* allocate memory for the new dog structur */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* allocate memory for the new name and new owner */
	new_name = malloc(sizeof(char) * (_strlen(name) + 1));
	new_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(new_dog);
		return (NULL);
	}

	/* copy the name and the owner strings into a new buffer */
	_strcopy(new_name, name);
	_strcopy(new_owner, owner);

	/* initialize the new dog */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	/* Return the new dog profile */
	return (new_dog);
}

/**
 * _strlen - secendary function
 * Description: calculat the length of a string
 * @str: the string you want to calculat
 * Return: the length of a string
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}

/**
 * _strcopy - secendary function
 * Description: copy a string into another buffer
 * @dest: where to put the string
 * @src: source to copy from
 * Return: Pointer to the new buffer
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	return (dest);
}
