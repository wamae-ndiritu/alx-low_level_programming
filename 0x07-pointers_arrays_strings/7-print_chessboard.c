#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: 2D array with the values of the chessboard
 *
 * Return: returns no value
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char chess_val = a[i][j];

			_putchar(chess_val);
		}
		_putchar('\n');
	}
}
