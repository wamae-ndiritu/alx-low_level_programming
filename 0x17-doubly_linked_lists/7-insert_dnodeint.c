#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index in a list
 * @h: pointer to pointer of the first mode of the list
 * @idx: index of the list where the new node is to be inserted
 * @n: the value to be inserted at the new node
 *
 * Description: the function takes a doubly linked list and inserts a new
 *		node at a given index
 * Return: returns the adress of the new node, or NULL if impossible
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			(*h)->prev = new_node;
			new_node->next = *h;
		}
		*h = new_node;
		return (new_node);
	}
	current_node = *h;

	while (current_node != NULL && idx > 0)
	{
		current_node = current_node->next;
		idx--;
	}

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node;
	new_node->prev = current_node->prev;
	(current_node->prev)->next = new_node;
	current_node->prev = new_node;
	return (new_node);
}
