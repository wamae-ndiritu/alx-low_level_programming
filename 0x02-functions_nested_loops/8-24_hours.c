#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Description - loops through to print every minute
 * of the day
 *
 * Return: returns no value
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;

	while (hrs < 24)
	{
		while (mins < 60)
		{
			_putchar(hrs / 10 + '0');
			_putchar(hrs % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
			mins++;
		}
		mins = 0;
		hrs++;
	}
}
