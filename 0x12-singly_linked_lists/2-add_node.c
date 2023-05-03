#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the begining of a linked list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the new element of the list
 *
 * Return: returns address of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list_node;

	if (str == NULL)
		return (NULL);
	new_list_node = malloc(sizeof(list_t));
	if (new_list_node == NULL)
	{
		return (NULL);
	}
	new_list_node->str = strdup(str);
	if (new_list_node->str == NULL)
	{
		free(new_list_node);
		return (NULL);
	}
	new_list_node->len = strlen(str);
	new_list_node->next = *head;
	*head = new_list_node;
	return (new_list_node);
}
