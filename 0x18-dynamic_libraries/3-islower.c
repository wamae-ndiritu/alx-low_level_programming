#include <ctype.h>
/**
 * _islower - checks if the character is a lowercase
 * @c: character to be checked
 *
 * Return: returns 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
