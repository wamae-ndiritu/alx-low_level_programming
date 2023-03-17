#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Desccription - printing all numbers from 0 to 9
 *
 * Return: always 0 when success
 */
int main(void)
{
	int i = 0;
	
	while (i < 10)
	{
		int digit_ascii = i + '0';
		putchar(digit_ascii);
		i++;
	}
	putchar('\n');
	return (0);

}

