#include <ctype.h>
#include "main.h"
/**
 * _isalpha -checks whether acharacter is alphabet
 *
 * @c: character to be checked
 *
 * Description - check if a character is
 * an alphabet or not
 *
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
