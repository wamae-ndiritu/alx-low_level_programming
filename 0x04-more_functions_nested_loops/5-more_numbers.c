#include "main.h"
/**
 * more_numbers - prints 0 to 14, 10 times
 *
 * Description - to print the numbers 10 times
 * we will nest a loop inside another
 *
 * Return: returns no value
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else
				_putchar(j + '0');
		}
		_putchar('\n');
	}
}
