#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list
 * @head: pointer to the first element of the list
 *
 * Return: returns the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current_list_node;
	int sum = 0;

	if (head == NULL)
		return (0);
	current_list_node = head;
	while (current_list_node != NULL)
	{
		int n;

		n = current_list_node->n;
		sum += n;
		current_list_node = current_list_node->next;
	}
	return (sum);
}
