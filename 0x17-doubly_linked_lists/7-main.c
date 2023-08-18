#include <string.h>
#include "lists.h"


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS
 */

int main(void)
{
	dlistint_t *head;
	dlistint_t *res;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	printf("--------------------------\n");
	res = insert_dnodeint_at_index(NULL, 0, 4096);
	if (res == NULL)
		printf("(nill)");
	print_dlistint(head);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
