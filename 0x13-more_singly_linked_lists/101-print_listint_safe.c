#include "lists.h"
#include <stdio.h>

size_t count_loop_nodes(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * count_loop_nodes - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t count_loop_nodes(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes_count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes_count++;
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			while (slow != fast)
			{
				nodes_count++;
				slow = slow->next;
			}

			return (nodes_count);
		}

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_count, index = 0;

	nodes_count = count_loop_nodes(head);

	if (nodes_count == 0)
	{
		for (; head != NULL; nodes_count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes_count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes_count);
}
