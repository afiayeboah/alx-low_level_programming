#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_elements = 0;
	listint_t *temp_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		printf("[%p] %d\n", (void *)*h, (*h)->n);
		temp_node = (*h)->next;
		free(*h);
		*h = temp_node;
		num_elements++;
	}

	*h = NULL;

	return (num_elements);
}
