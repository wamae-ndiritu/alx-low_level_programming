#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description - printing numbers of base 16
 * in lowercase
 *
 * Return: returns 0 when success
 */
int main(void)
{
	char hex_nums[] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(hex_nums[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
