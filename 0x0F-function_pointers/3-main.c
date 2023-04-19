#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - checks the code
 * @argc: count of command line arguments passed
 * @argv: pointer to an array of command line arguments passed
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, (*result)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator);
	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result(num1, num2));
	return (0);
}
