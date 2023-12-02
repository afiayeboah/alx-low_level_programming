#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: A pointer to the hash table to be deleted.
 *
 * Description: Frees the memory allocated for the hash table and its elements.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *current_table = ht;
	hash_node_t *current_node, *next_node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				next_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = next_node;
			}
		}
	}

	free(current_table->array);
	free(current_table);
}
