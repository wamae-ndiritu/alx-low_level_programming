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
	unsigned long int bit_mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	char bit_buffer[64];
	int len, i, count = 0;

	while (bit_mask > 0)
	{
		len = strlen(bit_buffer);
		if (n & bit_mask)
		{
			bit_buffer[len] = '1';
			bit_buffer[len + 1] = '\0';
		}
		else
		{
			bit_buffer[len] = '0';
			bit_buffer[len + 1] = '\0';
		}
		bit_mask >>= 1;
	}
	for (i = 0; i < len; i++)
	{
		if (bit_buffer[i] == '0')
		{
			count++;
		}
		else
			break;
	}
	if (count == 0)
		_putchar('0');
	for (i = count; i <= len && count > 0; i++)
	{
		_putchar(bit_buffer[i]);
	}
}
