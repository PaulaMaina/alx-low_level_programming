#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tup = NULL;
	unsigned long int n;
	char *delim = "";

	if (ht == NULL)
		return;
	putchar('{');

	for (n = 0; n < ht->size; n++)
	{
		for (tup = ht->array[n]; tup != NULL; tup = tup->next)
		{
			printf("%s'%s': '%s'", delim, tup->key, tup->value);
			delim = ", ";
		}
	}
	putchar('}');
}
