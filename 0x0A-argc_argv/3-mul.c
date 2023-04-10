#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: number of command line arguments passed
 *	to the main function
 * @argv: an array of command line arguments passed
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int product_res, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product_res = num1 * num2;
		printf("%d\n", product_res);
		return (0);
	}
	printf("Error");
	return (1);
}
