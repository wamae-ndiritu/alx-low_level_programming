#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number whose bit is to be found
 * @index: the index of the bit you want to get
 *
 * Return: returns value of the bit at index,
 *	or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = sizeof(unsigned long int) * 8;

	if (index >= bit)
		return (-1);
	return ((n >> index) & 1);
}
