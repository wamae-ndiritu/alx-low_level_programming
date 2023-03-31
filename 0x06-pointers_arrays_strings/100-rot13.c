#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rot13 - encodes a string using rot13
 *
 * @str: pointer to the string to be converted
 *
 * Return: returns a pointer to a string that
 * has been encoded
 */

char *rot13(char *str)
{
	int str_length = strlen(str);
	int i;
	char *encoded_str = (char *)malloc(str_length + 1);

	for (i = 0; i < str_length; i++)
	{
		char character = str[i];

		if (character >= 'a' && character <= 'z')
		{
			character = ((character - 'a' + 13) % 26) + 'a';
		}
		else if (character >= 'A' && character <= 'Z')
		{
			character = ((character - 'A' + 13) % 26) + 'A';
		}
		encoded_str[i] = character;
	}
	encoded_str[str_length] = '\0';
	return (encoded_str);
}
