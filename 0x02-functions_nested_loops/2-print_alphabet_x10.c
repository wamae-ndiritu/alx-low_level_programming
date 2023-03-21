#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets 10 times
 *
 * Description - the function takes the custom
 * _putchar() referenced in the main.h to
 * print abcdefghijklmnopqrstuvwxyz
 * 10 times
 *
 * Return: returns no value
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet = 'a';

	while (i < 10)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		alphabet = 'a'; /* resetting alphabet back */
		_putchar('\n');
		i++;
	}
}
