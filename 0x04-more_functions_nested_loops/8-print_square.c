#include "main.h"
/**
 * print_square- prints a square using # character
 *
 * @size: the size of square to be printed
 *
 * Return: returns no value
 */
void print_square(int size)
{
	if (size > 0)
	{
		int square_width = 0;
		int square_length = 0;

		while (square_length < size)
		{
			while (square_width < size)
			{
				_putchar('#');
				square_width++;
			}
			square_width = 0;
			_putchar('\n');
			square_length++;
		}
	}
	else
		_putchar('\n');
}
