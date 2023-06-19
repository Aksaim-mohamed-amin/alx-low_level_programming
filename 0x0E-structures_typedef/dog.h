#ifndef DOG_H
#define DOG_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Struct */
struct dog {
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Main Functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
