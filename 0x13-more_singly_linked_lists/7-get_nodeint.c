#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a
 * specified index in a linked list
 * @head: Pointer to the first node in the linked list
 * @index: Index of the node to return
 * Return: Pointer to the node at the
 * specified index, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *current_node = head;

	while (current_node && j < index)
	{
		current_node = current_node->next;
		j++;
	}

	return (current_node ? current_node : NULL);
}
