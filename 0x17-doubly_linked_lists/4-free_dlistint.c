#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free list
 * @head: list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *startLine, *flag;

	startLine = head;
	while (startLine != NULL)
	{
		flag = startLine->next;
		free(startLine);
		startLine = flag;
	}
}
