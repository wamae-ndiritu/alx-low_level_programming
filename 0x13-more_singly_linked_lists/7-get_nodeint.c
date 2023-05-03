#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: pointer to the first element of the list
 * @index: index of the element to be gotten
 *
 * Return: returns the nth node, or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_list_node = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (current_list_node == NULL)
			return (NULL);
		current_list_node = current_list_node->next;
	}
	return (current_list_node);
}
