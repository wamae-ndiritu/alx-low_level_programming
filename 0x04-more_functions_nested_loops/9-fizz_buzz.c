#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description - prints 1 through 100
 * if number is divisible by 3 print fizz
 * else if number divisible by 5 print buzz
 * else if divisible both by 3 and 5 print fizzbuzz
 * else print number
 *
 * Return: returns 0 when success
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
