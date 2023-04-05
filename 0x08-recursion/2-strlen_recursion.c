#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 *	by using recursion
 * @s: pointer to the string whose length is to be checked
 *
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (count + _strlen_recursion(s + 1));
}
