#include "lists.h"

/**
* create_node - Creates a new node.
* @str: String to be inputted in the new node created.
* Return: Pointer to malloced memory.
*/
list_t *create_node(const char *str)
{
list_t *new_node;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->len = strlen(str);
new_node->next = NULL;
return (new_node);
}

/**
* len - Calculates the length of a string.
* @str: String whose length is to be found.
* Return: Length of the string.
*/
int len(const char *str)
{
int length = 0;

if (str == NULL)
return (0);

while (str[length] != '\0')
length++;

return (length);
}

/**
* add_node_end - Adds a new node at the end of a linked list.
* @head: Double pointer to the list_t list.
* @str: String to put in the new node.
* Return: Address of the new element, or NULL if it fails.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp = *head;

if (head == NULL)
return (NULL);

new_node = create_node(str);
if (new_node == NULL)
return (NULL);

if (*head == NULL)
{
*head = new_node;
return (*head);
}

while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;
return (*head);
}
