#include "lists.h"

/**
 * sum_dlistint - sums all the data in a linked list
 * @head: pointer to the first node of the list
 *
 * Return: returns the sum of the data, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
