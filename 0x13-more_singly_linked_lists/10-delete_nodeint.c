#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * index of a listint_t linked list
 * @head: Pointer to a pointer to the first node in the list
 * @index: Index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *temp_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!current_node || !(current_node->next))
			return (-1);
		current_node = current_node->next;
		i++;
	}

	temp_node = current_node->next;
	current_node->next = temp_node->next;
	free(temp_node);

	return (1);
}
