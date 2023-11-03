#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table for the given size
 *
 * @size: size
 * Return: hash table / NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int x;

	table = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (a == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[i] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
