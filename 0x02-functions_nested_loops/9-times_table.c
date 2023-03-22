#include <stdio.h>
#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Description - prints a 9 times table
 *
 * Return: returns no value
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int product;

	while (y < 10)
	{
		while (x < 10)
		{
			product = y * x;
			if (product >= 10)
			{
				_putchar(product / 10 + '0'); /* getting the tens */
				_putchar(product % 10 + '0'); /* ones of product */
				if (x < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(product + '0');
				if (x < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			x++;
		}
		_putchar('\n');
		x = 0;
		y++;
	}
}
