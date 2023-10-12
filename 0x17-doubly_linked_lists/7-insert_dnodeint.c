#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * create_dnode - add new node
 * @n: value of node
 * @prev: point to prev node
 * @next: point to next node
 * Return: pointer to the new element
 */

dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = prev;
	node->next = next;
	return (node);
}


/**
 * insert_dnodeint_at_index - inserts a new node at spacified position
 * @h: the head of d-l list
 * @idx: index
 * @n: value of the new node
 * Return: address of new node / NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *myPrev = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		if (!*h)
			*h = create_dnode(n, NULL, NULL);
		else
		{
			(*h)->prev = create_dnode(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (current = *h; current && (count < idx); current = current->next, count++)
	{
		myPrev = current;
	}
	if ((count == idx) && (current == NULL))
	{
		myPrev->next = create_dnode(n, myPrev, NULL);
		return (myPrev->next);
	}
	if ((count < idx) && (current == NULL))
		return (NULL);
	if (myPrev != NULL)
	{
		myPrev->next = create_dnode(n, myPrev, current);
		current->prev = myPrev->next;
		return (myPrev->next);
	}
	return (NULL);
}
