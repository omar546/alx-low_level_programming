#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (integers) 
 * stored in a singly linked list
 * @head: a
 * Return: Always 0.
 */

int sum_listint(listint_t *head)
{
	listint_t *nav = head;
	size_t count = 0;

	while (nav)
	{
		count += nav->n;
		nav = nav->next;
	}
	return (count);
}
