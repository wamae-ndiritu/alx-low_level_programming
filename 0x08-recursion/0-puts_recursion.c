#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string using
 *	puts function being called recursively
 * @s: pointer to the string to be printed
 * Return: returns no value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return; /* breaks the recursion */
	}
	_putchar(*s);
	/* calls itself with pointer to the next character */
	_puts_recursion(s + 1);
}
