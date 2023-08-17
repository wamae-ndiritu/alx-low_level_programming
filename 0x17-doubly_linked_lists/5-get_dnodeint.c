#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node based on its index in a list
 * @head: pointer to the first node of the list
 * @index: index of the node to be found
 *
 * Description: tranverses through the doubly linked list and
 *		gets the node at the specified index
 * Return: returns the node at the index
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}
	return (head);
}
