#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 *	index of a listint_t linked list
 * @head: pointer to pointer to the first element of the list
 * @index: the index whose node is to be deleted
 *
 * Return: returns 1 is success, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_list_node, *temp_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current_list_node = *head;
		*head = (*head)->next;
		free(current_list_node);
		return (1);
	}
	temp_node = *head;
	current_list_node = temp_node->next;
	for (i = 1; i < index; i++)
	{
		if (current_list_node == NULL)
			return (-1);
		temp_node = current_list_node;
		current_list_node = current_list_node->next;
	}
	temp_node->next = current_list_node->next;
	free(current_list_node);
	return (1);
}
