#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates string1 with at most n-bytes of str2
 *
 * @dest: string to be concatenated
 * @src: string to be appended to string
 * @n: maximum bytes of string src that will be appended to
 * string dest
 *
 * Return: returns a pointer to concatenated string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
