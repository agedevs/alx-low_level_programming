#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - Function with new nodes at start
  * of doubly linked list
  * @head: Head variable to doubly linked list
  * @n: Variable with new nodes placement
  *
  * Return: new head
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodep = NULL;

	nodep = malloc(sizeof(dlistint_t));
	if (nodep == NULL)
		return (NULL);

	nodep->n = n;
	if (*head)
	{
		nodep->next = *head;
		nodep->prev = (*head)->prev;
		(*head)->prev = nodep;
		*head = nodep;
		return (*head);
	}

	nodep->next = *head;
	nodep->prev = NULL;
	*head = nodep;
	return (*head);
}
