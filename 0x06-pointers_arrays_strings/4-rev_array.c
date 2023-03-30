#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of n array of integers
 *
 * @a: pointer to the array of integers to be reversed
 * @n: number of elements in the array
 *
 * Return: returns no value
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = 0;

	for (i = 0; i <= n - 1; i++)
	{
		while (j < n - i - 1)
		{
			int temp_item;

			temp_item = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp_item;
			j++;
		}
		j = 0;
	}
}
