#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - conactenates all the arguments of your program
 * @ac: number of command line arguments
 * @av: an address to an array of command
 *	line argument passed to the main function
 * Return: returns NULL if ac == 0 or av == NULL,
 *	or if it fails, otherwise return a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *new_str;
	int i, j, str_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		str_len += strlen(av[i]);
	}
	new_str = (char *)malloc((str_len + ac) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(&new_str[j], av[i]);
		j += strlen(av[i]);
		new_str[j++] = '\n';
	}
	return (new_str);

}
