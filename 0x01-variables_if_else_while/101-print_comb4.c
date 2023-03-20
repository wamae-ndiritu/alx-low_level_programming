#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - printing all 3
 * numbers combination without repeating a
 * combination
 *
 * Return: always 0 when success
 */
int main(void)
{
	int i;
	int j = 1;
	int k = 2;
	int n = 8;

	for (i = 0; i < 10; i++)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
				k++;
			}
			n--;
			k = k - n;
			j++;
		}
	}
	putchar('\n');
	return (0);
}
