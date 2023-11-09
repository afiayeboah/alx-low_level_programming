#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a doubly linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of the data. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum;

	total_sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total_sum += head->n;
			head = head->next;
		}
	}

	return (total_sum);
}
