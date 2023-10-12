#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node from the end
 * @head: list
 * @n: node in list
 * Return: the new node or NULL if couldn't
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *startLine;

	startLine = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (startLine->next)
	{
		startLine = startLine->next;
	}
	startLine->next = new;
	new->prev = startLine;
	new->next = NULL;
	new->n = n;
	return (new);
}
