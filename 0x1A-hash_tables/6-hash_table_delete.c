#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 *
 * @ht: pointer to the hash table being deleted
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			hash_node_t *next_list_node = current->next;

			free(current->key);
			free(current->value);
			free(current);
			current = next_list_node;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
