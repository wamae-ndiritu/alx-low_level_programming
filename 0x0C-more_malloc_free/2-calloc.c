#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements to be stored in the memory
 * @size: size of the element
 *
 * Return: returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arry;

	if ((int)nmemb == 0 || (int)size == 0)
	{
		return (NULL);
	}
	arry = (void *)calloc(nmemb, size);
	if (arry == NULL)
	{
		return (NULL);
	}
	return (arry);

}
