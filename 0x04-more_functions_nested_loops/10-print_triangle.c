#include "main.h"
/**
 * print_triangle - prints a triangle, followed by new line
 *
 * @size: size of the triangle
 *
 * Return: returns no valeu
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int space_count;
		int height = 1;
		int i, j;

		while (height <= size)
		{
			space_count = size  - height;
			for (i = 0; i < space_count; i++)
			{
				_putchar(' ');
			}
			for (j = 0; j < height; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			height++;
		}
	}
	else
		_putchar('\n');
}
