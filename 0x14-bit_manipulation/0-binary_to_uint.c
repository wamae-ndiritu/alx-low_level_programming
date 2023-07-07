#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * power - gets the power of a number
 * @base: the number to be raised to a power
 * @exponent: the power raised
 *
 * Return: returns the pproduct
 */

unsigned int power(unsigned int base, unsigned int exponent)
{
	unsigned int result = 1, i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string containing binary
 *	number ot be converted
 * Return: returns the converted number, or 0 if
 *	there is one or more chars in the string b
 *	that is not 0 or 1,
 *	or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	const char *binary_num;
	unsigned int binary_sum = 0;
	int binary_len, i;

	if (b == NULL)
		return (0);
	binary_num = b;
	binary_len = strlen(binary_num);
	for (i = 0; i < binary_len; i++)
	{
		if (binary_num[i] != '0' && binary_num[i] != '1')
		{
			return (0);
		}
	}
	for (i = binary_len - 1; i >= 0; i--)
	{
		if (binary_num[i] == '1')
		{
			unsigned int power_res, dif;

			dif = binary_len - i - 1;
			power_res = power(2, dif);
			binary_sum += power_res;
		}
	}
	return (binary_sum);
}
