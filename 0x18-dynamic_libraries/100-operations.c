/**
 * add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns the sum of the two integers
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - gets the difference of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns the difference between the two integers
 */

int sub(int a, int b)
{
	return (a - b);
}


/**
 * mul - gets the product of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns the product of the two integers
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - gets the division of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns the division
 */

int div(int a, int b)
{
	if (b == 0)
		return (0);

	return (a / b);
}

/**
 * mod - gets the remainder after dividing two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: returns the remainder
 */

int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
