#include "lists.h"

/**
 * list_len - gets the number of elements in a linked list
 * @h: pointer to the head node of the list
 *
 * Return: returns the number of elemnts in the list
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		node_count++;
		current_node = current_node->next;
	}
	return (node_count);
}
