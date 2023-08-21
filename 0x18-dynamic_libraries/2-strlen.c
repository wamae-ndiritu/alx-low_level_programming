#include "main.h"
#include <string.h>

/**
 * _strlen - checks the length of a string
 *
 * @s: address of the string to be checked
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int str_length;

	str_length = strlen(s);
	return (str_length);
}
