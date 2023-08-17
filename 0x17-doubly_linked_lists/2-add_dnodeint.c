#include "lists.h"

/**
 * add_dnodeint - add a node a the begining of a double list
 * @head: pointer to pointer the first node of the list
 * @n: the element to be added to the list
 *
 * Description: The function takes a node and adds it at the begining
 *		of the doubly linked list
 * Return: returns the address of the new element, or NULL if it failed
 *
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
