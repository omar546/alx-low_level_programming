#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements of a dlistint_t list.
 * @h: the head of the doubly linked list
 * Return: n of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *point = h;
	size_t n = 0;

	while (point && point->prev)
		point = point->prev;
	while (point)
	{
		printf("%d\n", point->n);
		n++;
		point = point->next;
	}
	return (n);
}
