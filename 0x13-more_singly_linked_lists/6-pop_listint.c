#include "lists.h"

/**
 * pop_listint - deletes
 * the head node of a
 * singly linked
 * list containing integers
 * and returns the head node's data
 * @head: a
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
listint_t *tmp;
int data;

if (*head == NULL)
return (0);
data = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);
return (data);
}
