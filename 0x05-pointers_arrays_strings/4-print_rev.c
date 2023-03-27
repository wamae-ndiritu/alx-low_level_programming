#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in the reverse order
 *
 * @s: the string to be printed
 *
 */

void print_rev(char *s)
{
	int str_len = strlen(s);
	int i;

	for (i = str_len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
