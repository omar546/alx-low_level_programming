#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at index
 * @head: list
 * @index: index of node
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head->next; i++)
	{
		head = head->next;
	}
	if (i < index)
		return (NULL);
	return (head);
}
