#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the sring
 *
 * @dest: where the string will be copied to
 * @src: where the string is being copied from
 *
 * Description - Write a function that
 * copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * Return: returns the copied string
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}

