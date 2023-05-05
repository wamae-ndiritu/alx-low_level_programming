#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the bit to be modified
 * @index: index of the bit to be modified
 *
 * Return: returns 1 if success, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_len = sizeof(unsigned long int) * 8;

	if (index >= bit_len)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
