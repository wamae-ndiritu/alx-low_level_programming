#include "lists.h"

/**
 * dlistint_len - gets the number of elements in a list
 * @h: pointer to a doubly linked list
 *
 * Description: counts the numbe of nodes in the list
 * Return: retuns the number of elements
 *
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		node_count++;
		current_node = current_node->next;
	}
	return (node_count);
}
