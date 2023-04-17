#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize the a dog
 *
 * @d: the structure of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: Nothig.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
