#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node to be deleted
 *
 * Description: The function takes a doubly linked list and deletes a
 *		at the specified index
 * Return: returns 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;

	if (head == NULL || *head == NULL)
		return (-1);
	current_node = *head;

	while (current_node != NULL && index > 0)
	{
		current_node = current_node->next;
		index--;
	}

	if (current_node == NULL)
		return (-1);

	if (current_node->prev != NULL)
		current_node->prev->next = current_node->next;
	else
		*head = current_node->next;

	if (current_node->next != NULL)
		current_node->next->prev = current_node->prev;

	free(current_node);

	return (1);
}
