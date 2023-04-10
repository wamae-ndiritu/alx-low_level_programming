#include <stdio.h>

/**
 * main - entry point of the programm
 *
 * @argc: number of command line argument passed to
 *	main function
 * @argv: pointer pointing to an array of comaand line arguments
 *	passed to the main function
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
