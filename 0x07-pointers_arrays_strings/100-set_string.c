#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: double pointer to a string, holds the address of
 *	another pointer that points to a string
 * @to: pointer pointing to be set
 *
 * Return: returns no value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
