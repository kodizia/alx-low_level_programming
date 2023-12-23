#include "hash_tables.h"

/**
 * key_index - gives the index of  key/value pair
 *              stored in array of a hash table.
 * @key: The key at a particular index.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
