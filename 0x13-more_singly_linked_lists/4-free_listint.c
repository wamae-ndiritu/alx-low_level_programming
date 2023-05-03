#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the first element of the list
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *current_node, *temp_node;

	if (head != NULL)
	{
		current_node = head;
		while (current_node != NULL)
		{
			temp_node = current_node;
			free(temp_node);
			current_node = current_node->next;
		}
		free(current_node);
	}
}
