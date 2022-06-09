#include "lists.h"

/**
 * sum_dlistint - sums all the data(n) of the elements
 * in a doubly linked list
 * @head: head of linked list
 *
 * Return: sum of all the data, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sub;
	int sum = 0;

	if (head == NULL)
		return (sum);

	sub = head;
	while (sub)
	{
		sum += sub->n;
		sub = sub->next;
	}
	return (sum);
}
