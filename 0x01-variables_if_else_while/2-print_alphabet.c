#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrption - with a list of alphabets, we want
 * to list them on the screen using while loop
 *
 * Return: always 0 when success
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int alphabets_len = sizeof(alphabets) - 1;
	int i = 0;

	while (i < alphabets_len - 1)
	{
		putchar(alphabets[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
