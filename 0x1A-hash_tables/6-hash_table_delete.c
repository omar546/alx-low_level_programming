#include "hash_tables.h"

/**
* hash_table_delete - Delete the hash table
* @ht: the hash table
* Return: the hash table deleted
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	unsigned long int idx;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
		for (temp = ht->array[idx]; temp; temp = node)
		{
			node = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	free(ht->array);
	free(ht);
}
