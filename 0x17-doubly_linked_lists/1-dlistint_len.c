#include "lists.h"

/**
 * dlistint_len - Return length of list 
 * @h: struct list
 * Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		length += 1;
		h = h->next;
	}
	return (length);
}
