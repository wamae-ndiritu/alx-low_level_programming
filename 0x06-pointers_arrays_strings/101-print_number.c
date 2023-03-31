#include "main.h"

/**
 * print_number - print an interger
 * using _putchar
 *
 * @n: number to be printed
 *
 * Return: no value to be returned
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
	_putchar('\n');

}
