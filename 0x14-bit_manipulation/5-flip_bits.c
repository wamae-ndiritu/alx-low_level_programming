#include "main.h"

/**
 * flip_bits - returns the number of bits you woud
 * need to flip to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int bit_count = 0;

	diff = n ^ m;
	while (diff)
	{
		bit_count += (diff & 1);
		diff >>= 1;
	}
	return (bit_count);
}
