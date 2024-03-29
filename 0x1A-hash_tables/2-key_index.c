#include "hash_tables.h"

/**
 * key_index - gives the index of the key
 * @key: key
 * @size: sze of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
