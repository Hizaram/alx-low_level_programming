#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;
	int start = 1;

	if (ht == NULL)
		return;

	printf("{");
	idx = 0;
	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node != NULL)
		{
			if (start == 1)
			{
				printf("'%s': '%s'", node->key, node->value);
				start = 0;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
		idx++;
	}
	printf("}\n");
}
