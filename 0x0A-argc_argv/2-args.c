#include <stdio.h>

/**
 * main - entry point of the program
 *
 * @argc: number of command line arguments passed
 *	to the main function
 * @argv: an array of the command line arguments passed
 *
 * Return: returs 0 when success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
