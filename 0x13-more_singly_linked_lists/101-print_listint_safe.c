#include "lists.h"
#include <stdio.h>

/**
* print_listint - Prints all elements in a listint_t list.
* @head: The head of the linked list.
* Return: The number of nodes.
*/
size_t print_listint(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		printf("%d\n", head->n);
	node_count++;
	head = head->next;
	}

	return (node_count);
}

/**
* add_node_at_beginning - Adds a new node at the beginning of a linked list.
* @first: Pointer to the first node in the list.
* @data: Data to insert in the new node.
* Return: Pointer to the new node, or NULL if it failed
*/
listint_t *add_node_at_beginning(listint_t **first, const int data)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	return (NULL);

	new_node->n = data;
	new_node->next = *first;
	*first = new_node;

	return (new_node);
}

/**
* count_nodes_in_loop - Counts the number of nodes in a looped list
* @head: A pointer to the head of the list to check
* Return: The number of nodes in the loop, or 0 if there's no loop
*/
size_t count_nodes_in_loop(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
	return (0);

	while (hare && hare->next)
	{
	tortoise = tortoise->next;
	hare = hare->next->next;

	if (tortoise == hare)
	{
	hare = head;
	while (tortoise != hare)
	{
	nodes++;
		tortoise = tortoise->next;
		hare = hare->next;
		}
	{
		nodes++;
		hare = hare->next;
	} while (tortoise != hare);

	return (nodes);
	}
	}

	return (0);
}

/**
* print_listint_safe - Prints a listint_t list safely
* @head: A pointer to the head of the listint_t list
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes_in_loop = count_nodes_in_loop(head);
	size_t total_nodes = 0;

	while (head)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	total_nodes++;

	if (total_nodes == nodes_in_loop)
		break;
	}

	if (nodes_in_loop > 0)
	printf("Loop starts at: [%p] %d\n", (void *)head, head->n);

	return (total_nodes);
}
