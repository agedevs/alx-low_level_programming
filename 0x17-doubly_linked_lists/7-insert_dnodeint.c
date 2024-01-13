#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - Function with new node
  * @h: Head variable of doubly linked list
  * @idx: Variable node insertion
  * @n: New node count
  *
  * Return: New node address, or NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *nodep = NULL;
	unsigned int changes = 0, size = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	size = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (size == idx)
		return (add_dnodeint_end(h, n));

	temp = *h;
	while (temp != NULL)
	{
		if (changes == idx)
		{
			nodep = create_node(n, temp, temp->prev);
			temp->prev = nodep;
			temp = nodep;
			temp->prev->next = nodep;
			return (nodep);
		}

		temp = temp->next;
		++changes;
	}

	return (temp);
}

/**
  * dlistint_len - Funtion counter in a doubly linked list
  * @h: Variable counter
  *
  * Return: doubly linked list number
  */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		++size;
		h = h->next;
	}

	return (size);
}

/**
  * create_node - Create a new node with values
  * @n: New node counter
  * @next: Next node new node
  * @prev: Last node of the new node
  *
  * Return: The address of the new node created
  */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;
	return (new_node);
}
