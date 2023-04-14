#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * print_error - prints the error
 *
 * Return: Nothing.
 */

void print_error(void)
{
	long unsigned int i;
	char err[] = "Error";

	for (i = 0; i < strlen(err); i++)
	{
		_putchar(err[i]);
	}
	_putchar('\n');
	exit(98);
}

/**
 * is_num_valid - checks whether a number is valid
 *
 * @str: a number casted as a string
 * Return: returns 1 if valid, 0 otherwise
 */

int is_num_valid(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]))
		{
			return (1);
		}
		return (0);
	}
	return (0);
}

/**
 * parse_num - cast the number to an integer
 * @str: the number to be casted
 * Return: returns the casted number
 */

int parse_num(char *str)
{
	int number = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		number = number * 10 + (str[i] - '0');
	}
	return (number);
}

/**
 * multiply_nums - get the product of 2 numbers
 * @num1: the first number
 * @num2: the second number
 * Return: return the product of two numbers
 */

int multiply_nums(int num1, int num2)
{
	int product;

	product = num1 * num2;
	return (product);
}

/**
 * main - checks the code for the program
 *
 * @argc: number of command line arguments passed
 * @argv: an array of command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, product;
	int divisor = 1;

	if (argc != 3)
	{
		print_error();
	}
	if (!is_num_valid(argv[1]) || !is_num_valid(argv[2]))
	{
		print_error();
	}
	num1 = parse_num(argv[1]);
	num2 = parse_num(argv[2]);
	product = multiply_nums(num1, num2);
	while (product / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		_putchar((product / divisor) % 10 + '0');
		divisor /= 10;
	}
	_putchar('\n');
	return (0);
}
