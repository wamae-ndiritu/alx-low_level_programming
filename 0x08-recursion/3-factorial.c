#include "main.h"

/**
 * factorial - returns the factorial of a number
 *
 * @n: the number whose factorial is to be calculated
 *
 * Return: returns the fctorial of the number
 */

int factorial(int n)
{
	int factorial_1 = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (factorial_1);
	}
	return (n * factorial(n - 1));
}
