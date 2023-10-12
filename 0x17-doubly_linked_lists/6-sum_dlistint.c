#include "lists.h"

/**
 * sum_dlistint - sum the nodes of list
 * @head: list
 * Return: int(sum)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
