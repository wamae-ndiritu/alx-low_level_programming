#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

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
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_replace[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int alphabets_len = strlen(alphabets);
	int j = 0, i;

	while (*(str + j) != '\0')
	{
		for (i = 0; i < alphabets_len; i++)
		{
			char character = alphabets[i];

			if (*(str + j) == character)
			{
				*(str + j) = rot13_replace[i];
				break;
			}
		}
		j++;
	}
	return (str);
}
