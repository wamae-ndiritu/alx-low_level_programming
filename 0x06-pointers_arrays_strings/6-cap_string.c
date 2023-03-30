#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalize all words
 *
 * @str: pointer pointing to the string whose
 * words are to be capitalized
 *
 * Return: the pointer to the capitalized string
 */

char *cap_string(char *str)
{
	int capitalize_next_letter = 1;
	char *capitalize = str;

	while (*capitalize)
	{
		if (isspace(*capitalize) || ispunct(*capitalize))
		{
			capitalize_next_letter = 1;
		}
		else if (capitalize_next_letter)
		{
			*capitalize = toupper(*capitalize);
			capitalize_next_letter = 0;
		}
		capitalize++;
	}
	return (str);
}
