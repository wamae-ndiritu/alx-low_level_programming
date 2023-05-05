#include "main.h"

/**
 * set_bit - sets the vaue of a bit at an index to 1
 * @n: pointer to the bit to modify
 * @index: the index of the bit to modified
 *
 * Return: returns 1 is success,
 *	or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = sizeof(unsigned long int) * 8;

	if (index >= bit)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
