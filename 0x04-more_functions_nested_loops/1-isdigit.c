#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: what is being checked
 *
 * Return: returns 1 if isdigit, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
