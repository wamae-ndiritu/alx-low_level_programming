#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc: number of command line arguments passed to the
 *	main function
 * @argv: an array of command line arguments passed to
 *	the main function
 * Return: returns 0, if success, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int j = 0;
	int num, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num == 0)
			{
				/* num is not an integer */
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("%d\n", j);
	return (0);
}
