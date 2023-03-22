#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table
 * starting with 0
 *
 * @n: the n times table
 *
 * Return: returns no value
 */
void print_times_table(int n)
{
	int x, y, result, next_multiple;

	for (y = 0; y < n + 1; x++)
	{
		for (x = 0; x < n + 1; x++)
		{
			result = y * x;
			next_multiple = result + y;
			if (n <= 15 && n != 0)
			{
				if (x != n)
				{
					if (result < 10 && next_multiple < 10)
						printf("%d,   ", result);
					else if (result >= 10 || next_multiple >= 10)
					{
						if (result >= 100 || next_multiple >= 100)
							printf("%d, ", result);
						else
							printf("%d,  ", result);
					}
				}	
			}
		}
	}
}
