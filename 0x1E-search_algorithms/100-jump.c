#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array using
 *		the jump search algorithm
 * @array: pointer to an array of pointer
 * @size: no. of elements in the array
 * @value: the value to be searched
 *
 * Return: returns the first index where value is located
 *	or -1 if value not present in array or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t prev = 0, i;

	/* Check for NULL array */
	if (array == NULL)
		return (-1);
	/* Calculate the jump step using the square root of the size */
	jump = (size_t)sqrt(size);

	/*  Perform the jump search */
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		/* Move to the next block */
		prev += jump;

		/* If next block exceeds the array size */
		/* perform a linear search in the remaining element*/
		if (prev >= size)
		{
			prev = size - 1;
			break;
		}
	}

	/* Perform linear search in the block */
	for (i = prev - jump; i <= (prev < size ? prev : size - 1); ++i)
	{
		if (array[i] == value)
			return ((int)i);
	}

	/* value is not present in the array */
	return (-1);
}
