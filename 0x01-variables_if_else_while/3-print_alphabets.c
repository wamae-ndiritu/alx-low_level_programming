#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrption - with a list of alphabets,
 * in lowercase and then followed
 * by the uppercase,
 * to list them on the screen using while loop
 *
 * Return: always 0 when success
 */
int main(void)
{
	char lower_alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	char upper_alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int alphabets_len = sizeof(lower_alphabets) - 1;
	int i = 0;

	while (i < alphabets_len - 1)
	{
		putchar(lower_alphabets[i]);
		i++;
	}
	i = 0;
	while (i < alphabets_len - 1)
	{
		putchar(upper_alphabets[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
