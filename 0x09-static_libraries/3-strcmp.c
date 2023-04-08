#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two string
 *
 * @s1: pointer to the string to be compared with
 * @s2: pointer to the string being compared
 *
 * Return: returns less than 0 if s1 < s2,
 * returns greater than 0 if s1 > s2
 * or 0 if the string are equal
 *
 */

int _strcmp(char *s1, char *s2)
{
	int compare_return;

	compare_return = strcmp(s1, s2);
	return (compare_return);
}
