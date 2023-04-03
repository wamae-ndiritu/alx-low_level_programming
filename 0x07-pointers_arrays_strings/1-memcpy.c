#include "main.h"
#include <string.h>

/**
 * _memcpy - copies n-bytes from memory area
 *	src to memory area dest
 * @dest: pointer to the memory area where
 *	where bytes will be copied to
 * @src: pointer to the memory area where
 *	bytes will be copied from
 * @n: number of bytes to be copied
 *
 * Return: returns a ointer to the memory address dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *str = dest;

	memcpy(dest, src, n);
	return (str);
}
