#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets
 *
 * Desription - printing all lowercase
 * alphabets using _putchar()
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
