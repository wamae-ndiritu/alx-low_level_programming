#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: the min value of the array
 * @max: the max value of the array
 *
 * Return: returns the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int size, i;
	int *num_arrays;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1; /* include min value */
	num_arrays = (int *)malloc(size * sizeof(int));
	if (num_arrays == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		num_arrays[i] = min;
		min++;
	}
	return (num_arrays);
}
