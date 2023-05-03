#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of a listint_t list
 * @head: pointer to pointer to the first element of the list
 * @n: the integer to be added to the new element
 * Return: returns the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list_node;

	new_list_node = malloc(sizeof(listint_t));
	if (new_list_node == NULL)
		return (NULL);
	new_list_node->n = n;
	new_list_node->next = *head;
	*head = new_list_node;
	return (new_list_node);
}
