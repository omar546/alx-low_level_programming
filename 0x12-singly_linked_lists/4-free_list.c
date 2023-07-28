#include "lists.h"

/**
 * free_list - A function that clears elements of linked list
 * @head: pointer to the head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *i;

	i = head;
	while (head)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
	free(head);
}
