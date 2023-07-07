#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	union my_union my_union;

	my_union.i = 1;
	if (my_union.ch[0] == 1)
	{
		/* machine is little-endian */
		return (1);
	}
	else
	{
		/* machine is big-endian */
		return (0);
	}
}
