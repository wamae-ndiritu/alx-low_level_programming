#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as parameter
 * @array: pointer to an arrays of elements
 * @size: the size of the array
 * @action: pointer to the function to be called
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
