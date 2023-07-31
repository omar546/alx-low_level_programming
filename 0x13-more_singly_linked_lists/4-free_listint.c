#include "lists.h"

/**
 * free_listint - frees the memory allocated for
 * a singly linked list containing integers
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *nav = head, *nav2;

    while (nav)
    {
        nav2 = nav->next;
        free(nav);
        nav = nav2;
    }
}
