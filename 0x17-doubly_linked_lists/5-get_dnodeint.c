#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to search for, starting from 0.
 *
 * Return: The nth node or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index;
	dlistint_t *current_node;

	current_index = 0;

	if (head == NULL)
		return (NULL);

	current_node = head;

	while (current_node)
	{
		if (current_index == index)
			return (current_node);

		current_index++;
		current_node = current_node->next;
	}

	return (NULL);
}
