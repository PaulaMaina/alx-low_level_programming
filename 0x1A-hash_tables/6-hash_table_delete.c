#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tup = NULL, *delete_node = NULL;
	unsigned long int n;

	if (ht == NULL)
		return;

	for (n = 0; n < ht->size; n++)
	{
		tup = ht->array[n];

		while (tup != NULL)
		{
			delete_node = tup;
			tup = tup->next;
			free(delete_node->key);
			free(delete_node->value);
			free(delete_node);
		}
	}
	free(ht->array);
	free(ht);
}
