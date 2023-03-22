#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description - prints the first 50
 * fibonacci numbers
 * starting from 1 and 2
 *
 * Return: return 0 when success
 */
int main(void)
{
	int i = 0;
	unsigned long fibonacci = 1;
	unsigned long second_fibonacci = 2;
	unsigned long new_fibonacci;

	printf("%lu, ", fibonacci);
	while (i < 49)
	{
		new_fibonacci = fibonacci + second_fibonacci;
		fibonacci = second_fibonacci;
		second_fibonacci = new_fibonacci;
		if (i == 48)
		{
			printf("%lu", fibonacci);
		}
		else
		{
			printf("%lu, ", fibonacci);
		}
		i++;
	}
	printf("\n");
	return (0);
}
