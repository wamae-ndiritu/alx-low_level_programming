#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the first element of the list
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp_node;

	if (head == NULL || *head == NULL)
		return;
	current_node = *head;
	while (current_node != NULL)
	{
		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node);
	}
	*head = NULL;
}
