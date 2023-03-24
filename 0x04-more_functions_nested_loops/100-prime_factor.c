#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description - checks for the largest
 * prime factor of a number
 *
 * Return: returns 0 when success
 */
int main(void)
{
	long n = 612852475143;
	long largest_factor = 1;
	long odd_factor;

	while (n % 2 == 0)
	{
		largest_factor = 2;
		n /= 2;
	}

	for (odd_factor = 3; odd_factor * odd_factor <= n; odd_factor += 2)
	{
		while (n % odd_factor == 0)
		{
			largest_factor = odd_factor;
			n /= odd_factor;
		}
	}

	if (n > 2)
	{
		largest_factor = n;
		printf("%ld\n", largest_factor);
	}
	return (0);
}
