#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node at spacific index
 * @head: head of the list
 * @index: index
 * Return: 0 / -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *startLine;
	unsigned int i;
	unsigned int length;
	length = len_node(&head);

	startLine = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		startLine = startLine->next;
		free(*head);
		*head = startLine;
		if (startLine != NULL)
			startLine->prev = NULL;
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		startLine = startLine->next;
		if (!startLine)
			return (-1);
	}
	if (length - 1 == index)
	{
		startLine->prev->next = NULL;
		free(startLine);
		return (1);
	}
	startLine->prev->next = startLine->next;
	startLine->next->prev = startLine->prev;
	free(startLine);
	return (1);
}

/**
 * len_node - list length
 *
 * @node: list
 * Return: unsigned int
 */

unsigned int len_node(dlistint_t **node)
{
	unsigned int length = 0;
	dlistint_t *startLine;

	startLine = *node;
	while (startLine != NULL)
	{
		length += 1;
		startLine = startLine->next;
	}
	return (length);
}
