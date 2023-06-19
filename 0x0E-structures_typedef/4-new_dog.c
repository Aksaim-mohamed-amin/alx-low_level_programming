#include "dog.h"

/**
 * new_dog - Create a new dog.
 *
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog info, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dog_name, *dog_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(dog);
		return (NULL);
	}

	_strcpy(name, dog_name);
	_strcpy(owner, dog_owner);

	dog->name = dog_name;
	dog->owner = dog_owner;
	dog->age = age;

	return (dog);
}
/**
 * _strlen - Calculate the lenght of a string.
 *
 * @str: String.
 *
 * Return: Lenght of str.
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
		;
	return (len);
}
/**
 * _strcpy - Copy a string.
 *
 * @src: Source.
 * @dst: Destination.
 */
void _strcpy(char *src, char *dst)
{
	int i;

	for (i = 0; src[i]; i++)
		dst[i] = src[i];
	dst[i] = '\0';
}
