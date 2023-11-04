#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_delete - Delete the hash table
* @ht: the hash table
* Return: the hash table deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int del;
	hash_node_t *node;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;

	for (del = 0; del < ht->size; del++)
	{
		for (node = ht->array[del]; node != NULL; node = temp)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
