#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the first element of the list
 * Return: returns the head node's data (n);
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);
	return (n);
}
