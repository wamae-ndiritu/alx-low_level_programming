#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @str: pointer to string to be converted
 * to uppercase
 *
 * Return: returns a pointer pointing to the changed string
 */
char *string_toupper(char *str)
{
	char *uppercase = str;

	while (*uppercase)
	{
		*uppercase = toupper((unsigned char)*uppercase);
		uppercase++;
	}
	return (str);
}
