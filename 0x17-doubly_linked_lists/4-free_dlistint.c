#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *current_head)
{
    if (current_head == NULL)
        return;

    while (current_head->next)
    {
        current_head = current_head->next;
        free(current_head->prev);
    }
    free(current_head);
}
