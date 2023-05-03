#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees all the elements of the list
 * @head: pointer to the first element of the list
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *current_node, *temp_node;

	if (head != NULL)
	{
		current_node = head;
		while (current_node->next != NULL)
		{
			temp_node = current_node;
			if (temp_node->str != NULL)
				free(temp_node->str);
			free(temp_node);
			current_node = current_node->next;
		}
		free(current_node->str);
		free(current_node);
	}
}
