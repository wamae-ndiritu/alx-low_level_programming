#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list any_args;
	char c, *s;
	int i, j = 0;
	double f;

	va_start(any_args, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(any_args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(any_args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(any_args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(any_args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		if (format[j + 1] != '\0' &&
				(format[j] == 'c' || format[j] == 'i' ||
				 format[j] == 'f' || format[j] == 's'))
			printf(", ");
		j++;
	}
	va_end(any_args);
	printf("\n");
}
