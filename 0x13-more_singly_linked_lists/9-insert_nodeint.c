#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the first element of the list
 * @idx: index where the new node is to be inserted
 * @n: the element to be inserted in the new node
 *
 * Return: returns the address of the new node,
 *	NULL if it failed or not possible to
 *	add new node at the index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_list_node, *temp_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_list_node = malloc(sizeof(listint_t));
	if (new_list_node == NULL)
		return (NULL);
	new_list_node->n = n;
	if (idx == 0)
	{
		new_list_node->next = *head;
		*head = new_list_node;
		return (new_list_node);
	}
	temp_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp_node == NULL)
		{
			free(temp_node);
			return (NULL);
		}
		temp_node = temp_node->next;
	}
	new_list_node->next = temp_node->next;
	temp_node->next = new_list_node;
	return (new_list_node);
}
