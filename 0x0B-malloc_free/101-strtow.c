#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to be splitted
 *
 * Return: returns NULL if str == NULL, or str == "",
 *	or error allocating memory, otherwise
 *	returns a pointer to an array of strings
 */

char **strtow(char *str)
{
	char **str_array;
	int words_count = 0, i = 0;
	char *s;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	s = str;
	while (*s != '\0')
	{
		/* skip leading whitespace */
		while (*s == ' ')
		{
			s++;
		}
		if (*s != '\0')
		{
			words_count++;
		}
		if (*s != ' ' && *s != '\0')
		{
			s++;
		}
	}
	str_array = (char **)malloc((words_count + 1) * sizeof(char *));
	if (str_array == NULL)
	{
		return (NULL);
	}
	s = str;
	while (*s != '\0')
	{
		while (*s == ' ')
		{
			s++;
		}
		if (*s != '\0')
		{
			char *word_start = s;
			int word_len;

			while (*s != ' ' &&  *s != '\0')
			{
				s++;
			}
			word_len = s - word_start;
			str_array[i] = (char *)malloc((word_len + 1) * sizeof(char));
			if (str_array[i] == NULL)
			{
				int j;

				for (j = 0; j < i; j++)
				{
					free(str_array[j]);
				}
				free(str_array);
				return (NULL);
			}
			strncpy(str_array[i], word_start, word_len);
			str_array[i][word_len] = '\0';
			i++;

		}
	}
	str_array[words_count] = NULL;
	return (str_array);
}
