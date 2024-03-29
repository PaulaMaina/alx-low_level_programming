#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size <= 0)
		return (NULL);

	hash_table = malloc(sizeof(*hash_table));

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(*(hash_table->array)) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
