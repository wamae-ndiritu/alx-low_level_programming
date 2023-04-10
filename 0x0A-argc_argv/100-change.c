#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: the number of command line arguments
 *	passed to the main function
 * @argv: an array of command line arguments passed
 *	to the main function
 * Return: return 0 if success, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int valid_coins[5] = {25, 10, 5, 2, 1};
	int min_no_of_coins = 0;
	int i, coin;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		coin = valid_coins[i];
		min_no_of_coins += cents / coin;
		cents %= coin;
	}
	printf("%d\n", min_no_of_coins);
	return (0);
}
