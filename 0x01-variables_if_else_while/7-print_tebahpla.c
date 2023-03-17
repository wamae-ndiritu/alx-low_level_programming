#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description - prints alphabet in reverse order
 *
 * Return: return 0 when success
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
