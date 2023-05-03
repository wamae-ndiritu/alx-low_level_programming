#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the begining of a listint_t list
 * @head: pointer to pointer to the first element of the list
 * @n: the integer to be added to the new element
 * Return: returns the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list_node, *current_list_node;

	new_list_node = malloc(sizeof(listint_t));
	if (new_list_node == NULL)
		return (NULL);
	new_list_node->n = n;
	if (*head == NULL)
	{
		*head = new_list_node;
	}
	else
	{
		current_list_node = *head;
		while (current_list_node->next != NULL)
		{
			current_list_node = current_list_node->next;

		}
		current_list_node->next = new_list_node;
	}
	return (new_list_node);
}
