#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  A new type for a doog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOH_H */
