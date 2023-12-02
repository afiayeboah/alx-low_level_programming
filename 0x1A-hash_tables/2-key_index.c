#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key in a hash table array.
 * @key: The key for which to find the index.
 * @size: The size of the array in the hash table.
 *
 * Return: The index of the key in the hash table array.
 *
 * Description: Uses the djb2 algorithm for hashing.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
