#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the first node in the list
 * @idx: Index where the new node is to be inserted
 * @n: Data to insert in the new node
 * Return: Pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (index = 0; current_node && index < idx; index++)
	{
		if (index == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
			current_node = current_node->next;
	}

	return (NULL);
}
