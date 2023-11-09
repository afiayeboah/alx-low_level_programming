#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the list.
 *
 * Description: This function frees a doubly linked list of integers.
 * It iterates through the list, frees each node, and updates the head.
 */
void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return;

while (head->next)
{
dlistint_t *temp = head->next;
free(head);
head = temp;
}
free(head);
}
