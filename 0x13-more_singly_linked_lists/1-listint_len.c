#include "lists.h"

/**
 * listint_len - gets the number of elements in a linked list
 * @h: pointer to the first elemnt of the list
 * Return: returns the number of elemnts in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current_list_node = h;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	while (current_list_node != NULL)
	{
		node_count++;
		current_list_node = current_list_node->next;
	}
	return (node_count);
}
