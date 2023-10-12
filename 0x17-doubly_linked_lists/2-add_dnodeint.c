#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new node from the head
 * @head: pointer
 * @n: node in list
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->prev = NULL;
	newNode->next = *head;
	newNode->n = n;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
