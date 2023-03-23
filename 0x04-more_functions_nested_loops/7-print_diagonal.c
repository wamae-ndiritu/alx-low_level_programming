#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal
 *
 * @n: number of diagonal lines to be printed
 *
 * Return: returns no value
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int count = 0;
		int space_count = 0;

		while (count < n)
		{
			while (space_count < count)
			{
				_putchar(' ');
				space_count++;
			}
			_putchar('\\');
			_putchar('\n');
			space_count = 0;
			count++;
		}
	}
	else
		_putchar('\n');
}

