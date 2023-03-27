#include "main.h"
/**
 * swap_int - takes 2 integers and swaps them
 *
 * @a: first interger to be swapped
 * @b: second integer to be swappped
 *
 * Return: returns no value
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
