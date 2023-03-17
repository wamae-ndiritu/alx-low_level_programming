#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description - gets the last digit of an int by
 * getting the remainder of a number
 * after dividing by 10 using the modulus operator
 *
 * Return: always 0 when success
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6)
	{
		if (last_digit == 0)
			printf("Last digit of %d is %d and is 0\n", n, last_digit);
		else
		{
			printf("Last digit of %d is %d and is less than 6 ", n, last_digit);
			printf("and not 0\n");
		}
	}
	return (0);
}
