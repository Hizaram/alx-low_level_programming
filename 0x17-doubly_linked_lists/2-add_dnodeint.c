#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of
 * a doubly linked list
 * @head: head node of list
 * @n: data of the node
 *
 * Return: the address of the new node, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
