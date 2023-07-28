#include "lists.h"
#include <string.h>

/**
 * add_node - add new nodes form the head
 * @head: a pointer to a "list_t" pointer that also points to the head
 * @str: a pointer to "string" thatwe add to node
 * Return: pointer to the new head, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Phead;
	int len = 0;

	Phead = malloc(sizeof(list_t));
	if (Phead == NULL)
		return (NULL);

	while (str[len])
		len++;

	Phead->len = len;
	Phead->str = strdup(str);
	Phead->next = *head;
	*head = Phead;
	return (Phead);
}
