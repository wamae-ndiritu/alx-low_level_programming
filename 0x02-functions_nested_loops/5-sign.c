#include "main.h"
/**
 * print_sign - checks the sign
 *
 * @n: the number to be checked
 *
 * Description - checks whether a number is greater
 * than 0, thus positive, 0 if equal to 0
 * and negative if less than 0
 *
 * Return: return 1 if positive
 * 0 if 0, and -1 if negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}

