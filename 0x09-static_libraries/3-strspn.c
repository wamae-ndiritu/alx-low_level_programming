#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to the string with the
 *	to be scanned having string accept
 * @accept: pointer to the string of accept to be
 *	checked whether exists in s
 * Return: returns the no. of characters in s, which
 *	only consist of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);
	return (len);
}
