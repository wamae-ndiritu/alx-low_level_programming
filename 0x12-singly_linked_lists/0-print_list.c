#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to head node of the linked list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	size_t count_nodes = 0;

	if (h == NULL)
		return (0);
	while (current_node != NULL)
	{
		char len_buffer[16], *str;
		size_t len = current_node->len;
		size_t i = 0, j, str_len;

		do {
			len_buffer[i++] = (len % 10) + '0';
			len /= 10;
		} while (len != 0);
		_putchar('[');
		while (i-- > 0)
		{
			if (current_node->str == NULL)
				_putchar(0 + '0');
			else
				_putchar(len_buffer[i]);
		}
		_putchar(']');
		_putchar(' ');
		str = current_node->str;
		if (str == NULL)
		{
			str = "(nil)";
		}
		str_len = strlen(str);
		for (j = 0; j < str_len; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
		count_nodes++;
		current_node = current_node->next;
	}
	return (count_nodes);
}
