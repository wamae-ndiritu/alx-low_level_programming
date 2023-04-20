#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments passed
 * @n: a number which must be passed.
 *
 * Return: returns sum, or 0 if n is eqaul to 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list optional_nums;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(optional_nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(optional_nums, int);
	}
	va_end(optional_nums);
	return (sum);
}
