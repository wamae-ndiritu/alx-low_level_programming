#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints n number to 98
 *
 * @n: the number to start from
 *
 * Return: returns no value
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
		printf("\n");
	}
	else
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
		printf("\n");
	}
}
