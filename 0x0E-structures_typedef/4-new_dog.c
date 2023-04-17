#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new instance of the dog
 *
 * @name: the dog's name
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: returns a pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name;
	char *new_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	/* allocating memory for copy of name and owner */
	new_name = (char *)malloc((strlen(name) + 1) * sizeof(char));
	new_owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));
	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(dog);
		return (NULL);
	}
	/* copy name & owner */
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}
