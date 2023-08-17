#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the first node of the list
 *
 * Description: takes a double pointer and frees all its nodes
 *
 * Return: Nothing.
 *
 */


void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
