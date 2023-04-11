#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - takes a string and copies it
 *	to a newly allocated space in memory
 * @str: the string to be copied to the new mem area
 *
 * Return: returns NULL if str is NULL, or if insufficient
 *	memory was found,
 *	otherwise if success, return pointer to
 *	the copied str.
 */

char *_strdup(char *str)
{
	char *new_str;
	int str_len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = (char *)malloc(str_len);
	new_str = strcpy(new_str, str);
	if (new_str == NULL)
	{
		return (NULL);
	}
	return (new_str);
}
