#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: the string to be scanned
 * @needle: the substring that need to be located
 *	in string haystack
 * Return: returns a pointer to the begining of the
 *	located substring, or NULL if the substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *str;

	str = strstr(haystack, needle);
	return (str);
}
