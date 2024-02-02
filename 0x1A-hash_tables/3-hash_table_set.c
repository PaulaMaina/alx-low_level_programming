#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if successful otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tup;
	unsigned long int index;
	char *new = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	for (tup = ht->array[index]; tup != NULL; tup = tup->next)
	{
		if (strcmp(tup->key, key) == 0)
		{
			if (value != NULL)
			{
				new = strdup(value);
				if (new == NULL)
					return (0);
			}
			free(tup->value);
			tup->value = new;
			return (1);
		}
	}
	tup = malloc(sizeof(*tup));

	if (tup == NULL)
		return (0);
	tup->key = strdup(key);
	tup->value = strdup(value);
	if (tup->key == NULL || tup->value == NULL)
	{
		free(tup->key);
		free(tup->value);
		free(tup);
		return (0);
	}
	tup->next = ht->array[index];
	ht->array[index] = tup;
	return (1);
}
