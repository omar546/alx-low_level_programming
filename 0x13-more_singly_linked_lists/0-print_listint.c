#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t
 * @h: pointer to head node
 * Return: n nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *na = h;
	size_t n = 0;

	while (na)
	{
		printf("%d\n", na->n);
		n++;
		na = na->next;
	}
	return (n);
}
