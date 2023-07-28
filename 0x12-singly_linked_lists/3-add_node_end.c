#include "lists.h"
#include <string.h>

/**
 * add_node_end - add nodes to list but from end
 * @head: a pointer to a (list_t) pointer that also points to the "struct" head 
 * @str: string to add to node
 * Return: pointer to the new node, NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added, *tempo;
	unsigned int len = 0;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	while (str[len])
		len++;

	added->len = len;
	added->str = strdup(str);
	if (*head == NULL)
	{
		added->next = *head;
		*head = added;
	}
	else
	{
		added->next = NULL;
		tempo = *head;
		while (tempo->next)
			tempo = tempo->next;
		tempo->next = added;
	}
	return (added);
}
