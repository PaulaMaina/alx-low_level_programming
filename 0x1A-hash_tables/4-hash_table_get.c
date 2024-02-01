#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * 
 * Return: value associated with the element or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tup;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	for (tup = ht->arra[index]; tup != NULL; tup = tup->next)
	{
		if (strcmp(tup->key, key) == 0)
			return (tup->value);
	}
	return (NULL);
}
