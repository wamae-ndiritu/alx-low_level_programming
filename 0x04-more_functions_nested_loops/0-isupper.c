#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks whether a character is uppercase or not
 *
 * @c: character to be checked
 *
 * Return: returns 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
