#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of command line arguments passed
 * @argv: pointer to an array of command line argument passed
 *
 * Return: an exist status
 */

int main(int argc, char *argv[])
{
	int num_of_bytes, i;
	char *ptr_main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_of_bytes = atoi(argv[1]);
	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr_main = (char *)main;
	for (i = 0; i < num_of_bytes; i++)
	{
		printf("%02x ", (unsigned char)ptr_main[i]);
	}
	printf("\n");
	return (0);
}
