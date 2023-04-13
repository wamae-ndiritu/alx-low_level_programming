#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the existing memory block
 * @old_size: size of the initial memory block
 * @new_size: the size to resize the memory block
 *
 * Return: returns a pointer to the new alocated
 *	memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_memory = malloc(new_size);
	if (new_memory == NULL)
	{
		return (NULL);
	}
	memcpy(new_memory, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (new_memory);
}
