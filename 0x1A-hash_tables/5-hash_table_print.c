#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: pointer to the hash table to b printed
 *
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_pair = 1;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_pair = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
