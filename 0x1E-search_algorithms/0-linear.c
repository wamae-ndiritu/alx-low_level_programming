#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function to search for a value in an array
 *		using linear search algo
 * @array: pointer to the first element of an array
 * @size: no. of elements in array
 * @value: the value to search for
 * Return: returns the fist index where the value is located
 *	or -1 if value not present in array or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check for NULL array */
	if (array == NULL)
		return (-1);

	/* Iterate through the array */
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/* Check current element matches the value */
		if (array[i] == value)
			return ((int)i);
	}

	/* value is not present in the array */
	return (-1);
}
