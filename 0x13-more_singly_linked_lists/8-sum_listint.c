#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @head: Pointer to the first node in the linked list
 *
 * Return: Resulting sum
 */
int sum_listint(listint_t *head)
{
	int result_sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		result_sum += current_node->n;
		current_node = current_node->next;
	}

	return (result_sum);
}
