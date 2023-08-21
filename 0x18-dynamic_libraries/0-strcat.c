#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: the string to be concatenated to
 * @src: the string that is appended to dest
 *
 * Return: returns a pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
