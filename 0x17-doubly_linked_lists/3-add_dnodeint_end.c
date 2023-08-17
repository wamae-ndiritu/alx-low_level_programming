#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to pointer to the fist node of the list
 *
 * @n: element to be added to the new node
 * Description: The function adds a new nodea t the end of a doubly
 *		linked list
 * Return: Returns the address of the new element, or NULL id it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		/* The list is empty -> new node becomes the head */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Go to the end of the list */
		dlistint_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
		new_node->prev = current_node;
	}
	return (new_node);
}
