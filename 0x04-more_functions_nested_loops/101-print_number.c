#include "main.h"
/**
 * print_number - prints an integer using _putchar
 *
 * @n: integer to be printed
 *
 * Return: returns no value
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
		print_number(n / 10); /* calling the function itself: recursion */
	}
	_putchar(n % 10 + '0');
}
