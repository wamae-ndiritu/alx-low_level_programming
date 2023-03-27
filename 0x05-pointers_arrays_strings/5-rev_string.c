#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: string to be reversed
 *
 * Return: returns no value
 *
 */

void rev_string(char *s)
{
	int i;
	int str_len = strlen(s);

	for (i = 0; i < str_len / 2; i++)
	{
		char temp_character = s[i];

		s[i] = s[str_len - i - 1];
		s[str_len - i - 1] = temp_character;
	}
}
