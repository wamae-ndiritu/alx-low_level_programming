#include "main.h"
/**
 * print_numbers - prints 0 to 9 followed by new line
 *
 * Description - loops through to print all digits
 *
 * Return: returns no value
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
