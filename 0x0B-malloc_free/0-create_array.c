#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_array - creates an array of chars,
 *	and initializes it with specific char.
 * @size: the size of the array
 * @c: the character to initialize the array
 *
 * Return: returns NULL if size is 0 or if it fails,
 *	else returns a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *new_array = (char *)malloc(size);


	/* Initializing the array */
	memset(new_array, c, size);
	return (new_array);
}
