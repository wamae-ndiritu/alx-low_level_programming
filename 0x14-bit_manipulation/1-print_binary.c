#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number whose binary is to be converted
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_mask = 1UL;

	bit_mask <<= (sizeof(bit_mask) * 8 - 1);
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (bit_mask > 0)
	{
		if (bit_mask & n)
			break;
		bit_mask >>= 1;
	}
	while (bit_mask > 0)
	{
		if (n & bit_mask)
			_putchar('1');
		else
			_putchar('0');
		bit_mask >>= 1;
	}
}
