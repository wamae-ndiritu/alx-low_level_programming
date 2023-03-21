#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number
 *
 * @num: the number whose last digit is to be taken
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	return (last_digit);
}
