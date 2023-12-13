#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - function to search for a value using the
 *		binary search algorithm
 * @array: pointer to an array of integer
 * @size: no. of elements in the array
 * @value: the value being searched for
 *
 * Return: returns the index where the value is located,
 *	-1 if value not present in array or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = (int)size - 1;

	/* Check for NULL array */
	if (array == NULL)
		return (-1);
	/* Perform binary search */
	while (low <= high)
	{
		/* Calculate the middle index */
		int mid = (low + high) / 2;
		int i;

		/* Print the current subarray being searched */
		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d", array[i]);
			if ((int)i != high)
				printf(", ");
		}
		printf("\n");

		/* Check if middle element is the target value */
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			/* If value is greater, search in the right half */
			low = mid + 1;
		}
		else
		{
			/* If value is smaller, search in the left half */
			high = mid - 1;
		}
	}

	/*value is not present in the array */
	return (-1);
}
