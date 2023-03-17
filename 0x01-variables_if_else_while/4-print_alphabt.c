#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrption - using ASCII to list all
 * alphabets a-z except for e or
 *
 * Return: always 0 when success
 */
int main(void)
{
	int lower_ascii_alphabet = 97; /* alphabet a in ASCII */

	while (lower_ascii_alphabet  <= 122) /* z is alphabet 122 n ASCII */
	{
		/* aphabet not e (101) or q (113) in ASCII */
		if (lower_ascii_alphabet != 101 && lower_ascii_alphabet != 113)
		{
			putchar(lower_ascii_alphabet);
		}
		lower_ascii_alphabet++;
	}
	putchar('\n');
	return (0);
}
