#include "hash_tables.h"

/**
* hash_table_print - prints the hash table
* @ht: hash table
* Return: format of the hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *temp;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
		for (temp = ht->array[idx]; temp; temp = temp->next)
		{
			if (first)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", temp->key, temp->value);
		}
	printf("}\n");
}