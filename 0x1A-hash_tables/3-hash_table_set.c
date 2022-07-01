#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *head, *node;

	if (ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		head = ht->array[idx];
		if (strcmp(key, head->key) == 0)
			head->value = strdup(value);
		else
		{
			node->next = head;
			ht->array[idx] = node;
		}
	}
	return (1);
}
