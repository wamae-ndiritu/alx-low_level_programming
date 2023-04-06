#include "main.h"

/**
 * wildcmp - compares two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: returns 1 if strings are identical,
 *	0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (0);
	}
	else
	{
		if (*s1 == '\0')
		{
			return (*s2 == '\0');
		}
		if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		else
		{
			return (0);
		}
	}
}
