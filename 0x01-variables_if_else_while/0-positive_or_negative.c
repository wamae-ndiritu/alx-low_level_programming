#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main entry point
 *
 * Descrption - checking various conditions
 * in a variable
 *
 * Return: always (0) for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
