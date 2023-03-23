#include "main.h"
/**
 * print_line - prints - character as many times as needed
 *
 * @n: times to print character -
 *
 * Return: returns no value
 */
void print_line(int n)
{
	if (n > 0)
	{
		int count = 0;

		while (count < n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
