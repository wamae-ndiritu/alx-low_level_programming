#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: poits to the next node
 *
 * Descritpion: Singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_s;
#endif
