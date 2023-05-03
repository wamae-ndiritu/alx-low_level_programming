#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first element of the list
 *
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current_list_node = h;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	while (current_list_node != NULL)
	{
		printf("%d\n", current_list_node->n);
		node_count++;
		current_list_node = current_list_node->next;
	}
	return (node_count);
}
