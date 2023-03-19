#include <stdio.h>
/**
 * main -Entry point of the program
 *
 * Description - print all possible
 * digit combinations with comma
 *
 * Return: always 0 when success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i != 9)
			putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);

}

