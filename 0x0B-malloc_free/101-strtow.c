#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * split_str - handles the string spliting
 * @s: the string to be splitted
 * @str_array: memory block allocated to
 *	store array of strings
 * Return: returns an array of string
 */

char **split_str(char *s, char **str_array)
{
	int i = 0, j, word_len;

	while (*s != '\0')
	{
		/* skip leading whitespace */
		while (*s == ' ')
		{
			s++;
		}
		if (*s != '\0')
		{
			char *word_start;

			word_start = s;
			/* find the end of the word */
			while (*s != ' ' && *s != '\0')
			{
				s++;
			}
			/* Allocate memory for the word */
			word_len = s - word_start;
			str_array[i] = (char *)malloc((word_len + 1) * sizeof(char));
			if (str_array[i] == NULL)
			{
				/* free memory for previously allocated words */
				for (j = 0; j < i; j++)
				{
					free(str_array[j]);
				}
				free(str_array);
				return (NULL);
			}
			/* copy the word into the array */
			strncpy(str_array[i], word_start, word_len);
			str_array[i][word_len] = '\0';
			i++;
		}
	}
	return (str_array);
}
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
	int words_count = 0;
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
	if (words_count == 0)
	{
		return (NULL);
	}
	str_array = (char **)malloc((words_count + 1) * sizeof(char *));
	if (str_array == NULL)
	{
		return (NULL);
	}
	s = str;
	str_array = split_str(s, str_array);
	str_array[words_count] = NULL;
	return (str_array);
}
