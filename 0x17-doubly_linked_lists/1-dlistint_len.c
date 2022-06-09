#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: head of a doubly linked list
 *
 * Return: length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
