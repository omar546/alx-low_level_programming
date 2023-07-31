#include "lists.h"

/**
 * free_listint - Frees the memory allocated for a singly linked list
 *                containing integers.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees the memory of each node in the linked list
 *              starting from the head.
 */
void free_listint(listint_t *head)
{
    listint_t *current = head;
    listint_t *next_node;

    while (current != NULL)
    {
        next_node = current->next; // Store the next node address.
        free(current); // Free the current node.
        current = next_node; // Move to the next node.
    }
}
