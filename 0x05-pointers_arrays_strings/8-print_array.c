#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an integer array
 *
 * @a: memory address pointing the array of intergers
 * @n: number of elements in the array to be prunted
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
