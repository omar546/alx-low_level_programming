#include "lists.h"

/**
 * list_len - get n codes in list
 * @h: point to head
 * Return: n-nodes(size_t)
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
