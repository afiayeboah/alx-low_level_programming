#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * and their lengths
 * @h: pointer to the list_t linked list to print
 * Return: the number of nodes in the linked listZ
 */
size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes_count++;
	}

	return (nodes_count);
}
