#include "lists.h"
/**
 * listint_len - get length of list
 * @h: a
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *na = h;
	size_t count = 0;

	while (na)
	{
		count++;
		na = na->next;
	}
	return (count);
}
