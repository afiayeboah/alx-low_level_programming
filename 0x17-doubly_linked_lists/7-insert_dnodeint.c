#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the head of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The value of the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_head;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		current_head = *h;
		i = 1;
		if (current_head != NULL)
			while (current_head->prev != NULL)
				current_head = current_head->prev;

		while (current_head != NULL)
		{
			if (i == idx)
			{
				if (current_head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = current_head->next;
						new_node->prev = current_head;
						current_head->next->prev = new_node;
						current_head->next = new_node;
					}
				}
				break;
			}
			current_head = current_head->next;
			i++;
		}
	}
	return (new_node);
}
