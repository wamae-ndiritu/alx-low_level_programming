#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second half of the string
 *
 * @str: memory address of the string whose second
 * half is to be printed
 *
 * Return: returns no value
 *
 */

void puts_half(char *str)
{
	int str_len = strlen(str);
	int i;
	int n;

	if (str_len % 2 == 0)
	{
		n = (str_len / 2);
	}
	else
	{
		n = (str_len - 1) / 2;
	}

	for (i = n; i <= str_len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
