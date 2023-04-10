#include <stdio.h>

/**
 * main - entry point of the pogram
 * @argc: count of the command line arguments
 * @argv: pointer pointing to an array of the command
 *	line arguments passed to the main function
 * Return: returns 0 when success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
