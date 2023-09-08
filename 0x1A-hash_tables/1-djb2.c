#include "hash_tables.h"

/**
 * hash_djb2 - hash the key using the djb2 algorithm
 *
 * @str: pointer to the key string to be hashed
 *
 * Return: returns the hashed value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_val = 5381;
	int ch;

	while ((ch = *str++))
		hash_val = ((hash_val << 5) + hash_val) + ch;

	return (hash_val);
}
