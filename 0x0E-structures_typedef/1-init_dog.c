#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function initializes a variable
 * @d: struct dog to initialize
 * @name: input value
 * @age: input value
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
