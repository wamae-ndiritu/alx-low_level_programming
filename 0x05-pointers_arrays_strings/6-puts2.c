#include "main.h"
#include <string.h>

/**
 * puts2 - prints any other character in a string
 *
 * @str: memory address of the string to be used
 *
 * Return: returns no value
 *
 */

void puts2(char *str)
{
	int str_len = strlen(str);
	int i;

	for (i = 0; i <= str_len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
