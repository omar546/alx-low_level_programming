#include "hash_tables.h"

/**
 * hash_table_print - prints whole hash table
 *
 * @ht: pointer to hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *separator;

	if (ht == NULL)
		return;

	printf("{");
	separator = "";

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", separator, tmp->key, tmp->value);
			separator = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
