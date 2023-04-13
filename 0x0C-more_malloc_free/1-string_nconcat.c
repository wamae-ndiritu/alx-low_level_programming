#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the string to be appended
 * @s2: the string that will be appeded to s1
 * @n: number of characters of s2 to be concatenated to s1
 *
 * Description - concatenates two strings.
 *
 * Return: returns a pointer to a newly alocated
 *	space in memory conataining s1, followed by n
 *	bytes of s2, and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str, *str1, *str2;
	int len1, len2, str_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	else if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	str1 = s1;
	str2 = s2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	str_len = len1 + len2;
	new_str = (char *)malloc((str_len + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str1);
	if ((int)n >= len2)
	{
		strncat(new_str, s2, len2);
	}
	strncat(new_str, s2, n);
	return (new_str);
}
