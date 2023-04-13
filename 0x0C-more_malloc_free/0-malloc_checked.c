#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of the memory to be alocated
 *
 * Return: returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *memory_space;

	memory_space = (void *)malloc(b);
	if (memory_space == NULL)
	{
		exit(98);
	}
	return (memory_space);
}
