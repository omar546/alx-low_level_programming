#include "lists.h"

/**
 * free_listint2 - frees the memory allocated for a singly linked list containing integers and sets the head to NULL
 * @head: a
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *nav, *na2;

	if (head == NULL || *head == NULL)
		return;
	nav = *head;
	while (nav)
	{
		na2 = nav->next;
		free(nav);
		nav = na2;
	}
	*head = NULL;
}
