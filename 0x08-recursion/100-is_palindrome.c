#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_palindrome - checks whether a string is a palindrome
 *
 * @s: pointer to the string to be checked
 *
 * Return: returns 1, if the string is a palindrome,
 *	0 otherwise
 */

int is_palindrome(char *s)
{
	int str_len = strlen(s);
	int return_value;
	char *substr;

	if (str_len <= 1)
	{
		/* a string with 1 character, or empty is a palindrome */
		return (1);
	}
	if (s[0] != s[str_len - 1])
	{
		/* differnt 1st and last character */
		return (0);
	}
	substr = malloc(str_len - 1);
	memcpy(substr, &s[1], str_len - 2);
	substr[str_len - 2] = '\0';
	(return_value = is_palindrome(substr));
	free(substr);
	return (return_value);

}
