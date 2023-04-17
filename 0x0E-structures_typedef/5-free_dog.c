#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory block allocated for dogs
 *
 * @d: pointer to an instance of the dog
 *
 * Return: returns Nothing.
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
