#include "hash_tables.h"

/**
 * key_index - gets the index of a key in the hash table
 * Description: The function makes use of the hash function that gives
 * the hashed key value which turns to be the index
 *
 * @key: pointer to the key of the pair item
 * @size: size of the array of the hash table
 *
 * Return: returns the index of the key
 */

unsigned long int key_index(const unsigned char *key,
			    unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (0);

	index = hash_djb2(key);

	/* index within the range [0, size - 1]*/
	index = index % size;

	return (index);
}
