#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: returns pointer to newly allocated
 *	space in memory containing s1 and s2.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, str_len;
	char *concatenated_str;

	if (s1 == NULL && s2 == NULL)
	{
		concatenated_str = (char *)malloc(1);
		concatenated_str[0] = '\0';
		return (concatenated_str);
	}
	else if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	str_len = len1 + len2;
	concatenated_str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (concatenated_str == NULL)
	{
		return (NULL);
	}
	/* duplicating s1 to the new allocated space */
	if (len1 > 0)
	{
		strcpy(concatenated_str, s1);
	}
	/* adding s2 to the s1 above */
	if (len2 > 0)
	{
		strcat(concatenated_str, s2);
	}
	return (concatenated_str);

}
