#include "lists.h"

/**
* free_list - Frees a linked list.
* @head: Pointer to the head of the list to be freed.
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}

	free(head->str);
	free(head);
}
