#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies up to n characters from
 * the string to another string
 *
 * @dest: pointer to the string where content will be copied to
 * @src: pointer to the string where content will be copied from
 * @n: the max characters to be copied from string pointed by src
 *
 * Return: returns a pointer to the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
