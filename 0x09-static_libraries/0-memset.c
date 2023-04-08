#include "main.h"
#include <string.h>

/**
 * _memset - fills a certain number of bytes
 *	of a memory area with a character
 *
 * @s: pointer to the string that some of its bytes will
 *	be set to the character b
 * @b: the character that will be set to the specified bytes
 *	of the memory
 * @n: the number of bytes that the function will fill with
 *	a character
 *
 * Return: returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	memset(s, b, n);
	return (str);
}
