#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: the structure of the dog to be printed
 *
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("%s\n", d->owner);
	}
	printf("Age: %f\n", d->age);
}
