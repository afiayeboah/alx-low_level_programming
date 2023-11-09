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
		return (delete_first_node(head));

	return (delete_node_at_index(head, index));
}

/**
 * delete_first_node - Deletes the first node of the list.
 * @head: A pointer to the head of the list.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_first_node(dlistint_t **head)
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

/**
 * delete_node_at_index - Deletes a node at a specific index.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_node_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	delete_node(current);

	return (1);
}

/**
 * delete_node - Deletes a given node.
 * @node: The node to be deleted.
 */
void delete_node(dlistint_t *node)
{
	if (node->next != NULL)
		node->next->prev = node->prev;

	if (node->prev != NULL)
		node->prev->next = node->next;

	free(node);
}
