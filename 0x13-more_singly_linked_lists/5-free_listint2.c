#include "lists.h"

/**
 * free_listint2 - Frees a linked list of listint_t nodes
 * and sets the head to NULL
 * @head: Pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
		return;

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}

	*head = NULL;
}
