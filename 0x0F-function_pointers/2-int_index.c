#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of elements
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: returns the index of the first element,
 *	-1 if no element matches or size less than or equal to 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
