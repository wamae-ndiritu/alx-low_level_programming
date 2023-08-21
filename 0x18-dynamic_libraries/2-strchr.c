#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: pointer to the string expected to contain
 *	the character
 * @c: the character to be located
 *
 * Return: returns a pointer to the first occcurence
 *	of the character or, NULL if not found
 */

char *_strchr(char *s, char c)
{
	char *str = s;

	str = strchr(s, c);
	return (str);
}
