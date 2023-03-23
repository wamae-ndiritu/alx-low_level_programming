#include "main.h"
/**
 * print_most_numbers - a function to print all numbers
 *
 * Decription - prints all digit from 0 to 9
 * except 2 and 4
 *
 * Return: returns no value
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
