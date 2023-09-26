#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_elements = 0;
	int node_distance;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
	node_distance = *h - (*h)->next;
		if (node_distance > 0)
		{

		temp_node = (*h)->next;
		free(*h);
*h = temp_node;
			num_elements++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num_elements++;
			break;
		}
	}


	*h = NULL;

	return (num_elements);
}
