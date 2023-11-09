#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
		{
			free(*head);
			*head = NULL;
		}
		return (1);
	}
	{
		unsigned int i;
		dlistint_t *current = *head;

		for (i = 0; i < index && current != NULL; i++)
		{
			current = current->next;
		}

		if (current == NULL)
			return (-1);

		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}

		if (current->prev != NULL)
		{
			current->prev->next = current->next;
	}
	free(current);
	return (1);
	}
}
