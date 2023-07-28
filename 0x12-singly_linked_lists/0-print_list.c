#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_list - print linked-list
 * @h: pointer to the head
 * Return: n_nodes in the list as size_t
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		count++;
	}
	return (count);
}
