#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *	of a square matrix of integers
 * @a: pointer to the 2D array/matrix
 * @size: the dimensions of the 2D array
 *
 * Return: returns no value
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag_1_sum = 0, diag_2_sum = 0;
	/**
	 * I realized that the pointer *a is being casted to integer pointer before
	 * passed as the argument, and therefore the method
	 * could not access a[i][j], we need to usepointer arithmetic
	 * for (i = 0; i < size; i++)
	 * {
	 *	for (j = 0; j < size; j++)
	 *	{
	 *		if (i == j)
	 *		{
	 *			int element = a[i][j];
	 *			diag_1_sum += element;
	 *		}
	 *	}
	 * }i = 0;
	 * j = 0;
	 * for (i = 0; i < size; i++)
	 * {
	 *	for (j = 0; j < size; j++)
	 *		{
	 *			int temp_sum;
	 *			temp_sum = i + j;
	 *			if (temp_sum == i)
	 *			{
	 *				int element = a[i][j];
	 *				diag_2_sum += element;
	 *			}
	 *		}
	 * }
	 */
	for (i = 0; i < size; i++)
	{
		diag_1_sum += *(a + i * size + i);
		diag_2_sum += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", diag_1_sum, diag_2_sum);
}
