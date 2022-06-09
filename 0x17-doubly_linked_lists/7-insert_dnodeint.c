#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: head of doubly linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

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

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: head of the list
 * @n: integer value of data
 *
 * Return: address of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;

	return (new);
}


/**
 * insert_dnodeint_at_index - inserts a node at a given idx
 * @h: head of linked list
 * @idx: index at which node is inserted
 * @n: integer data stored in node
 *
 * Return: address of new node, return NULL if fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	size_t len;
	unsigned int b = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_len(*h);
	if (idx == len - 1)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	temp = *h;
	while (temp)
	{
		if (b == idx)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		b++;
	}
	free(new);
	return (NULL);
}
