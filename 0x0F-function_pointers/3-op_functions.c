#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns the sum of the two integers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the product of the two numbers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the result of division.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder of the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: returns the remainder of the division.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
