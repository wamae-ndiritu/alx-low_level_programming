#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - adds two infinite numbers
 *
 * @n1: a string that contains the first infinite number
 * @n2: a string containing second infinite number
 * @r: pointer to where the result will be stored in
 * @size_r: buffer size, where result will be stored in
 *
 * Return: pointer to the string, or '0' if result
 * can't be stored in the buffer
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/**
	 * long int num1 = strtol(n1, NULL, 10);
	 * long int num2 = strtol(n2, NULL, 10);
	 * long int result;
	 * int size_of_result;
	 *
	 * result = num1 + num2;
	 * *r = result;
	 * size_of_result = snprintf(NULL, 0, "%ld", result);
	 * if (size_of_result + 1 > size_r)
	 * {
	 * return NULL;
	 * }
	 * snprintf(r, size_r, "%ld", result);
	 * return (r);
	 *
	 */
	int len_n1 = strlen(n1);
	int len_n2 = strlen(n2);
	int carry = 0, i, j, digit;

	/* Initializing memory buffer */
	memset(r, '0', size_r - 1);
	r[size_r - 1] = '\0';

	/* perform operations on individual bytes of the string */
	for (i = len_n1 - 1, j = len_n2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		digit = carry;
		if (i >= 0)
			digit += n1[i] - '0';
		if (j >= 0)
			digit += n2[j] - '0'; /* converts character to int using its ascii */
		if (digit > 9)
		{
			carry = 1;
			digit -= 10;
		}
		else
		{
			carry = 0;
		}
		r[size_r - 2 - (len_n1 - i - 1) - (len_n2 - i - 1)] = digit + '0'; /* cast int back to character */
		if (size_r - 2 - (len_n1 - i - 1) - (len_n2 - i - 1) < 0)
		{
			return "0"; 
		}
	}
	for (i = 0; r[i] == '0'; i++);
	if (i > 0)
	{
		memmove(r, r + i, size_r - i);
		r[size_r - i] = '\0';
	}
	return (r);
}
