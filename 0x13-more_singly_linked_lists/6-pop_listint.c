#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to a pointer to the head of the linked list
 *
 * Return: The data inside the element that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;

	return (data);
}
