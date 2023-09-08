#include "hash_tables.h"


/**
 * hash_table_get - Retrieves a value associated with a key
 *
 * @ht: pointer to the hash table being looked into
 * @key: pointer to the key being looked for
 *
 * Return: returns the value associated with the element
 * or NULL id key couldn;t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int slot;
	hash_node_t *hash_node;
	const unsigned char *key_cpy = (unsigned char *)key;

	slot = key_index(key_cpy, ht->size);

	hash_node = ht->array[slot];

	if (hash_node == NULL)
		return (NULL);

	/* Trasverse through any possible chainning with linked list */
	while (hash_node != NULL)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);
		hash_node = hash_node->next;
	}

	/* no key match */
	return (NULL);
}
