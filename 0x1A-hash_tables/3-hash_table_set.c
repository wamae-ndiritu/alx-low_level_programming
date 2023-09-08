#include "hash_tables.h"

/**
 * hash_table_pair - helper function to allocate memory
 * for key and value and place them
 *
 * @key: pointer to the key of the pair
 * @value: pointer to the key of the pair
 *
 * Return: returns pointer to the created pair, or NULL if error
 */

hash_node_t *hash_table_pair(const char *key, const char *value)
{
	hash_node_t *hash_node = NULL;

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (NULL);

	hash_node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (NULL);
	}

	hash_node->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (hash_node->value == NULL)
	{
		free(hash_node);
		return (NULL);
	}

	/* copy key and value */
	strcpy(hash_node->key, key);
	strcpy(hash_node->value, value);

	/* linked list pointer for now is null as no collision */
	hash_node->next = NULL;

	return (hash_node);
}

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table you want to add
 * or update the key/value to
 * @key: pointer to the key of the pair
 * @value: pointer to the value of the pair
 *
 * Return: returns 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key,
		   const char *value)
{
	unsigned int long slot;
	hash_node_t *hash_node;
	hash_node_t *prev_node, *pair;
	const unsigned char *key_cpy = (unsigned char *)key;

	slot = key_index(key_cpy, ht->size);
	hash_node = ht->array[slot];

	/* check if slot empty */
	if (hash_node == NULL)
	{
		pair = hash_table_pair(key, value);
		if (pair == NULL)
			return (0);

		ht->array[slot] = pair;
		return (1);
	}

	/* There is collision therefore we add item at the beg of the linked list */
	prev_node = ht->array[slot];
	pair = hash_table_pair(key, value);
	if (pair == NULL)
		return (0);

	/* link the new node to the previous head */
	pair->next = prev_node;
	ht->array[slot] = pair;
	return (1);
}
