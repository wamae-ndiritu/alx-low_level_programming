#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of
 *	a set of bytes
 * @s: pointer to the string to be scanned
 * @accept: pointer to the string containing
 *	the character to be matched
 * Return: returns a pointer to the character in s,
 *	that matches one of the string pointed by accept,
 *	or NULL if no such character/byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *str = s;

	str = strpbrk(s, accept);
	return (str);
}
